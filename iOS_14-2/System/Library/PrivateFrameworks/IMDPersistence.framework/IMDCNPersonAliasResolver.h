/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class CNContactStore, NSData, NSMutableDictionary, IMDContactStoreChangeHistoryEventsHandler;

@interface IMDCNPersonAliasResolver : NSObject {

	CNContactStore* _contactStore;
	NSData* _currentHistoryToken;
	NSMutableDictionary* _aliasToCNIDMap;
	IMDContactStoreChangeHistoryEventsHandler* _contactsEventhandler;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSData * currentHistoryToken;                                                  //@synthesize currentHistoryToken=_currentHistoryToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * aliasToCNIDMap;                                          //@synthesize aliasToCNIDMap=_aliasToCNIDMap - In the implementation block
@property (nonatomic,retain) IMDContactStoreChangeHistoryEventsHandler * contactsEventhandler;              //@synthesize contactsEventhandler=_contactsEventhandler - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSData *)currentHistoryToken;
-(CNContactStore *)contactStore;
-(id)init;
-(IMDContactStoreChangeHistoryEventsHandler *)contactsEventhandler;
-(void)CNRecordIDForAliases:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_predicateForEmailAddress:(id)arg1 ;
-(BOOL)isFavoritedContact:(id)arg1 ;
-(BOOL)isCNContactFavorited:(id)arg1 ;
-(void)setCurrentHistoryToken:(NSData *)arg1 ;
-(NSMutableDictionary *)aliasToCNIDMap;
-(id)_predicateForPhoneNumber:(id)arg1 ;
-(void)setContactsEventhandler:(IMDContactStoreChangeHistoryEventsHandler *)arg1 ;
-(id)_batchFetchContactRecordIDForAliases:(id)arg1 ;
-(id)_updateAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2 ;
-(void)setAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(id)_fetchContactIdentifierForAlias:(id)arg1 ;
-(id)_fetchAliasToCNIDMapForAliases:(id)arg1 ;
-(id)_predicateForAlias:(id)arg1 ;
@end

