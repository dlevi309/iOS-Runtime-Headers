/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutDimension : NSLayoutAnchor
-(BOOL)isCompatibleWithAnchor:(id)arg1 ;
-(BOOL)validateOtherAttribute:(long long)arg1 ;
-(id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 ;
-(id)constraintEqualToConstant:(double)arg1 ;
-(id)constraintGreaterThanOrEqualToConstant:(double)arg1 ;
-(id)constraintLessThanOrEqualToConstant:(double)arg1 ;
-(id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3 ;
-(id)anchorByAddingConstant:(double)arg1 ;
-(id)anchorByMultiplyingByConstant:(double)arg1 ;
-(id)ruleEqualToConstant:(double)arg1 ;
-(id)ruleLessThanOrEqualToConstant:(double)arg1 ;
-(id)ruleGreaterThanOrEqualToConstant:(double)arg1 ;
-(id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3 ;
-(id)anchorByAddingDimension:(id)arg1 ;
-(id)anchorBySubtractingDimension:(id)arg1 ;
-(id)times:(double)arg1 ;
-(id)plus:(double)arg1 ;
-(id)plusDimension:(id)arg1 ;
-(id)minusDimension:(id)arg1 ;
@end

