/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface VSSemaphore : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)init;
-(void)wait;
-(void)signal;
@end

