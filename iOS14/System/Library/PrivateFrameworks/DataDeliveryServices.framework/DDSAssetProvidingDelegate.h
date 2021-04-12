/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetProvidingDelegate <NSObject>
@required
-(void)didUpdateCatalogWithError:(id)arg1;
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
-(void)didBeginUpdateCatalog;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;

@end

