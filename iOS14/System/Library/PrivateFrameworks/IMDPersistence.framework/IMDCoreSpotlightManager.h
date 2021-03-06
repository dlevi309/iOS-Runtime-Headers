/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


#import <IMDPersistence/IMDPersistence-Structs.h>
@class NSMutableOrderedSet;

@interface IMDCoreSpotlightManager : NSObject {

	NSMutableOrderedSet* _blocklistMessageGUIDs;

}

@property (nonatomic,retain) NSMutableOrderedSet * blocklistMessageGUIDs;              //@synthesize blocklistMessageGUIDs=_blocklistMessageGUIDs - In the implementation block
+(id)sharedInstance;
+(id)chatStyleCustomKey;
-(id)searchableIndex;
-(long long)maxRowID;
-(void)dealloc;
-(id)newSearchableItemsForMessage:(IMDMessageRecordStruct*)arg1 reindexing:(BOOL)arg2 ;
-(void)deleteChatSearchableItemForChatGUID:(id)arg1 ;
-(id)newSearchableItemsForMessageGUID:(id)arg1 reindexing:(BOOL)arg2 ;
-(void)setNeedsMessageReindexingWithCompletion:(/*^block*/id)arg1 ;
-(void)indexNextMessageBatchIfNeeded:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableOrderedSet *)blocklistMessageGUIDs;
-(void)setMessageGUIDUnderScrutiny:(id)arg1 ;
-(void)_postProcessIndexingForItem:(id)arg1 chatDictionary:(id)arg2 isReindexing:(BOOL)arg3 ;
-(void)clearMessageGUIDFromScrutiny:(id)arg1 ;
-(id)newChatSearchableItemForChatDictionary:(id)arg1 optionalLastMessageDate:(id)arg2 ;
-(id)_donationManager;
-(void)_updateItem:(id)arg1 withGeoMapItem:(id)arg2 ;
-(id)_chatDictionaryForChatGUID:(id)arg1 ;
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
-(void)_indexSearchableChatItems:(id)arg1 withIndex:(id)arg2 ;
-(long long)_chatCountForChats:(id)arg1 ;
-(id)_chatDictionaryForChatAtIndex:(unsigned long long)arg1 withChats:(id)arg2 ;
-(BOOL)_shouldIndexNextBatchForBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)_lastIndexedRowID;
-(unsigned long long)_batchSizeForTargetBatchSize:(unsigned long long)arg1 lastIndexedRowID:(unsigned long long)arg2 lastBatch:(BOOL*)arg3 ;
-(CFArrayRef)_copyMessagesForIndexingWithLastRowID:(unsigned long long)arg1 batchSize:(unsigned long long)arg2 ;
-(id)_newSearchableIndexesForMessages:(CFArrayRef)arg1 ;
-(void)_indexSearchableItems:(id)arg1 lastIndexedRowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 lastBatch:(BOOL)arg4 withIndex:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_newLegacySearchableIndexesForMessages:(CFArrayRef)arg1 ;
-(BOOL)_shouldBypassForTesting;
-(void)_geocodeItems:(id)arg1 ;
-(void)setBlocklistMessageGUIDs:(NSMutableOrderedSet *)arg1 ;
@end

