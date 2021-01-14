/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIConstantConstraintSet.h>

@class NSLayoutConstraint;

@interface _UIFlexibleConstantConstraintSet : _UIConstantConstraintSet {

	NSLayoutConstraint* _minConstraint;
	NSLayoutConstraint* _maxConstraint;
	NSLayoutConstraint* _equalityConstraint;
	BOOL _equalityConstraintPrefersMin;
	double _minConstant;
	double _maxConstant;
	double _equalityConstant;

}

@property (assign,nonatomic) double minConstant;                   //@synthesize minConstant=_minConstant - In the implementation block
@property (assign,nonatomic) double maxConstant;                   //@synthesize maxConstant=_maxConstant - In the implementation block
@property (assign,nonatomic) double equalityConstant;              //@synthesize equalityConstant=_equalityConstant - In the implementation block
+(id)constraintSetWithRequiredEqualityConstraint:(id)arg1 ;
+(id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 ;
-(void)setMinConstant:(double)arg1 ;
-(void)_updateInequalityConstants;
-(double)maxConstant;
-(id)_preferredInequalityConstraint;
-(void)setMaxConstant:(double)arg1 ;
-(double)minConstant;
-(id)_otherInequalityConstraint;
-(BOOL)_equalityConstraintIsRequired;
-(id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(BOOL)arg3 ;
-(double)equalityConstant;
-(void)setEqualityConstant:(double)arg1 ;
@end

