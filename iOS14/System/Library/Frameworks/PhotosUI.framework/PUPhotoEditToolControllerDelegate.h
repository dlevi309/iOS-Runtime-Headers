/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPhotoEditToolControllerDelegate <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource>
@required
-(BOOL)isVideoOn;
-(void)updateProgressIndicatorAnimated:(BOOL)arg1;
-(id)toolControllerMainRenderer:(id)arg1;
-(id)toolControllerUneditedCompositionController:(id)arg1;
-(unsigned long long)toolControllerSourceAssetType:(id)arg1;
-(id)toolControllerMainContainerView:(id)arg1;
-(void)toolController:(id)arg1 switchEditSource:(long long)arg2;
-(long long)overcaptureType;
-(CGSize*)toolControllerOriginalOrientedImageSize:(id)arg1;
-(void)toolControllerDidChangeWantsDefaultPreviewView:(id)arg1;
-(BOOL)isStandardVideo;
-(BOOL)hasLoopingVideoAdjustment;
-(BOOL)isLoopingVideo;
-(id)toolControllerOriginalCompositionController:(id)arg1;
-(void)toolController:(id)arg1 didChangePreferredPreviewViewInsetsAnimated:(BOOL)arg2;
-(SCD_Struct_PU24*)toolControllerImageModulationOptions:(id)arg1;
-(void)toolControllerRequestLivePhoto:(id)arg1 filters:(id)arg2 completion:(/*^block*/id)arg3;
-(void)toolControllerDidUpdateToolbar:(id)arg1;
-(void)toggleLivePhotoActive;
-(void)updateMutedState;
-(void)configureEnablenessOfControlButton:(id)arg1 animated:(BOOL)arg2 canVisuallyDisable:(BOOL)arg3;
-(BOOL)isHighframeRateVideo;
-(id)mainLivePhotoView;
-(void)dismissLivePhotoRevertConfirmationAlert;
-(id)fontForButtons;
-(id)toolControllerPlaceholderImage:(id)arg1;
-(long long)sourceSelection;
-(id)toolControllerHitEventForwardView:(id)arg1;
-(void)toolControllerDidChangePreferredAlternateToolbarButton:(id)arg1;
-(void)toolControllerDidChangeIsPerformingLiveInteraction:(id)arg1;
-(BOOL)isImageZooming;
-(id)toolControllerLivePhoto:(id)arg1;
-(void)toolControllerDidFinishLoadingThumbnails:(id)arg1;
-(void)toolController:(id)arg1 updateModelDependentControlsAnimated:(BOOL)arg2;
-(id)toolControllerPreviewView:(id)arg1;
-(CGSize*)toolControllerOriginalImageSize:(id)arg1;
-(void)toolControllerDidFinish:(id)arg1;
-(CGPoint*)toolController:(id)arg1 originalPointFromViewPoint:(CGPoint)arg2 view:(id)arg3;
-(CGPoint*)toolController:(id)arg1 viewPointFromOriginalPoint:(CGPoint)arg2 view:(id)arg3;
-(BOOL)isImageFrameReady;
-(CGRect*)previewViewFrame;
-(id)mediaView;
-(id)imageProperties;

@end

