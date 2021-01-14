/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject {

	AVCaptureInputPort* metadataPort;
	NSString* sourceID;
	opaqueCMFormatDescriptionRef desc;
	OpaqueCMClockRef clock;
	OpaqueCMBlockBufferRef emptyBoxedMetadata;

}
@end

