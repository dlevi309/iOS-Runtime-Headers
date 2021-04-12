/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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

