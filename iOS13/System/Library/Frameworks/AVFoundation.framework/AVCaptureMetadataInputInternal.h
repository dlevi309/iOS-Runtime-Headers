/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject {

	AVCaptureInputPort* metadataPort;
	NSString* sourceID;
	opaqueCMFormatDescriptionRef desc;
	OpaqueCMClockRef clock;
	OpaqueCMBlockBufferRef emptyBoxedMetadata;

}
@end

