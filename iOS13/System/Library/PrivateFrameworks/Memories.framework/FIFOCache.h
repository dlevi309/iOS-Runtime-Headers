/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(int)arg1 ;
-(long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addObjectsFromDictionary:(id)arg1 ;
@end

