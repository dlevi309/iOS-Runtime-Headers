/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


#import <IMDPersistence/IMDPersistence-Structs.h>
@class NSMutableSet;

@interface IMDCoreSpotlightManager : NSObject {

	NSMutableSet* _blacklistMessageGUIDs;

}

@property (nonatomic,retain) NSMutableSet * blacklistMessageGUIDs;              //@synthesize blacklistMessageGUIDs=_blacklistMessageGUIDs - In the implementation block
+(id)sharedInstance;
+(id)chatStyleCustomKey;
-(void)dealloc;
-(id)searchableIndex;
-(id)newSearchableItemsForMessage:(IMDMessageRecordStruct*)arg1 reindexing:(BOOL)arg2 ;
-(void)deleteChatSearchableItemForChatGUID:(id)arg1 ;
-(id)newSearchableItemsForMessageGUID:(id)arg1 reindexing:(BOOL)arg2 ;
-(void)setNeedsMessageReindexingWithCompletion:(/*^block*/id)arg1 ;
-(void)indexNextMessageBatchIfNeeded:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableSet *)blacklistMessageGUIDs;
-(void)setMessageGUIDUnderScrutiny:(id)arg1 ;
-(void)clearMessageGUIDFromScrutiny:(id)arg1 ;
-(id)newChatSearchableItemForChatDictionary:(id)arg1 optionalLastMessageDate:(id)arg2 ;
-(void)_updateItem:(id)arg1 withGeoMapItem:(id)arg2 ;
-(id)_chatDictionaryForChatGUID:(id)arg1 ;
-(long long)maxRowID;
-(void)_setNeedsIndexing:(BOOL)arg1 ;
-(void)_setNeedsDeferredIndexing:(BOOL)arg1 ;
-(void)_setLastIndexedRowID:(unsigned long long)arg1 ;
-(void)_setMaxIndexRowID:(unsigned long long)arg1 ;
-(void)_setCurrentIndexVersion:(unsigned long long)arg1 ;
-(void)_setBypassIndexVersionCheck;
-(void)indexChats;
-(void)_sanitizeIndexesForCurrentVersionIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)_bypassIndexVersionCheck;
-(unsigned long long)_currentIndexVersion;
-(unsigned long long)_expectedIndexVersion;
-(id)_newSearchableChatItemsForChats:(CFArrayRef)arg1 ;
-(void)_indexSearchableChatItems:(id)arg1 ;
-(long long)_chatCountForChats:(id)arg1 ;
-(id)_chatDictionaryForChatAtIndex:(unsigned long long)arg1 withChats:(id)arg2 ;
-(BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)_lastIndexedRowID;
-(unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)arg1 lastIndexedRowID:(unsigned long long)arg2 lastBatch:(BOOL*)arg3 ;
-(CFArrayRef)_copyMessagesForIndexingWithLastRowID:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(id)_newSearchableIndexesForMessages:(CFArrayRef)arg1 ;
-(void)_indexSearchableItems:(id)arg1 lastIndexedRowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 lastBatch:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_shouldBypassForTesting;
-(void)_geocodeItems:(id)arg1 ;
-(id)_newLegacySearchableIndexesForMessages:(CFArrayRef)arg1 ;
-(void)setBlacklistMessageGUIDs:(NSMutableSet *)arg1 ;
@end

