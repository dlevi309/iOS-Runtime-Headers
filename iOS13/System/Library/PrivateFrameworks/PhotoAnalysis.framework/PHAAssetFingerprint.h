/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PHAMutableFloatArray;

@interface PHAAssetFingerprint : NSObject {

	PHAMutableFloatArray* _floatArray;

}

@property (nonatomic,copy,readonly) PHAMutableFloatArray * floatArray;              //@synthesize floatArray=_floatArray - In the implementation block
+(long long)versionForVersionName:(id)arg1 ;
+(id)versionNameForVersion:(long long)arg1 ;
+(id)_fingerprintWithSceneprint:(id)arg1 ;
+(id)_fingerprintsWithSceneprints:(id)arg1 ;
+(id)_fingerprintsWithVersion256OfAssets:(id)arg1 error:(id*)arg2 ;
+(id)_fingerprintsWithVersion2048OfAssets:(id)arg1 error:(id*)arg2 ;
+(id)fingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 error:(id*)arg3 ;
+(id)fingerprintWithVersion:(long long)arg1 forAsset:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFloatArray:(id)arg1 ;
-(PHAMutableFloatArray *)floatArray;
@end

