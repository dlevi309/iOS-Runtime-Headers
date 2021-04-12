/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <DACardDAV/CardDAVVCardItem.h>

@protocol DACardDAVRecord;
@class NSData, NSString, NSMutableDictionary, NSURL, NSNumber;

@interface CardDAVVCardItemABImplementation : CardDAVVCardItem {

	unsigned _abRecordType;
	NSData* _dataPayload;
	id<DACardDAVRecord> _cardDAVRecordItem;
	NSString* _syncKey;
	NSMutableDictionary* _UUIDToPersonCache;
	void* _abRecord;
	NSURL* _serverID;
	NSNumber* _clientID;

}

@property (assign,nonatomic) void* abRecord;                     //@synthesize abRecord=_abRecord - In the implementation block
@property (assign,nonatomic) unsigned abRecordType;              //@synthesize abRecordType=_abRecordType - In the implementation block
-(id)clientID;
-(void)setClientID:(id)arg1 ;
-(id)convertToDAContactSearchResultElement;
-(id)syncKey;
-(void)setServerID:(id)arg1 ;
-(void)setSyncKey:(id)arg1 ;
-(id)serverID;
-(id)dataPayload;
-(void)setDataPayload:(id)arg1 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)saveServerIDToExistingItem;
-(void*)abRecord;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(void)dealloc;
-(void)setCardDAVRecordItem:(id)arg1 ;
-(id)cardDAVRecordItem;
-(id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned*)arg1 ;
-(void)loadClientIDs;
-(unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7 ;
-(BOOL)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)deleteFromContainer:(void*)arg1 account:(id)arg2 ;
-(id)UUIDToPersonCache;
-(void)setUUIDToPersonCache:(id)arg1 ;
-(void)setAbRecordType:(unsigned)arg1 ;
-(unsigned)abRecordType;
-(id)initWithABRecord:(void*)arg1 addressBook:(void*)arg2 outNeedsDBSave:(BOOL*)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6 ;
-(void)setAbRecord:(void*)arg1 ;
@end

