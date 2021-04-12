/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

@class UIView;


@protocol CRKAnimationCoordinating <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,copy) id initialSetup; 
@property (nonatomic,copy) id finalSetup; 
@property (nonatomic,copy) id animations; 
@property (nonatomic,copy) id completion; 
@property (assign,nonatomic) double duration; 
@required
-(double)duration;
-(id)animations;
-(void)setAnimations:(/*^block*/id)arg1;
-(void)setCompletion:(/*^block*/id)arg1;
-(id)completion;
-(void)setDuration:(double)arg1;
-(UIView *)containerView;
-(BOOL)isAnimated;
-(id)initialSetup;
-(void)setInitialSetup:(/*^block*/id)arg1;
-(id)finalSetup;
-(void)setFinalSetup:(/*^block*/id)arg1;

@end

