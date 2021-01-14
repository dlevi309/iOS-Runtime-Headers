/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject {

	AVCaptureInput* input;
	NSString* mediaType;
	opaqueCMFormatDescriptionRef formatDescription;
	OpaqueCMClockRef clock;
	BOOL enabled;
	int changeSeed;
	NSString* sourceID;
	NSString* sourceDeviceType;
	long long sourceDevicePosition;

}
-(id)init;
-(void)dealloc;
@end

