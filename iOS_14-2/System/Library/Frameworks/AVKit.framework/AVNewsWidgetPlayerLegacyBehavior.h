/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVNewsWidgetPlayerBehavior.h>

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;
@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior {

	id<AVPlayerViewControllerContentTransitioning_NewsOnly> _legacyDelegate;

}

@property (assign,nonatomic,__weak) id<AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;              //@synthesize legacyDelegate=_legacyDelegate - In the implementation block
-(id)playerForContentTransitionType:(long long)arg1 ;
-(void)willBeginContentTransition;
-(void)didUpdateContentTransitionProgress:(double)arg1 ;
-(void)willCompleteContentTransition;
-(void)didCompleteContentTransition;
-(void)willCancelContentTransition;
-(void)didCancelContentTransition;
-(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)legacyDelegate;
-(void)setLegacyDelegate:(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)arg1 ;
@end

