/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <Foundation/NSUbiquitousKeyValueStore.h>

@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore {

	NSMutableDictionary* _kv;
	opaque_pthread_mutex_t _lock;

}
-(id)dataForKey:(id)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(id)objectForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

