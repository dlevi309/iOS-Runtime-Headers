/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetProviding <NSObject>
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@required
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2;
-(void)beginDownloadForAssertions:(id)arg1;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
-(void)updateCatalogForAssetTypes:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeAssetsForAssertions:(id)arg1;
-(void)removeOldAssetsForAssertions:(id)arg1;

@end

