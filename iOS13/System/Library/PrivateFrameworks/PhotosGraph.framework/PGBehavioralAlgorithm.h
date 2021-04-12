/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

