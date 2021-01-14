/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXInlineVideoStabilizationSettings : PXSettings {

	BOOL _useMediaAnalysisRecipe;
	BOOL _localCacheForMediaAnalysisRecipes;
	BOOL _crossfadeEnabled;
	BOOL _timeRangeEnabled;
	BOOL _gyroStabilizationEnabled;
	BOOL _pixelStabilizationEnabled;
	BOOL _showDiagnosticUI;
	double _allowedCropFraction;

}

@property (assign,nonatomic) BOOL useMediaAnalysisRecipe;                            //@synthesize useMediaAnalysisRecipe=_useMediaAnalysisRecipe - In the implementation block
@property (assign,nonatomic) BOOL localCacheForMediaAnalysisRecipes;                 //@synthesize localCacheForMediaAnalysisRecipes=_localCacheForMediaAnalysisRecipes - In the implementation block
@property (assign,nonatomic) double allowedCropFraction;                             //@synthesize allowedCropFraction=_allowedCropFraction - In the implementation block
@property (assign,nonatomic) BOOL crossfadeEnabled;                                  //@synthesize crossfadeEnabled=_crossfadeEnabled - In the implementation block
@property (assign,nonatomic) BOOL timeRangeEnabled;                                  //@synthesize timeRangeEnabled=_timeRangeEnabled - In the implementation block
@property (assign,nonatomic) BOOL gyroStabilizationEnabled;                          //@synthesize gyroStabilizationEnabled=_gyroStabilizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL pixelStabilizationEnabled;                         //@synthesize pixelStabilizationEnabled=_pixelStabilizationEnabled - In the implementation block
@property (assign,nonatomic) BOOL showDiagnosticUI;                                  //@synthesize showDiagnosticUI=_showDiagnosticUI - In the implementation block
@property (nonatomic,readonly) unsigned long long allowedAnalysisTypes; 
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)transientProperties;
-(id)parentSettings;
-(void)setDefaultValues;
-(unsigned long long)allowedAnalysisTypes;
-(BOOL)useMediaAnalysisRecipe;
-(void)setUseMediaAnalysisRecipe:(BOOL)arg1 ;
-(BOOL)localCacheForMediaAnalysisRecipes;
-(void)setLocalCacheForMediaAnalysisRecipes:(BOOL)arg1 ;
-(double)allowedCropFraction;
-(BOOL)timeRangeEnabled;
-(void)setTimeRangeEnabled:(BOOL)arg1 ;
-(BOOL)gyroStabilizationEnabled;
-(void)setGyroStabilizationEnabled:(BOOL)arg1 ;
-(BOOL)pixelStabilizationEnabled;
-(void)setPixelStabilizationEnabled:(BOOL)arg1 ;
-(BOOL)showDiagnosticUI;
-(void)setShowDiagnosticUI:(BOOL)arg1 ;
-(void)setAllowedCropFraction:(double)arg1 ;
-(BOOL)crossfadeEnabled;
-(void)setCrossfadeEnabled:(BOOL)arg1 ;
@end

