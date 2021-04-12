/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <DACardDAV/CardDAVVCardItem.h>

@protocol DACardDAVRecord;
@class NSData, NSString, NSMutableDictionary, NSURL, NSNumber, CNContactStore;

@interface CardDAVVCardItemCNImplementation : CardDAVVCardItem {

	NSData* _dataPayload;
	id<DACardDAVRecord> _cardDAVRecordItem;
	NSString* _syncKey;
	NSMutableDictionary* _UUIDToPersonCache;
	NSURL* _serverID;
	NSNumber* _clientID;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)keysToFetch;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setClientID:(id)arg1 ;
-(id)clientID;
-(id)dataPayload;
-(id)serverID;
-(void)setServerID:(id)arg1 ;
-(id)syncKey;
-(void)setSyncKey:(id)arg1 ;
-(id)convertToDAContactSearchResultElement;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(void)setDataPayload:(id)arg1 ;
-(void)setLocalItem:(void*)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(void)setCardDAVRecordItem:(id)arg1 ;
-(id)_localItemAsContact;
-(id)_contactFromDataPayload;
-(void)_setEmailAddress:(id)arg1 contact:(id)arg2 ;
-(void)_setStreetAddress:(id)arg1 contact:(id)arg2 ;
-(void)_setPhoneNumbers:(id)arg1 contact:(id)arg2 ;
-(void)_setInstantMessage:(id)arg1 contact:(id)arg2 ;
-(id)_containerForAccount:(id)arg1 ;
-(BOOL)_createContact:(id)arg1 inContainer:(id)arg2 databaseHelper:(id)arg3 ;
-(BOOL)_commitChangesToContact:(id)arg1 databaseHelper:(id)arg2 ;
-(id)cardDAVRecordItem;
-(id)initWithDACardDAVRecord:(id)arg1 contactStore:(id)arg2 outNeedsDBSave:(BOOL*)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6 ;
-(id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned*)arg1 ;
-(void)loadClientIDs;
-(unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7 ;
-(BOOL)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)deleteFromContainer:(void*)arg1 account:(id)arg2 ;
-(id)_localItemAsGroup;
-(id)UUIDToPersonCache;
-(void)setUUIDToPersonCache:(id)arg1 ;
@end

