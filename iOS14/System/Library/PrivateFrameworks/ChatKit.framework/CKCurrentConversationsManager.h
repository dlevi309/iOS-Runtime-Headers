/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSCountedSet, NSMutableDictionary, IMDoubleLinkedList;

@interface CKCurrentConversationsManager : NSObject {

	NSCountedSet* _currentConversations;
	NSMutableDictionary* _idToNodeDictionary;
	IMDoubleLinkedList* _orderedKeys;

}

@property (nonatomic,retain) NSCountedSet * currentConversations;                   //@synthesize currentConversations=_currentConversations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * idToNodeDictionary;              //@synthesize idToNodeDictionary=_idToNodeDictionary - In the implementation block
@property (nonatomic,retain) IMDoubleLinkedList * orderedKeys;                      //@synthesize orderedKeys=_orderedKeys - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheSize; 
+(id)sharedInstance;
-(void)setOrderedKeys:(IMDoubleLinkedList *)arg1 ;
-(unsigned long long)cacheSize;
-(IMDoubleLinkedList *)orderedKeys;
-(void)pruneCache;
-(void)removeConversation:(id)arg1 ;
-(void)purgeConversations:(id)arg1 ;
-(void)addConversation:(id)arg1 ;
-(void)loadHistoryForConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2 ;
-(NSCountedSet *)currentConversations;
-(NSMutableDictionary *)idToNodeDictionary;
-(void)pruneCacheToSize:(unsigned long long)arg1 ;
-(void)_prepareToDumpCachedConversation:(id)arg1 ;
-(void)purgeConversation:(id)arg1 ;
-(BOOL)_canDumpConversationFromCache:(id)arg1 ;
-(void)setCurrentConversations:(NSCountedSet *)arg1 ;
-(void)setIdToNodeDictionary:(NSMutableDictionary *)arg1 ;
@end

