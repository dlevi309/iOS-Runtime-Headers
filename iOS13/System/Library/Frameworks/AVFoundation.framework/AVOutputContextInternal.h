/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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

