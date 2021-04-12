/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MSVLRUDictionaryDelegate;
@class NSMutableDictionary, MSVLRUDictionaryNode;

@interface MSVLRUDictionary : NSObject <NSCopying> {

	id<MSVLRUDictionaryDelegate> _delegate;
	long long _maximumCapacity;
	NSMutableDictionary* _dictionary;
	MSVLRUDictionaryNode* _head;
	MSVLRUDictionaryNode* _tail;
	long long _transactionCount;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                          //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) MSVLRUDictionaryNode * head;                               //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) MSVLRUDictionaryNode * tail;                               //@synthesize tail=_tail - In the implementation block
@property (assign,nonatomic) long long transactionCount;                                //@synthesize transactionCount=_transactionCount - In the implementation block
@property (assign,nonatomic,__weak) id<MSVLRUDictionaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long maximumCapacity;                                 //@synthesize maximumCapacity=_maximumCapacity - In the implementation block
@property (nonatomic,readonly) long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(id)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id<MSVLRUDictionaryDelegate>)delegate;
-(void)setDelegate:(id<MSVLRUDictionaryDelegate>)arg1 ;
-(id)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dictionary;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(MSVLRUDictionaryNode *)head;
-(MSVLRUDictionaryNode *)tail;
-(void)beginTransaction;
-(void)endTransaction;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(void)_addNodeToFront:(id)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(id)peekObjectForKey:(id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)setTail:(MSVLRUDictionaryNode *)arg1 ;
-(void)setHead:(MSVLRUDictionaryNode *)arg1 ;
-(long long)transactionCount;
-(void)setTransactionCount:(long long)arg1 ;
-(void)_shrinkToCapacity;
-(long long)maximumCapacity;
-(void)setMaximumCapacity:(long long)arg1 ;
-(void)pokeKey:(id)arg1 ;
@end

