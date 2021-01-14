/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface AVCaptureDeviceControlRequestQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _mutableArray;

}
-(id)init;
-(id)dequeue;
-(id)head;
-(void)enqueueRequest:(id)arg1 ;
-(void)dealloc;
@end

