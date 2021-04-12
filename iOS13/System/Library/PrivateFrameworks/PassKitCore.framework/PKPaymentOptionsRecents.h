/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol NSObject;
@class CNContact, PKPaymentOptionsSynchronization, CRRecentContactsLibrary;

@interface PKPaymentOptionsRecents : NSObject {

	CNContact* _cachedMeContact;
	id<NSObject> _meContactDidChangeNotificationObserver;
	PKPaymentOptionsSynchronization* _optionsSynchronization;
	BOOL _meCardCachingEnabled;
	CRRecentContactsLibrary* _recentContactsLibrary;

}

@property (nonatomic,readonly) CNContact * meCard; 
@property (assign,getter=isMeCardCachingEnabled,nonatomic) BOOL meCardCachingEnabled;              //@synthesize meCardCachingEnabled=_meCardCachingEnabled - In the implementation block
@property (nonatomic,retain) CRRecentContactsLibrary * recentContactsLibrary;                      //@synthesize recentContactsLibrary=_recentContactsLibrary - In the implementation block
+(id)defaultInstance;
+(id)_coreRecentsKindForPreference:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CNContact *)meCard;
-(void)deleteRecent:(id)arg1 ;
-(id)recentsForPreference:(id)arg1 ;
-(id)meCardEntriesForPreference:(id)arg1 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(id)_keychainDataForKey:(id)arg1 ;
-(BOOL)isMeCardCachingEnabled;
-(id)postalAddressMetadataForContact:(id)arg1 ;
-(id)contactMetadataForContact:(id)arg1 preference:(id)arg2 ;
-(void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2 ;
-(void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contactFromRecent:(id)arg1 preference:(id)arg2 ;
-(void)_coreRecentsContactsForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contactsFromKeychainForPreference:(id)arg1 ;
-(void)_deleteRecentContactsFromKeychainForPreference:(id)arg1 ;
-(void)_deleteRecentContactFromKeychain:(id)arg1 forPreference:(id)arg2 ;
-(id)_postalAddressLabeledValueFromRecent:(id)arg1 ;
-(id)_defaultCRSearchQuery;
-(void)_deleteRecentContactsFromKeychainForContactKey:(id)arg1 ;
-(void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelsToPropertiesDictionaryForContact:(id)arg1 ;
-(id)_keychainKeyFromContactKey:(id)arg1 ;
-(id)saveContactToCoreRecents:(id)arg1 preference:(id)arg2 ;
-(void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMeCardCachingEnabled:(BOOL)arg1 ;
-(CRRecentContactsLibrary *)recentContactsLibrary;
-(void)setRecentContactsLibrary:(CRRecentContactsLibrary *)arg1 ;
@end

