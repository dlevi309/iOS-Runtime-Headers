/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProgress.h>

@class NSOperationQueue;

@interface _NSOperationQueueProgress : NSProgress {

	NSOperationQueue* _queue;
	os_unfair_lock_s _queueLock;

}
-(void)setTotalUnitCount:(long long)arg1 ;
@end

