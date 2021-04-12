/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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

