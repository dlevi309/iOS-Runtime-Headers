/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKBasePhotoFaceView.h>

@interface NTKUserPhotoFaceView : NTKBasePhotoFaceView {

	BOOL _isContentLoaded;
	unsigned long long _currentAnalysisOperationID;
	BOOL _isAnalysisOperationInProgress;
	BOOL _showingGrid;
	BOOL _irisIndicatorActive;

}

@property (assign,getter=isShowingGrid,nonatomic) BOOL showingGrid;                              //@synthesize showingGrid=_showingGrid - In the implementation block
@property (assign,getter=isIrisIndicatorActive,nonatomic) BOOL irisIndicatorActive;              //@synthesize irisIndicatorActive=_irisIndicatorActive - In the implementation block
+(id)_analysisQ;
-(void)_updateContents;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_cleanupAfterEditing;
-(BOOL)_preloadNextPhoto;
-(void)_updateForResourceDirectoryChange:(id)arg1 ;
-(double)_backgroundImageAlphaForEditMode:(long long)arg1 ;
-(double)_timeLabelAlphaForEditMode:(long long)arg1 ;
-(BOOL)_canOperationProceed:(unsigned long long)arg1 ;
-(void)_operationIsDone;
-(void)_updateDateAttributesAnimated:(BOOL)arg1 ;
-(void)_updateImageToBlur;
-(void)_updateNoPhotosState;
-(void)_setContentBreathingScale:(double)arg1 ;
-(id)customEditingViewController;
-(BOOL)isShowingGrid;
-(void)setShowingGrid:(BOOL)arg1 ;
-(BOOL)isIrisIndicatorActive;
-(void)setIrisIndicatorActive:(BOOL)arg1 ;
@end

