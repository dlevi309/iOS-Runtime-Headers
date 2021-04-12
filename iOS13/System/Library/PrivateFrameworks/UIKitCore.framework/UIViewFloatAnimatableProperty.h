/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIAnimatablePropertyBase.h>

@class UIAnimatableProperty, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase {

	BOOL _performingInterpolationBetweenTwoStates;
	UIAnimatableProperty* _animatableProperty;

}

@property (nonatomic,retain) UIAnimatableProperty * animatableProperty;                       //@synthesize animatableProperty=_animatableProperty - In the implementation block
@property (nonatomic,retain) _UIViewAnimatablePropertyTransformer * transformer; 
@property (assign,nonatomic) BOOL performingInterpolationBetweenTwoStates;                    //@synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates - In the implementation block
@property (assign,nonatomic) double value; 
@property (nonatomic,readonly) double presentationValue; 
@property (assign,nonatomic) double velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isInvalidated;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(_UIViewAnimatablePropertyTransformer *)transformer;
-(void)setTransformer:(_UIViewAnimatablePropertyTransformer *)arg1 ;
-(double)presentationValue;
-(UIAnimatableProperty *)animatableProperty;
-(void)setAnimatableProperty:(UIAnimatableProperty *)arg1 ;
-(BOOL)performingInterpolationBetweenTwoStates;
-(void)setPerformingInterpolationBetweenTwoStates:(BOOL)arg1 ;
@end

