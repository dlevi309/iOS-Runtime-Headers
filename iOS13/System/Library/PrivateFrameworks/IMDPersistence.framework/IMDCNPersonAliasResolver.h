/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSMutableDictionary *)aliasToCNIDMap;
-(void)setAliasToCNIDMap:(NSMutableDictionary *)arg1 ;
-(NSData *)currentHistoryToken;
-(BOOL)isCNContactFavorited:(id)arg1 ;
-(id)_updateAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2 ;
-(id)_fetchAliasToCNIDMapForAliases:(id)arg1 ;
-(BOOL)isFavoritedContact:(id)arg1 ;
-(id)_predicateForEmailAddress:(id)arg1 ;
-(id)_predicateForPhoneNumber:(id)arg1 ;
-(id)_predicateForAlias:(id)arg1 ;
-(void)setCurrentHistoryToken:(NSData *)arg1 ;
-(id)_batchFetchContactRecordIDForAliases:(id)arg1 ;
-(id)_fetchContactIdentifierForAlias:(id)arg1 ;
-(void)CNRecordIDForAliases:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(IMDContactStoreChangeHistoryEventsHandler *)contactsEventhandler;
-(void)setContactsEventhandler:(IMDContactStoreChangeHistoryEventsHandler *)arg1 ;
@end

