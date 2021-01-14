/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@protocol AVPlayerViewControllerDelegate_WebKitOnly;
@class NSString;

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {

	VideoFullscreenInterfaceAVKit* _fullscreenInterface;
	RetainPtr<UIViewController>* _presentingViewController;
	RetainPtr<AVPlayerViewController>* _avPlayerViewController;
	RetainPtr<NSTimer>* _startPictureInPictureTimer;
	RetainPtr<AVObservationController>* _avPlayerViewControllerObservationController;
	id<AVPlayerViewControllerDelegate_WebKitOnly> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)setPlayerController:(id)arg1 ;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)showsPlaybackControls;
-(void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(void)enterFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exitFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(id)initWithFullscreenInterface:(VideoFullscreenInterfaceAVKit*)arg1 ;
-(BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)arg1 ;
-(void)tryToStartPictureInPicture;
-(BOOL)pictureInPictureActive;
-(id)avPlayerViewController;
-(id)view;
-(void)removeFromParentViewController;
-(void)startPictureInPicture;
-(void)stopPictureInPicture;
-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPicturePossible;
-(void)dealloc;
@end

