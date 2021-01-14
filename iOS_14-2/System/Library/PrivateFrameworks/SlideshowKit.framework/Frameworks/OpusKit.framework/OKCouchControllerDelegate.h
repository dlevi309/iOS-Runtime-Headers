/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

@class OKPageViewController;


@protocol OKCouchControllerDelegate <NSObject>
@property (readonly) OKPageViewController * currentPageViewController; 
@optional
-(BOOL)couchControllerCanStartPlayback:(id)arg1;
-(void)couchControllerWillStartPlayback:(id)arg1;
-(void)couchControllerDidStopPlayback:(id)arg1;
-(BOOL)thingsAreReadyInCurrentPageForCouchController:(id)arg1;
-(BOOL)couchController:(id)arg1 thingsAreReadyForNextStep:(id)arg2 withProgress:(double*)arg3;
-(void)couchControllerStartsWaitingForReadiness:(id)arg1;
-(void)couchControllerWaitingForReadiness:(id)arg1 withProgress:(double)arg2;
-(void)couchControllerStopsWaitingForReadiness:(id)arg1;
-(void)couchControllerPlaybackLooped:(id)arg1;
-(void)couchControllerPlaybackCompleted:(id)arg1;

@required
-(OKPageViewController *)currentPageViewController;

@end

