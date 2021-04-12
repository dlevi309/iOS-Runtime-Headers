/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OFViewControllerInteractiveTransitioning <NSObject>
@property (readonly) BOOL tracksWithFinger; 
@required
-(void)startInteractiveTransitionWithContext:(id)arg1;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
-(BOOL)tracksWithFinger;
-(void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;

@end

