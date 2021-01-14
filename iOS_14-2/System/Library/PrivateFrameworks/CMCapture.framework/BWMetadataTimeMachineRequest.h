/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface BWMetadataTimeMachineRequest : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)init;
-(void)waitForCompletionWithTimeout:(float)arg1 ;
-(void)complete;
-(void)dealloc;
@end

