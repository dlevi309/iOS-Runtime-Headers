/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performTransaction:(/*^block*/id)arg1 ;
-(long long)transactionCount;
-(void)setHead:(MSVLRUDictionaryNode *)arg1 ;
-(void)setTail:(MSVLRUDictionaryNode *)arg1 ;
-(MSVLRUDictionaryNode *)tail;
-(void)endTransaction;
-(void)beginTransaction;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setMaximumCapacity:(long long)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(long long)maximumCapacity;
-(id<MSVLRUDictionaryDelegate>)delegate;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(MSVLRUDictionaryNode *)head;
-(void)_addNodeToFront:(id)arg1 ;
-(long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_shrinkToCapacity;
-(void)_moveNodeToFront:(id)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MSVLRUDictionaryDelegate>)arg1 ;
-(id)description;
-(NSMutableDictionary *)dictionary;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)allValues;
-(unsigned long long)hash;
-(id)peekObjectForKey:(id)arg1 ;
-(void)pokeKey:(id)arg1 ;
-(id)allKeys;
-(void)setTransactionCount:(long long)arg1 ;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

