/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXTrimToolPlayerObserver.h>
#import <libobjc.A.dylib/PXLivePhotoTrimScrubberDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PULivePhotoKeyFrameSelectionViewControllerDelegate.h>
#import <libobjc.A.dylib/PXSlowMotionEditorDelegate.h>

@protocol PUTrimToolControllerDelegate, PXTrimToolPlayerWrapper;
@class PXLivePhotoTrimScrubber, PXSlowMotionEditor, PUTimeCodeOverlayView, NSLayoutConstraint, PXLivePhotoTrimScrubberSpec, UIButton, PICompositionController, PLEditSource, UIVisualEffectView, PULivePhotoKeyFrameSelectionViewController, PLPhotoEditRenderer, AVPlayerItem, PXLivePhotoTrimScrubberSnapStripController, NSNumber, UILabel, UIView, UIImage, NSString;

@interface PUTrimToolController : UIViewController <PXTrimToolPlayerObserver, PXLivePhotoTrimScrubberDelegate, UIPopoverPresentationControllerDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate, PXSlowMotionEditorDelegate> {

	PXLivePhotoTrimScrubber* _trimScrubber;
	PXSlowMotionEditor* _slomoView;
	BOOL _needsUpdateRenderForVisualChanges;
	PUTimeCodeOverlayView* _timeCodeOverlayView;
	NSLayoutConstraint* _timeCodeHorizontalConstraint;
	PXLivePhotoTrimScrubberSpec* _spec;
	BOOL _disabled;
	BOOL _slomoEnabled;
	BOOL _slomoDraggingStartHandle;
	BOOL _playButtonEnabled;
	UIButton* _playPauseButton;
	id<PUTrimToolControllerDelegate> _delegate;
	id<PXTrimToolPlayerWrapper> _playerWrapper;
	PICompositionController* _compositionController;
	unsigned long long _state;
	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	UIVisualEffectView* _auxilaryContainerView;
	UIVisualEffectView* _scrubberPlayButtonContainerView;
	NSLayoutConstraint* _scrubberContainerToAuxiliaryContainerConstraint;
	PULivePhotoKeyFrameSelectionViewController* _livePhotoKeyFramePicker;
	PLPhotoEditRenderer* __renderer;
	AVPlayerItem* _currentVideoPlayerItem;
	PXLivePhotoTrimScrubberSnapStripController* _snapStripController;
	unsigned long long _playheadStyle;
	unsigned long long _internalState;
	NSNumber* _slomoTimeForPlayheadUpdate;
	UILabel* _debugTimeCodeLabel;
	UILabel* _debugPlayerTimeLabel;
	UILabel* _debugOriginalTimeLabel;
	UILabel* _debugTrimToolStateLabel;
	UILabel* _debugTrimToolPlayheadStyleLabel;
	UIView* _debugStartRectView;
	UIView* _debugEndRectView;
	UIView* _debugStartOffsetView;
	UIView* _debugEndOffsetView;
	SCD_Struct_PH4 _unadjustedStillImageTime;
	SCD_Struct_PH4 _originalStartTime;
	SCD_Struct_PH4 _originalEndTime;
	SCD_Struct_PH4 _suggestedKeyFrameTime;
	SCD_Struct_PH4 _cachedFrameDuration;
	SCD_Struct_PH4 _unadjustedAssetDuration;
	SCD_Struct_PH4 _debugPlayerTime;

}

@property (nonatomic,readonly) SCD_Struct_PH4 currentStillFrameTime; 
@property (assign,nonatomic) SCD_Struct_PH4 adjustedStillFrameTime; 
@property (nonatomic,retain) PLEditSource * editSource;                                                                //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,retain) PLEditSource * overcaptureEditSource;                                                     //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * auxilaryContainerView;                                               //@synthesize auxilaryContainerView=_auxilaryContainerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * scrubberPlayButtonContainerView;                                     //@synthesize scrubberPlayButtonContainerView=_scrubberPlayButtonContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * scrubberContainerToAuxiliaryContainerConstraint;                     //@synthesize scrubberContainerToAuxiliaryContainerConstraint=_scrubberContainerToAuxiliaryContainerConstraint - In the implementation block
@property (assign,nonatomic,__weak) PULivePhotoKeyFrameSelectionViewController * livePhotoKeyFramePicker;              //@synthesize livePhotoKeyFramePicker=_livePhotoKeyFramePicker - In the implementation block
@property (setter=_setRenderer:,nonatomic,retain) PLPhotoEditRenderer * _renderer;                                     //@synthesize _renderer=__renderer - In the implementation block
@property (nonatomic,retain) AVPlayerItem * currentVideoPlayerItem;                                                    //@synthesize currentVideoPlayerItem=_currentVideoPlayerItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 cachedFrameDuration;                                                       //@synthesize cachedFrameDuration=_cachedFrameDuration - In the implementation block
@property (nonatomic,retain) PXLivePhotoTrimScrubberSnapStripController * snapStripController;                         //@synthesize snapStripController=_snapStripController - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 unadjustedAssetDuration;                                                   //@synthesize unadjustedAssetDuration=_unadjustedAssetDuration - In the implementation block
@property (assign,nonatomic) unsigned long long playheadStyle;                                                         //@synthesize playheadStyle=_playheadStyle - In the implementation block
@property (assign,nonatomic) unsigned long long internalState;                                                         //@synthesize internalState=_internalState - In the implementation block
@property (assign,nonatomic) BOOL slomoDraggingStartHandle;                                                            //@synthesize slomoDraggingStartHandle=_slomoDraggingStartHandle - In the implementation block
@property (nonatomic,readonly) BOOL playButtonEnabled;                                                                 //@synthesize playButtonEnabled=_playButtonEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * slomoTimeForPlayheadUpdate;                                                    //@synthesize slomoTimeForPlayheadUpdate=_slomoTimeForPlayheadUpdate - In the implementation block
@property (nonatomic,retain) UILabel * debugTimeCodeLabel;                                                             //@synthesize debugTimeCodeLabel=_debugTimeCodeLabel - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 debugPlayerTime;                                                           //@synthesize debugPlayerTime=_debugPlayerTime - In the implementation block
@property (nonatomic,retain) UILabel * debugPlayerTimeLabel;                                                           //@synthesize debugPlayerTimeLabel=_debugPlayerTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * debugOriginalTimeLabel;                                                         //@synthesize debugOriginalTimeLabel=_debugOriginalTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * debugTrimToolStateLabel;                                                        //@synthesize debugTrimToolStateLabel=_debugTrimToolStateLabel - In the implementation block
@property (nonatomic,retain) UILabel * debugTrimToolPlayheadStyleLabel;                                                //@synthesize debugTrimToolPlayheadStyleLabel=_debugTrimToolPlayheadStyleLabel - In the implementation block
@property (nonatomic,retain) UIView * debugStartRectView;                                                              //@synthesize debugStartRectView=_debugStartRectView - In the implementation block
@property (nonatomic,retain) UIView * debugEndRectView;                                                                //@synthesize debugEndRectView=_debugEndRectView - In the implementation block
@property (nonatomic,retain) UIView * debugStartOffsetView;                                                            //@synthesize debugStartOffsetView=_debugStartOffsetView - In the implementation block
@property (nonatomic,retain) UIView * debugEndOffsetView;                                                              //@synthesize debugEndOffsetView=_debugEndOffsetView - In the implementation block
@property (assign,nonatomic,__weak) id<PUTrimToolControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<PXTrimToolPlayerWrapper> playerWrapper;                                              //@synthesize playerWrapper=_playerWrapper - In the implementation block
@property (nonatomic,retain) PICompositionController * compositionController;                                          //@synthesize compositionController=_compositionController - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 unadjustedStillImageTime;                                                  //@synthesize unadjustedStillImageTime=_unadjustedStillImageTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 originalStartTime;                                                         //@synthesize originalStartTime=_originalStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 originalEndTime;                                                           //@synthesize originalEndTime=_originalEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 suggestedKeyFrameTime;                                                     //@synthesize suggestedKeyFrameTime=_suggestedKeyFrameTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 playheadTime; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) BOOL disabled;                                                                            //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                                             //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (getter=isSlomoEnabled,nonatomic,readonly) BOOL slomoEnabled;                                                //@synthesize slomoEnabled=_slomoEnabled - In the implementation block
@property (nonatomic,readonly) double scrubberHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_setState:(unsigned long long)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)_createRendererIfNeeded;
-(void)setInternalState:(unsigned long long)arg1 ;
-(double)scrubberHeight;
-(void)setPlayheadTime:(SCD_Struct_PH4)arg1 ;
-(id)_currentVideoAsset;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)releaseAVObjects;
-(id<PUTrimToolControllerDelegate>)delegate;
-(void)pause;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)_setRenderer:(id)arg1 ;
-(void)play;
-(unsigned long long)internalState;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(PLPhotoEditRenderer *)_renderer;
-(void)setDelegate:(id<PUTrimToolControllerDelegate>)arg1 ;
-(SCD_Struct_PH4)playheadTime;
-(SCD_Struct_PH4)_frameDuration;
-(void)viewDidLoad;
-(void)livePhotoRenderDidChange:(BOOL)arg1 ;
-(id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(BOOL)arg2 slomoEnabled:(BOOL)arg3 ;
-(void)setSuggestedKeyFrameTime:(SCD_Struct_PH4)arg1 ;
-(void)setOriginalEndTime:(SCD_Struct_PH4)arg1 ;
-(void)setOriginalStartTime:(SCD_Struct_PH4)arg1 ;
-(void)setUnadjustedStillImageTime:(SCD_Struct_PH4)arg1 ;
-(void)setEditSource:(id)arg1 overcaptureEditSource:(id)arg2 ;
-(BOOL)isSlomoEnabled;
-(void)userDidRequestToMakeKeyPhoto:(id)arg1 ;
-(void)slowMotionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2 ;
-(void)slowMotionEditorDidEndEditing:(id)arg1 ;
-(void)slowMotionEditorStartValueChanged:(id)arg1 ;
-(void)slowMotionEditorEndValueChanged:(id)arg1 ;
-(BOOL)slowMotionEditorRequestForceZoom:(id)arg1 ;
-(void)slowMotionEditorRequestForceUnzoom:(id)arg1 ;
-(void)trimScrubberAssetDurationDidChange:(id)arg1 ;
-(void)trimScrubber:(id)arg1 didTapElement:(long long)arg2 ;
-(BOOL)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2 ;
-(void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2 ;
-(void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(BOOL)arg3 ;
-(void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2 ;
-(UIButton *)playPauseButton;
-(void)trimScrubber:(id)arg1 didChangeLoupeRect:(CGRect)arg2 ;
-(void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3 ;
-(void)trimScrubberDidUnzoom:(id)arg1 ;
-(void)trimScrubberDidLayoutSubviews:(id)arg1 ;
-(void)trimScrubber:(id)arg1 debugStartRect:(CGRect)arg2 ;
-(void)trimScrubber:(id)arg1 debugEndRect:(CGRect)arg2 ;
-(void)setPlayheadStyle:(unsigned long long)arg1 ;
-(void)trimScrubber:(id)arg1 debugStartOffset:(CGRect)arg2 ;
-(void)trimScrubber:(id)arg1 debugEndOffset:(CGRect)arg2 ;
-(void)playerStatusChangedForPlayerWrapper:(id)arg1 ;
-(void)playerWrapper:(id)arg1 timeChanged:(SCD_Struct_PH4)arg2 ;
-(void)compositonDidUpdateForPlayerWrapper:(id)arg1 ;
-(id)initWithPlayerWrapper:(id)arg1 ;
-(id)_playPauseButtonIfLoaded;
-(UIImage *)placeholderImage;
-(void)_seekToTimeForElement:(long long)arg1 exact:(BOOL)arg2 ;
-(SCD_Struct_PH4)currentStillFrameTime;
-(void)setAdjustedStillFrameTime:(SCD_Struct_PH4)arg1 ;
-(SCD_Struct_PH4)adjustedStillFrameTime;
-(BOOL)_allowsKeyFrameCreation;
-(void)_showKeyFrameSelection;
-(void)setDebugPlayerTime:(SCD_Struct_PH4)arg1 ;
-(void)_updateDebugTimeCodeLabel;
-(void)_updatePublicState;
-(void)_updateDebugPlayerTimeLabel;
-(void)_updateDebugTrimToolStateLabel;
-(void)_updateDebugPlayheadStyleLabel;
-(void)_updatePlayheadStyle;
-(void)_updatePlayerWrapperTimeObserver;
-(void)_updateScrubberPresentedPlayhead;
-(void)_updateTimeCodeOverlay;
-(void)_updateCompositionController;
-(void)_updatePlayerWrapperTrim;
-(void)_updateScrubberContents;
-(void)_updateScrubberTimes;
-(void)_updateSnappingDots;
-(void)_updatePlayerItem;
-(void)setCurrentVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)_resetScrubberToStillPhotoFrame;
-(SCD_Struct_PH4)originalEndTime;
-(CGRect)_presentationRectFromLoupeRect;
-(void)_livePhotoKeyFramePickerDidDismiss:(id)arg1 ;
-(void)_updatePlayPauseButton;
-(void)_handlePlayPauseButton:(id)arg1 ;
-(SCD_Struct_PH4)_currentPlayerScaledTimeFromOriginalTime:(SCD_Struct_PH4)arg1 ;
-(SCD_Struct_PH4)_originalTimeFromCurrentPlayerScaledTime:(SCD_Struct_PH4)arg1 ;
-(id<PXTrimToolPlayerWrapper>)playerWrapper;
-(SCD_Struct_PH4)originalStartTime;
-(id)_slomoMapperForCurrentConfiguration;
-(SCD_Struct_PH4)unadjustedStillImageTime;
-(SCD_Struct_PH4)suggestedKeyFrameTime;
-(UIVisualEffectView *)auxilaryContainerView;
-(void)setAuxilaryContainerView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)scrubberPlayButtonContainerView;
-(void)setScrubberPlayButtonContainerView:(UIVisualEffectView *)arg1 ;
-(unsigned long long)playheadStyle;
-(NSLayoutConstraint *)scrubberContainerToAuxiliaryContainerConstraint;
-(void)setScrubberContainerToAuxiliaryContainerConstraint:(NSLayoutConstraint *)arg1 ;
-(PULivePhotoKeyFrameSelectionViewController *)livePhotoKeyFramePicker;
-(void)setLivePhotoKeyFramePicker:(PULivePhotoKeyFrameSelectionViewController *)arg1 ;
-(AVPlayerItem *)currentVideoPlayerItem;
-(SCD_Struct_PH4)cachedFrameDuration;
-(BOOL)playButtonEnabled;
-(void)setCachedFrameDuration:(SCD_Struct_PH4)arg1 ;
-(PXLivePhotoTrimScrubberSnapStripController *)snapStripController;
-(void)setSnapStripController:(PXLivePhotoTrimScrubberSnapStripController *)arg1 ;
-(SCD_Struct_PH4)unadjustedAssetDuration;
-(void)setUnadjustedAssetDuration:(SCD_Struct_PH4)arg1 ;
-(BOOL)slomoDraggingStartHandle;
-(void)setSlomoDraggingStartHandle:(BOOL)arg1 ;
-(NSNumber *)slomoTimeForPlayheadUpdate;
-(void)setSlomoTimeForPlayheadUpdate:(NSNumber *)arg1 ;
-(UILabel *)debugTimeCodeLabel;
-(void)setDebugTimeCodeLabel:(UILabel *)arg1 ;
-(SCD_Struct_PH4)debugPlayerTime;
-(UILabel *)debugPlayerTimeLabel;
-(void)setDebugPlayerTimeLabel:(UILabel *)arg1 ;
-(UILabel *)debugOriginalTimeLabel;
-(void)setDebugOriginalTimeLabel:(UILabel *)arg1 ;
-(UILabel *)debugTrimToolStateLabel;
-(void)setDebugTrimToolStateLabel:(UILabel *)arg1 ;
-(UILabel *)debugTrimToolPlayheadStyleLabel;
-(void)setDebugTrimToolPlayheadStyleLabel:(UILabel *)arg1 ;
-(UIView *)debugStartRectView;
-(void)setDebugStartRectView:(UIView *)arg1 ;
-(UIView *)debugEndRectView;
-(void)setDebugEndRectView:(UIView *)arg1 ;
-(UIView *)debugStartOffsetView;
-(void)setDebugStartOffsetView:(UIView *)arg1 ;
-(UIView *)debugEndOffsetView;
-(void)setDebugEndOffsetView:(UIView *)arg1 ;
-(unsigned long long)state;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setEditSource:(PLEditSource *)arg1 ;
-(id)currentEditSource;
-(BOOL)disabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(void)setOvercaptureEditSource:(PLEditSource *)arg1 ;
-(PLEditSource *)overcaptureEditSource;
-(void)setCompositionController:(PICompositionController *)arg1 ;
@end

