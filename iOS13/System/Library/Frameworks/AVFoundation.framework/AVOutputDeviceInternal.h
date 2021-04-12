/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVOutputDeviceImpl;
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

}
@end

