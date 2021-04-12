/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@protocol IMTypingIndicatorLayerProtocol <NSObject>
@property (assign,nonatomic) BOOL hasDarkBackground; 
@optional
-(void)setTraitCollection:(id)arg1;

@required
-(void)stopPulseAnimation;
-(void)startPulseAnimation;
-(void)startGrowAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(void)startGrowAnimation;
-(void)stopAnimation;
-(BOOL)hasDarkBackground;
-(void)setHasDarkBackground:(BOOL)arg1;

@end

