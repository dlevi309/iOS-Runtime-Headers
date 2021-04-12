/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSArray, NSMutableDictionary, SKUIClientContext, NSURL, NSHashTable, NSOperationQueue;

@interface SKUIDonationConfiguration : NSObject {

	NSArray* _charities;
	NSMutableDictionary* _charityImages;
	SKUIClientContext* _clientContext;
	NSURL* _donationPurchaseURL;
	NSURL* _donationValidationURL;
	NSHashTable* _observers;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSArray * allCharities;                         //@synthesize charities=_charities - In the implementation block
@property (nonatomic,readonly) NSURL * donationPurchaseURL;                    //@synthesize donationPurchaseURL=_donationPurchaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * donationValidationURL;                  //@synthesize donationValidationURL=_donationValidationURL - In the implementation block
-(void)addObserver:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)removeObserver:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_setLogoImage:(id)arg1 forCharity:(id)arg2 ;
-(id)charityForIdentifier:(id)arg1 ;
-(void)loadLogoForCharity:(id)arg1 ;
-(id)logoImageForCharity:(id)arg1 ;
-(NSArray *)allCharities;
-(NSURL *)donationValidationURL;
-(NSURL *)donationPurchaseURL;
@end

