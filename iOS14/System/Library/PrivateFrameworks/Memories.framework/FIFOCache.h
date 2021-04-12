/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface FIFOCache : NSObject {

	NSMutableDictionary* m_cache;
	NSMutableArray* m_FIFO;
	int m_capacity;

}
+(void)noteApplicationDidReceiveMemoryWarning;
-(id)objectEnumerator;
-(long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addObjectsFromDictionary:(id)arg1 ;
@end

