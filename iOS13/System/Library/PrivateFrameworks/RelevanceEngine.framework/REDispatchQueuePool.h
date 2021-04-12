/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSArray;

@interface REDispatchQueuePool : NSObject {

	unsigned long long _currentIndex;
	NSArray* _queues;
	os_unfair_lock_s _lock;

}
-(id)initWithQueueCount:(unsigned long long)arg1 prefix:(id)arg2 ;
-(id)nextAvailableQueue;
@end

