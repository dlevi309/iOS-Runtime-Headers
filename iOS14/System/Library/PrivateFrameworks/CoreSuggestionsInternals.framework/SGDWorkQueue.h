/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, NSMutableOrderedSet;

@interface SGDWorkQueue : NSObject {

	NSString* _dir;
	Aq _counter;
	NSMutableOrderedSet* _pendingNames;
	opaque_pthread_mutex_t _lock;
	long long _priority;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) long long priority;                    //@synthesize priority=_priority - In the implementation block
+(id)pathForNewMessagesQueue;
+(id)pathForOldMessagesQueue;
-(id)init;
-(void)resetForTesting;
-(id)addDictionary:(id)arg1 withSourceId:(id)arg2 messageId:(id)arg3 ;
-(unsigned long long)count;
-(id)initWithDirectory:(id)arg1 priority:(long long)arg2 ;
-(id)description;
-(id)_pop;
-(id)_popName:(id)arg1 ;
-(id)addDictionary:(id)arg1 ;
-(id)popDictionaryBySourceId:(id)arg1 messageId:(id)arg2 ;
-(void)closeDatabase;
-(id)initWithDirectory:(id)arg1 ;
-(long long)priority;
-(id)popDictionaryById:(id)arg1 ;
-(id)popDictionary;
@end

