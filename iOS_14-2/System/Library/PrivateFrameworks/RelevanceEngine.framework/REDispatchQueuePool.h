/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

