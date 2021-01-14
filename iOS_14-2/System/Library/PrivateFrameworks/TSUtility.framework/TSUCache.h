/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUFlushableObject.h>

@class NSString, NSMutableDictionary;

@interface TSUCache : TSUFlushableObject {

	NSString* mCacheName;
	NSMutableDictionary* mCache;

}
-(void)unload;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasFlushableContent;
-(id)p_objectForKey:(id)arg1 ;
-(void)p_addEntriesFromDictionary:(id)arg1 ;
-(id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
@end

