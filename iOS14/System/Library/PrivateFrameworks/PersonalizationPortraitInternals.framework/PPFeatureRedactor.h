/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, PPTrialWrapper;

@interface PPFeatureRedactor : NSObject {

	_PASLock* _lock;
	PPTrialWrapper* _trialWrapper;

}
-(id)initWithTrialWrapper:(id)arg1 namespaceName:(id)arg2 ;
-(void)_loadAssetsWithNamespaceName:(id)arg1 ;
-(void)_loadWithAssetData:(id)arg1 ;
-(void)transformFeaturesInPlace:(id)arg1 ;
@end

