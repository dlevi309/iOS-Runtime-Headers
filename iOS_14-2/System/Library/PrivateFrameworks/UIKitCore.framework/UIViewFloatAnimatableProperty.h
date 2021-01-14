/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVelocity:(double)arg1 ;
-(void)setTransformer:(_UIViewAnimatablePropertyTransformer *)arg1 ;
-(_UIViewAnimatablePropertyTransformer *)transformer;
-(BOOL)isInvalidated;
-(double)velocity;
-(id)init;
-(double)presentationValue;
-(UIAnimatableProperty *)animatableProperty;
-(void)setValue:(double)arg1 ;
-(void)setPerformingInterpolationBetweenTwoStates:(BOOL)arg1 ;
-(BOOL)performingInterpolationBetweenTwoStates;
-(void)setAnimatableProperty:(UIAnimatableProperty *)arg1 ;
-(void)invalidate;
-(double)value;
-(void)dealloc;
@end

