/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureInput.h>

@class AVCaptureMetadataInputInternal;

@interface AVCaptureMetadataInput : AVCaptureInput {

	AVCaptureMetadataInputInternal* _internal;

}
+(void)initialize;
+(id)metadataInputWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(OpaqueCMClockRef)clock;
-(id)init;
-(id)ports;
-(id)sourceID;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(BOOL)appendTimedMetadataGroup:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

