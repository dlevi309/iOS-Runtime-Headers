/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaxCount:(unsigned long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
@end

