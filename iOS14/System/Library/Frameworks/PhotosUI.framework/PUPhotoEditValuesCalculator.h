/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class PUPhotoEditImageValues, PICompositionController, NSObject, PLEditSource;

@interface PUPhotoEditValuesCalculator : PXObservable {

	PUPhotoEditImageValues* _currentImageValues;
	PUPhotoEditImageValues* _currentGeometricValues;
	PUPhotoEditImageValues* _initialImageValues;
	PUPhotoEditImageValues* _initialGeometricValues;
	PICompositionController* _compositionControllerForCurrentValues;
	NSObject*<OS_dispatch_queue> _imageValuesComputationQueue;
	NSObject*<OS_dispatch_group> _computingImageValuesGroup;
	NSObject*<OS_dispatch_queue> _geometricValuesComputationQueue;
	NSObject*<OS_dispatch_group> _computingGeometricValuesGroup;
	long long _currentSourceSelection;
	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	PICompositionController* _compositionController;
	SCD_Struct_PH4 _videoFrameTime;

}

@property (nonatomic,retain) PLEditSource * editSource;                                    //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,retain) PLEditSource * overcaptureEditSource;                         //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,retain) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,readonly) BOOL hasImageValues; 
@property (assign,nonatomic) SCD_Struct_PH4 videoFrameTime;                                //@synthesize videoFrameTime=_videoFrameTime - In the implementation block
+(BOOL)shouldRunGeometricAutoCalculatorForSource:(id)arg1 ;
-(id)init;
-(void)updateAdjustmentSmartToneStatistics:(id)arg1 withAccuracy:(long long)arg2 ;
-(void)precomputeGeometricValues;
-(id)smartColorStatisticsWithAccuracy:(long long)arg1 ;
-(void)computeAutoEnhanceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)autoPerspectiveValuesWithAccuracy:(long long)arg1 ;
-(id)autoCropValuesWithAccuracy:(long long)arg1 ;
-(id)apertureValuesWithAccuracy:(long long)arg1 ;
-(id)portraitValuesWithAccuracy:(long long)arg1 ;
-(BOOL)hasImageValues;
-(void)precomputeImageValues;
-(void)setVideoFrameTime:(SCD_Struct_PH4)arg1 ;
-(id)mutableChangeObject;
-(void)invalidate;
-(double)smartToneAutoSuggestion;
-(double)smartColorAutoSuggestion;
-(void)setEditSource:(PLEditSource *)arg1 ;
-(id)currentEditSource;
-(id)smartToneStatisticsWithAccuracy:(long long)arg1 ;
-(id)primarySmartToneStatisticsWithAccuracy:(long long)arg1 ;
-(BOOL)_imageCurrentValuesCacheIsValid;
-(id)overcaptureSmartToneStatisticsWithAccuracy:(long long)arg1 ;
-(BOOL)_geometricCurrentValuesCacheIsValid;
-(void)precomputeImageValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)precomputeImageValuesWithOptionalCompletion:(/*^block*/id)arg1 ;
-(void)_ensureCurrentImageValuesAreComputed;
-(void)_ensureInitialImageValuesAreComputed;
-(void)_ensureCurrentGeometricValuesAreComputed;
-(void)_ensureInitialGeometricValuesAreComputed;
-(SCD_Struct_PH4)videoFrameTime;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(void)setOvercaptureEditSource:(PLEditSource *)arg1 ;
-(PLEditSource *)overcaptureEditSource;
-(void)setCompositionController:(PICompositionController *)arg1 ;
@end

