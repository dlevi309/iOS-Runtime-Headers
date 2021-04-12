/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface VCDispatchQueue : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _rootQueues;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2 ;
@end

