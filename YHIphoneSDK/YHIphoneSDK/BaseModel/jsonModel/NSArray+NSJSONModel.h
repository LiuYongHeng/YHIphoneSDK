//
//  NSArray+NSJSONModel.h
//  NiusaoCustomer
//
//  Created by 大笨钟 on 16/3/12.
//  Copyright © 2016年 hhn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (NSJSONModel)

/*!
 将JSON转过来的一个数组转换成相应的model类型的数组，支持多级内嵌的模式
 简单的形式，字典的数组转换成model的数组:
 [{},{},{}] ===> [m1,m2,m3]
 
 也可能是nested的数组
 [[{},{}],[{},{}],[{}]] ===> [[m1,m2],[m3,m4],[m5]]
 
 从上面也可以看出局限性，就是数组或者内嵌数组中的元素转换后的目标model类型必须是同种类型
 */
- (NSArray *)modelArrayWithClass:(Class)modelClass;

- (NSArray *)toJSONArray;

@end
