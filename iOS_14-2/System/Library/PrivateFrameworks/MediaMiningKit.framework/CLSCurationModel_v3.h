/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSCurationModel_v2.h>

@class CLSNSFWModel, CLSTabooEventModel, CLSPotentialLandmarkModel, CLSSDModel;

@interface CLSCurationModel_v3 : CLSCurationModel_v2 {

	BOOL _r14j9IsAvailable;
	CLSNSFWModel* _nsfwModel;
	CLSTabooEventModel* _tabooEventModel;
	CLSPotentialLandmarkModel* _potentialLandmarkModel;
	CLSSDModel* _sdModel;

}
+(unsigned long long)minimumRequiredSceneAnalysisVersion;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg1 ;
-(BOOL)isShowcasingFoodWithSceneClassification:(id)arg1 ;
-(id)newProcessedSignals;
-(BOOL)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithProcessedSignals:(id)arg1 ;
-(BOOL)hasPoorResolutionWithAsset:(id)arg1 ;
-(void)enumerateSignalModelsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isJunkWithJunkClassification:(id)arg1 ;
-(id)initWithCurationModelSpecification:(id)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithSignals:(id)arg1 ;
-(BOOL)isTragicFailureWithImageAsset:(id)arg1 ;
@end

