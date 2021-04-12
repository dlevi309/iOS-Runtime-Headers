/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGBehavioralAlgorithm
@required
-(id)initWithGoldAssets:(id)arg1 graph:(id)arg2;
-(id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
-(void)preprocessWithProgressBlock:(/*^block*/id)arg1;
-(float)semanticScoreForAsset:(id)arg1;
-(id)semanticScoreByAssetUUIDForAssets:(id)arg1;
-(id)dataToPersist;

@end

