/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/CPAnalyticsPhotoKitPropertyProvider.h>
#import <libobjc.A.dylib/CPAnalyticsDynamicPropertyProvider.h>

@class PHPhotoLibrary, NSString;

@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider, CPAnalyticsDynamicPropertyProvider> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetPropertySetsToFetch;
-(id)_mediaCountFromPayload:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)_mediaProperty:(id)arg1 forAsset:(id)arg2 ;
-(id)init;
-(id)_sceneLabelByClassificationIdentifier:(unsigned)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(BOOL)_isSceneConfidenceAboveThresholdForSceneClassification:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_sdConfidenceThresholdForIdentifier:(unsigned)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_PHAssetCollectionFromPayload:(id)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned)arg1 ;
-(id)_sceneForAsset:(id)arg1 ;
-(void)registerSystemProperties:(id)arg1 ;
-(id)_mediaProperty:(id)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)_hasPeopleForSceneClassifications:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_ageDescriptionForMediaDate:(id)arg1 ;
-(BOOL)_isPeopleSceneIdentifier:(unsigned)arg1 ;
-(id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(BOOL)_hasPetsForSceneClassifications:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_sceneSubjectForAsset:(id)arg1 ;
-(id)_PHAssetFromPayload:(id)arg1 ;
-(id)_junkConfidenceThresholdForIdentifier:(unsigned)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned)arg1 ;
-(id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned)arg1 ;
-(id)_cameraTypeFromImportSource:(long long)arg1 ;
@end

