/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue, AVOutputContextImpl, AVOutputContextCommunicationChannelDelegate;
@class NSObject;

@interface AVOutputContextInternal : NSObject {

	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	id<AVOutputContextImpl> impl;
	unsigned long long outputDeviceFeatures;
	int applicationPID;
	BOOL applicationPIDWasSet;
	id<AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;

}
@end

