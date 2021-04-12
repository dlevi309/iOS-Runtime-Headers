/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString, NSMutableDictionary;

@interface TSUUnfairMutableDictionaryCache : NSObject {

	os_unfair_lock_s _lock;
	NSString* _name;
	NSMutableDictionary* _cache;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(NSMutableDictionary *)cache;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(void)p_didEnterBackground:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(void)performSyncWriteWithUnderlyingDictionary:(/*^block*/id)arg1 ;
@end

