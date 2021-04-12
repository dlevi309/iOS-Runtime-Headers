/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMDelegateCaller.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface __HMQueueDelegateCaller : HMDelegateCaller {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(void)invokeBlock:(/*^block*/id)arg1 ;
@end

