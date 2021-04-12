/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OFViewControllerInteractiveTransitioning <NSObject>
@property (readonly) BOOL tracksWithFinger; 
@required
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
-(BOOL)tracksWithFinger;
-(void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2;
-(void)startInteractiveTransitionWithContext:(id)arg1;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;

@end

