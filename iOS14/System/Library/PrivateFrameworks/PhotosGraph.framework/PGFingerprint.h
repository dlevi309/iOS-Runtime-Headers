/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class MAFloatVector, NSArray;

@interface PGFingerprint : NSObject {

	MAFloatVector* floatArray;
	NSArray* featureNames;

}

@property (nonatomic,copy) MAFloatVector * floatArray; 
@property (nonatomic,copy) NSArray * featureNames; 
+(id)assetFingerprintWithVersion:(long long)arg1 forAsset:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetFingerprintsWithVersion:(long long)arg1 forAssets:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetFingerprintsDataframeWithVersion:(long long)arg1 forAssets:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)_assetFingerprintWithFeatureExtractor:(id)arg1 forAsset:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4 ;
+(id)assetCollectionFingerprintWithVersion:(long long)arg1 forAssetCollection:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetCollectionFingerprintsWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(id)assetCollectionFingerprintsDataframeWithVersion:(long long)arg1 forAssetCollections:(id)arg2 withGraph:(id)arg3 withTransformers:(id)arg4 error:(id*)arg5 ;
+(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
-(NSArray *)featureNames;
-(BOOL)isEqualToFingerprint:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(MAFloatVector *)floatArray;
-(id)initWithFloatArray:(id)arg1 withFeatureNames:(id)arg2 ;
-(void)setFloatArray:(MAFloatVector *)arg1 ;
-(void)setFeatureNames:(NSArray *)arg1 ;
@end

