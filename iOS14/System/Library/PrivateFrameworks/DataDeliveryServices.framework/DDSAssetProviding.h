/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetProviding <NSObject>
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@required
-(void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(BOOL)arg2;
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)removeOldAssetsForAssertions:(id)arg1;
-(void)serverDidUpdateAssetsWithType:(id)arg1;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2;
-(void)removeAssetsForAssertions:(id)arg1;
-(void)updateCatalogForAssetTypes:(id)arg1 discretionaryDownload:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;

@end

