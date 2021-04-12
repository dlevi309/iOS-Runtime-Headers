/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetProviding.h>

@protocol DDSAssetProvidingDelegate, DDSAssetQueryResultCaching;
@class NSMutableDictionary, NSString;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding> {

	BOOL _encounteredAssertionUpdateError;
	id<DDSAssetProvidingDelegate> delegate;
	NSMutableDictionary* _remainingAssetsByQueryId;
	id<DDSAssetQueryResultCaching> _assetQueryResultsCache;
	NSMutableDictionary* _downloadStateByAssetID;

}

@property (nonatomic,readonly) NSMutableDictionary * remainingAssetsByQueryId;                   //@synthesize remainingAssetsByQueryId=_remainingAssetsByQueryId - In the implementation block
@property (assign,nonatomic) BOOL encounteredAssertionUpdateError;                               //@synthesize encounteredAssertionUpdateError=_encounteredAssertionUpdateError - In the implementation block
@property (nonatomic,retain) id<DDSAssetQueryResultCaching> assetQueryResultsCache;              //@synthesize assetQueryResultsCache=_assetQueryResultsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadStateByAssetID;                       //@synthesize downloadStateByAssetID=_downloadStateByAssetID - In the implementation block
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)latestBetweenAssetA:(id)arg1 AssetB:(id)arg2 ;
+(long long)supportedCompatibilityVersion;
+(id)latestAssetsOnlyFromAssets:(id)arg1 ;
-(BOOL)shouldMatchAttributeValue:(id)arg1 givenValue:(id)arg2 ;
-(void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(BOOL)arg2 ;
-(id)init;
-(void)didUpdateCatalogWithError:(id)arg1 ;
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setEncounteredAssertionUpdateError:(BOOL)arg1 ;
-(BOOL)encounteredAssertionUpdateError;
-(void)removeOldAssetsForAssertions:(id)arg1 ;
-(void)serverDidUpdateAssetsWithType:(id)arg1 ;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2 ;
-(void)setDelegate:(id<DDSAssetProvidingDelegate>)arg1 ;
-(void)setAssetQueryResultsCache:(id<DDSAssetQueryResultCaching>)arg1 ;
-(void)setDownloadStateByAssetID:(NSMutableDictionary *)arg1 ;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(void)beginDownloadForAssertion:(id)arg1 discretionaryDownload:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)downloadStateByAssetID;
-(id<DDSAssetQueryResultCaching>)assetQueryResultsCache;
-(NSMutableDictionary *)remainingAssetsByQueryId;
-(void)beginDownloadForAssets:(id)arg1 withPolicy:(id)arg2 discretionaryDownload:(BOOL)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2 ;
-(id)performAssetsForQuery:(id)arg1 errorPtr:(id*)arg2 ;
-(void)removeAssetsForAssertions:(id)arg1 ;
-(void)updateCatalogForAssetTypes:(id)arg1 discretionaryDownload:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)downloadOptionsForPolicy:(id)arg1 discretionaryDownload:(BOOL)arg2 ;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(void)removeAssets:(id)arg1 ;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2 ;
@end

