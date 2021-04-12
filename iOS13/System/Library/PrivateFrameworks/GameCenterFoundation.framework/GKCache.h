/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/

#import <libobjc.A.dylib/GKCache.h>

@class NSMutableDictionary, GKLinkedList, NSString;

@interface GKCache : NSObject <GKCache> {

	NSMutableDictionary* _dictionary;
	GKLinkedList* _cacheList;
	unsigned long long _maxCount;
	unsigned long long _count;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) GKLinkedList * cacheList;                      //@synthesize cacheList=_cacheList - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                   //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dictionary;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
@end

