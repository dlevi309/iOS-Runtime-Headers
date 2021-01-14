/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol AVOutputDeviceImpl, AVOutputDeviceCommunicationChannelDelegate, AVOutputDeviceCommunicationChannelManager;
@class NSString, NSData;

@interface AVOutputDeviceInternal : NSObject {

	id<AVOutputDeviceImpl> impl;
	NSString* name;
	NSString* ID;
	long long deviceType;
	long long deviceSubType;
	NSString* manufacturer;
	NSString* modelID;
	NSString* serialNumber;
	NSString* firmwareVersion;
	NSData* MACAddress;
	unsigned long long deviceFeatures;
	id<AVOutputDeviceCommunicationChannelDelegate> communicationChannelDelegate;
	id<AVOutputDeviceCommunicationChannelManager> commChannelManager;

}
@end

