/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_initWithEqualityConstraint:(id)arg1 equalityPriority:(unsigned long long)arg2 prefersMin:(BOOL)arg3 ;
-(void)setMinConstant:(double)arg1 ;
-(void)setMaxConstant:(double)arg1 ;
-(void)setEqualityConstant:(double)arg1 ;
-(BOOL)_equalityConstraintIsRequired;
-(void)_updateInequalityConstants;
-(id)_preferredInequalityConstraint;
-(id)_otherInequalityConstraint;
-(double)minConstant;
-(double)maxConstant;
-(double)equalityConstant;
@end

