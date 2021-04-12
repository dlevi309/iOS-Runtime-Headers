/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {

	AVCaptureMetadataInputInternal* _internal;

}
+(id)metadataInputWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(id)init;
-(void)dealloc;
-(id)sourceID;
-(OpaqueCMClockRef)clock;
-(id)ports;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(BOOL)appendTimedMetadataGroup:(id)arg1 error:(id*)arg2 ;
@end

