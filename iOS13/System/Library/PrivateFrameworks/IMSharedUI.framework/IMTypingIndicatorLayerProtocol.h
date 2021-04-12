/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@protocol IMTypingIndicatorLayerProtocol <NSObject>
@property (assign,nonatomic) BOOL hasDarkBackground; 
@optional
-(void)setTraitCollection:(id)arg1;

@required
-(void)stopAnimation;
-(void)startPulseAnimation;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(void)startGrowAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(BOOL)hasDarkBackground;
-(void)setHasDarkBackground:(BOOL)arg1;

@end

