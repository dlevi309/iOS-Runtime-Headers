/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetProviding.h>

@protocol DDSAssetProvidingDelegate;
@class NSMutableDictionary, NSString;

@interface DDSMobileAssetv1Provider : NSObject <DDSAssetProviding> {

	id<DDSAssetProvidingDelegate> _delegate;
	NSMutableDictionary* _remainingAssetsByAssertion;

}

@property (nonatomic,readonly) NSMutableDictionary * remainingAssetsByAssertion;              //@synthesize remainingAssetsByAssertion=_remainingAssetsByAssertion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
+(long long)supportedCompatibilityVersion;
+(id)latestAssetsOnlyFromAssets:(id)arg1 ;
+(id)latestBetweenAssetA:(id)arg1 AssetB:(id)arg2 ;
-(id)init;
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setDelegate:(id<DDSAssetProvidingDelegate>)arg1 ;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2 ;
-(id)runASQuery:(id)arg1 installedAssetsOnly:(BOOL)arg2 latestAssetsOnly:(BOOL)arg3 error:(id*)arg4 ;
-(id)asAssetQueryWithDDSQuery:(id)arg1 ;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2 ;
-(NSMutableDictionary *)remainingAssetsByAssertion;
-(void)beginDownloadForAssets:(id)arg1 withPolicy:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)downloadOptionsForPolicy:(id)arg1 ;
-(unsigned long long)downloadStateForOperation:(id)arg1 ;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(void)updateCatalogForAssetTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetsForAssertions:(id)arg1 ;
-(void)removeOldAssetsForAssertions:(id)arg1 ;
-(void)beginDownloadForAssertion:(id)arg1 withError:(id*)arg2 ;
@end

