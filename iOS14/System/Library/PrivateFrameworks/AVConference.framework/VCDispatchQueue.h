/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface VCDispatchQueue : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _rootQueues;

}
+(id)defaultManager;
-(id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
@end

