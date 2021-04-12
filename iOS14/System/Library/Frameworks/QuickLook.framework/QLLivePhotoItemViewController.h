/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLScrollableContentItemViewController.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PHLivePhotoView, UIImageView, NSLayoutConstraint, NSDate, NSString;

@interface QLLivePhotoItemViewController : QLScrollableContentItemViewController <PHLivePhotoViewDelegate, UIGestureRecognizerDelegate> {

	CGSize _imageSize;
	PHLivePhotoView* _livePhotoView;
	UIImageView* _livePhotoBadge;
	NSLayoutConstraint* _livePhotoBadgeLeftConstraint;
	NSLayoutConstraint* _livePhotoBadgeTopConstraint;
	NSDate* _didEndPlayingTimestamp;
	BOOL _isPlaying;
	BOOL _livePhotoBadgeVisible;
	BOOL _isFullScreen;
	BOOL _fullyZoomedOut;
	BOOL _transitionInProgress;
	BOOL _shouldPlayHint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)preferredWhitePointAdaptivityStyle;
-(CGSize)imageSize;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateLivePhotoBadgeAnimated:(BOOL)arg1 ;
-(BOOL)_wasJustPlaying;
-(void)didEndZoomingAtScale:(double)arg1 ;
-(void)willBeginZooming;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)canToggleFullScreen;
-(void)previewWillFinishAppearing;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnterFullScreen;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

