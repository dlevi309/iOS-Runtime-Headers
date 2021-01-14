/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableDictionary;

@interface CLSCurationSession : NSObject {

	NSMutableDictionary* _curationModelBySpecification;

}
+(double)legacyAestheticScoreThresholdToBeAwesome;
+(void)enumerateSignalsFromAsset:(id)arg1 fullHierarchyName:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)addAudioClassifications:(short)arg1 toAudioClassificationCounts:(id)arg2 ;
+(double)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+(short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)arg1 threshold:(double)arg2 ;
+(double)legacyAestheticScoreThresholdToNotBeJunk;
+(id)scoringContextWithAssets:(id)arg1 ;
-(id)init;
-(id)curationModelForAsset:(id)arg1 ;
-(id)_curationModelWithSpecification:(id)arg1 ;
-(void)prepareAssets:(id)arg1 ;
-(id)curationModelWithSpecification:(id)arg1 ;
-(id)curationModelForItemInfo:(id)arg1 options:(id)arg2 ;
-(unsigned long long)_latestCurationModelVersionApplicableForCurationModelSpecification:(id)arg1 ;
-(id)curationModelWithCurationModelVersion:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(id)latestCurationModelForTesting;
@end

