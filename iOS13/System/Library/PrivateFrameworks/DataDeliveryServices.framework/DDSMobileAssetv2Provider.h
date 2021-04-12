/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetProviding.h>

@protocol DDSAssetProvidingDelegate;
@class NSMutableDictionary, NSString;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding> {

	BOOL _encounteredAssertionUpdateError;
	id<DDSAssetProvidingDelegate> delegate;
	NSMutableDictionary* _remainingAssetsByAssertion;

}

@property (nonatomic,readonly) NSMutableDictionary * remainingAssetsByAssertion;              //@synthesize remainingAssetsByAssertion=_remainingAssetsByAssertion - In the implementation block
@property (assign,nonatomic) BOOL encounteredAssertionUpdateError;                            //@synthesize encounteredAssertionUpdateError=_encounteredAssertionUpdateError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
+(long long)supportedCompatibilityVersion;
+(id)latestAssetsOnlyFromAssets:(id)arg1 ;
+(id)latestBetweenAssetA:(id)arg1 AssetB:(id)arg2 ;
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setDelegate:(id<DDSAssetProvidingDelegate>)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2 ;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2 ;
-(NSMutableDictionary *)remainingAssetsByAssertion;
-(void)beginDownloadForAssets:(id)arg1 withPolicy:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)downloadOptionsForPolicy:(id)arg1 ;
-(void)beginDownloadForAssertions:(id)arg1 ;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(void)updateCatalogForAssetTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetsForAssertions:(id)arg1 ;
-(void)removeOldAssetsForAssertions:(id)arg1 ;
-(BOOL)shouldMatchAttributeValue:(id)arg1 givenValue:(id)arg2 ;
-(void)setEncounteredAssertionUpdateError:(BOOL)arg1 ;
-(BOOL)encounteredAssertionUpdateError;
-(void)beginDownloadForAssertion:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

