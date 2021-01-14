/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPurchaseMetadataFetcher.h>

@protocol FCPurchaseMetadataFetcher
@required
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2;

@end


@protocol OS_dispatch_queue;
@class NSNumber, FCPurchaseLookupResult, NSObject;

@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher> {

	NSNumber* _bundleID;
	NSNumber* _externalVersionID;
	FCPurchaseLookupResult* _lookupResult;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) NSNumber * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionID;                              //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupResult * lookupResult;                   //@synthesize lookupResult=_lookupResult - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
-(id)promiseStoreExternalVersionWithAppAdamID:(id)arg1 ;
-(void)setLookupResult:(FCPurchaseLookupResult *)arg1 ;
-(id)init;
-(void)setBundleID:(NSNumber *)arg1 ;
-(NSNumber *)externalVersionID;
-(FCPurchaseLookupResult *)lookupResult;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(id)createAMSLookupWithProfile:(id)arg1 ;
-(id)checkIfOfferUsedAlreadyWithAppAdamID:(id)arg1 ;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2 ;
-(id)promisePurchaseLookupWithAppAdamID:(id)arg1 ;
-(id)promiseProductLookupWithLookupResult:(id)arg1 externalVersionID:(id)arg2 restorePurchase:(BOOL)arg3 ;
-(NSNumber *)bundleID;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)promiseStoreExternalVersionWithLookupResult:(id)arg1 ;
-(id)promiseBundleIDWithAppAdamID:(id)arg1 ;
@end

