/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithQueue:(id)arg1 ;
-(void)invalidateQueue;
@end

