/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

