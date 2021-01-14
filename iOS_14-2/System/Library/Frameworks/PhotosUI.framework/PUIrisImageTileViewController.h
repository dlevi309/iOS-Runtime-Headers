/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUImageTileViewController.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegatePrivate.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@protocol PUIrisImageTileViewControllerDelegate;
@class PUBrowsingViewModel, PHLivePhotoView, PXLivePhotoViewModulator, NSString;

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {

	struct {
		BOOL respondsToDidBeginPlaying;
		BOOL respondsToWillEndPlaying;
		BOOL respondsToDidEndPlaying;
		BOOL respondsToDidEndVitality;
		BOOL respondsToDidBeginHinting;
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToDelegateForGestureRecognizer;
	}  _delegateFlags;
	/*^block*/id _ppt_didEndPlayingHandler;
	id<PUIrisImageTileViewControllerDelegate> _delegate;
	PUBrowsingViewModel* _browsingViewModel;
	PHLivePhotoView* __livePhotoView;
	PXLivePhotoViewModulator* _livePhotoViewModulator;

}

@property (nonatomic,readonly) PHLivePhotoView * _livePhotoView;                                     //@synthesize _livePhotoView=__livePhotoView - In the implementation block
@property (nonatomic,retain) PXLivePhotoViewModulator * livePhotoViewModulator;                      //@synthesize livePhotoViewModulator=_livePhotoViewModulator - In the implementation block
@property (assign,nonatomic,__weak) id<PUIrisImageTileViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAssetViewModel:(id)arg1 ;
-(void)removeAllAnimations;
-(void)updateModulatorInputs;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(id)generateAssetTransitionInfo;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(id<PUIrisImageTileViewControllerDelegate>)delegate;
-(void)_assetFocusValueDidChange;
-(void)_updateVitalityTransform;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)applyLayoutInfo:(id)arg1 ;
-(PHLivePhotoView *)_livePhotoView;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2 ;
-(void)setDelegate:(id<PUIrisImageTileViewControllerDelegate>)arg1 ;
-(void)livePhotoViewDidEndPlayingVitality:(id)arg1 ;
-(void)addToTilingView:(id)arg1 ;
-(void)_updatePlayerViewInteractivePlaybackAllowed;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)ppt_playLivePhotoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)assetViewModelDidChange;
-(void)livePhotoViewDidBeginHinting:(id)arg1 ;
-(void)updateModulator;
-(void)setLivePhotoViewModulator:(PXLivePhotoViewModulator *)arg1 ;
-(void)assetDidChange;
-(void)_updateLivePhotoViewVitalityEnabled;
-(PXLivePhotoViewModulator *)livePhotoViewModulator;
-(id)loadView;
-(void)_updatePlaybackGestureRecognizer;
@end

