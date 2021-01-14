/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PHLivePhotoViewDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@protocol PULivePhotoVideoOverlayTileViewControllerDelegate;
@class PUBrowsingViewModel, PUOneUpMergedVideoProvider, PXImageModulationManager, NSArray, UIImpactFeedbackGenerator, PUMergedLivePhotosVideo, UIView, PHLivePhotoView, ISWrappedAVPlayer, PUModelTileTransform, PXLivePhotoViewModulator, PUAssetReference, NSString;

@interface PULivePhotoVideoOverlayTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver, PXChangeObserver, PHLivePhotoViewDelegate, ISChangeObserver> {

	BOOL _isPresentedForSecondScreen;
	BOOL _willEndCurrentPlayback;
	PUBrowsingViewModel* _browsingViewModel;
	PUOneUpMergedVideoProvider* _mergedVideoProvider;
	id<PULivePhotoVideoOverlayTileViewControllerDelegate> _delegate;
	PXImageModulationManager* _imageModulationManager;
	NSArray* _playbackGestureRecognizers;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	PUMergedLivePhotosVideo* _mergedVideo;
	UIView* _containerView;
	PHLivePhotoView* _livePhotoView;
	ISWrappedAVPlayer* _videoPlayer;
	id _videoPlayerTimeObserver;
	PUModelTileTransform* _modelTileTransform;
	PXLivePhotoViewModulator* _livePhotoViewModulator;
	PUAssetReference* _playbackAssetReference;

}

@property (nonatomic,readonly) NSArray * playbackGestureRecognizers;                                             //@synthesize playbackGestureRecognizers=_playbackGestureRecognizers - In the implementation block
@property (nonatomic,readonly) UIImpactFeedbackGenerator * feedbackGenerator;                                    //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,readonly) PUMergedLivePhotosVideo * mergedVideo;                                            //@synthesize mergedVideo=_mergedVideo - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                           //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) PHLivePhotoView * livePhotoView;                                                  //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (nonatomic,retain) ISWrappedAVPlayer * videoPlayer;                                                    //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) id videoPlayerTimeObserver;                                                         //@synthesize videoPlayerTimeObserver=_videoPlayerTimeObserver - In the implementation block
@property (nonatomic,retain) PUModelTileTransform * modelTileTransform;                                          //@synthesize modelTileTransform=_modelTileTransform - In the implementation block
@property (nonatomic,retain) PXLivePhotoViewModulator * livePhotoViewModulator;                                  //@synthesize livePhotoViewModulator=_livePhotoViewModulator - In the implementation block
@property (nonatomic,retain) PUAssetReference * playbackAssetReference;                                          //@synthesize playbackAssetReference=_playbackAssetReference - In the implementation block
@property (assign,nonatomic) BOOL willEndCurrentPlayback;                                                        //@synthesize willEndCurrentPlayback=_willEndCurrentPlayback - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * browsingViewModel;                                            //@synthesize browsingViewModel=_browsingViewModel - In the implementation block
@property (nonatomic,retain) PUOneUpMergedVideoProvider * mergedVideoProvider;                                   //@synthesize mergedVideoProvider=_mergedVideoProvider - In the implementation block
@property (assign,nonatomic) BOOL isPresentedForSecondScreen;                                                    //@synthesize isPresentedForSecondScreen=_isPresentedForSecondScreen - In the implementation block
@property (assign,nonatomic,__weak) id<PULivePhotoVideoOverlayTileViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXImageModulationManager * imageModulationManager;                                  //@synthesize imageModulationManager=_imageModulationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageModulationManager:(PXImageModulationManager *)arg1 ;
-(PXImageModulationManager *)imageModulationManager;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(PHLivePhotoView *)livePhotoView;
-(id)videoPlayerTimeObserver;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(BOOL)isPresentedForSecondScreen;
-(id<PULivePhotoVideoOverlayTileViewControllerDelegate>)delegate;
-(void)_updateLivePhotoViewPhoto;
-(void)_updateLivePhotoViewModulatorInput;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)setMergedVideoProvider:(PUOneUpMergedVideoProvider *)arg1 ;
-(PUModelTileTransform *)modelTileTransform;
-(PUBrowsingViewModel *)browsingViewModel;
-(void)setVideoPlayer:(ISWrappedAVPlayer *)arg1 ;
-(void)_updateMergedVideo;
-(void)setModelTileTransform:(PUModelTileTransform *)arg1 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
-(void)_updatePlaybackEnabled;
-(void)setDelegate:(id<PULivePhotoVideoOverlayTileViewControllerDelegate>)arg1 ;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)_updateLivePhotoViewFrame;
-(void)setPlaybackAssetReference:(PUAssetReference *)arg1 ;
-(void)setMergedVideo:(PUMergedLivePhotosVideo *)arg1 ;
-(UIView *)containerView;
-(PUAssetReference *)playbackAssetReference;
-(void)_videoCurrentTimeDidChange:(SCD_Struct_PH4)arg1 ;
-(PUMergedLivePhotosVideo *)mergedVideo;
-(void)_updateLivePhotoViewModulator;
-(void)setWillEndCurrentPlayback:(BOOL)arg1 ;
-(void)setBrowsingViewModel:(PUBrowsingViewModel *)arg1 ;
-(NSArray *)playbackGestureRecognizers;
-(void)setLivePhotoViewModulator:(PXLivePhotoViewModulator *)arg1 ;
-(PUOneUpMergedVideoProvider *)mergedVideoProvider;
-(PXLivePhotoViewModulator *)livePhotoViewModulator;
-(id)loadView;
-(void)setVideoPlayerTimeObserver:(id)arg1 ;
-(id)gestureRecognizers;
-(void)setIsPresentedForSecondScreen:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)willEndCurrentPlayback;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

