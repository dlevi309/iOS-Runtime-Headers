/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject {

	NSHashTable* _tasks;
	opaque_pthread_mutex_t _lock;

}
+(id)sharedInstance;
-(id)task;
-(id)init;
-(void)unregister:(id)arg1 ;
-(void)dealloc;
-(id)taskWithDeadline:(double)arg1 ;
-(void)tellCurrentTasksToDefer;
@end

