/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOutputDeviceAuthorizationRequestInternal : NSObject {

	id<AVOutputDeviceAuthorizationRequestImpl> impl;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long status;
	NSError* error;

}
@end

