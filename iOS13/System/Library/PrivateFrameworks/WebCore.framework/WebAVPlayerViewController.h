/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	id<AVPlayerViewControllerDelegate_WebKitOnly> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(id)view;
-(void)removeFromParentViewController;
-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPicturePossible;
-(void)setPlayerController:(id)arg1 ;
-(void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2 ;
-(void)enterFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)exitFullScreenAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startPictureInPicture;
-(void)stopPictureInPicture;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(BOOL)showsPlaybackControls;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(id)initWithFullscreenInterface:(VideoFullscreenInterfaceAVKit*)arg1 ;
-(BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)arg1 ;
-(BOOL)pictureInPictureActive;
-(id)avPlayerViewController;
@end

