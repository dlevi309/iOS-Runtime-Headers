/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCollectionFetchOperation.h>

@class NSDictionary;

@interface PXKeyAssetsCollectionFetchOperation : PXCollectionFetchOperation {

	long long _maxKeyAssets;
	NSDictionary* _outputOtherFetchResultsByAssetCollection;

}

@property (nonatomic,retain) NSDictionary * outputOtherFetchResultsByAssetCollection;              //@synthesize outputOtherFetchResultsByAssetCollection=_outputOtherFetchResultsByAssetCollection - In the implementation block
@property (assign,nonatomic) long long maxKeyAssets;                                               //@synthesize maxKeyAssets=_maxKeyAssets - In the implementation block
-(long long)maxKeyAssets;
-(void)main;
-(void)setMaxKeyAssets:(long long)arg1 ;
-(NSDictionary *)outputOtherFetchResultsByAssetCollection;
-(void)setOutputOtherFetchResultsByAssetCollection:(NSDictionary *)arg1 ;
@end

