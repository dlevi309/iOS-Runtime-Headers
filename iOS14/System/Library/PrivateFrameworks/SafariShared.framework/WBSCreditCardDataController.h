/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, PKVirtualCardManager, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;
	NSObject*<OS_dispatch_queue> _internalQueue;
	PKVirtualCardManager* _virtualCardManager;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(BOOL)hasCreditCardData;
-(id)init;
-(void)_sortCreditCardDataArray:(id)arg1 ;
-(id)_creditCardData;
-(BOOL)_shouldOfferVirtualCards;
-(unsigned long long)virtualCardFieldsToRequest;
-(id)_virtualCardDataFromPKVirtualCards:(id)arg1 ;
-(id)_deduplicatedVirtualCardDataArray:(id)arg1 andCreditCardDataArray:(id)arg2 ;
-(BOOL)hasUsedNonVirtualCard;
-(BOOL)authenticationRequiredForVirtualCard:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(NSArray *)creditCardData;
-(BOOL)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)existingCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2 ;
-(void)creditCardDataDidChange;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)setHasUsedNonVirtualCard;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(BOOL)shouldAddCardWithNumber:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(id)urlForVirtualCard:(id)arg1 ;
-(void)getCreditCardDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getVirtualCardsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getVirtualCardCredentialsFromKeychainWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getCreditCardDataToFill:(id)arg1 externalizedContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(void)removeCreditCardData:(id)arg1 ;
-(void)markCreditCardDataAsMostRecentlyUsed:(id)arg1 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(BOOL)isCreditCardDataSaved:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(void)clearCreditCardData;
-(id)_testVirtualCard;
-(void)isVirtualCard:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)savePendingChangesBeforeTermination;
@end

