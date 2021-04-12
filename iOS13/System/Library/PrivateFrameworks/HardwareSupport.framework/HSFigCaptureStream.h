/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <HardwareSupport/HSCMBaseObject.h>

@class HSFigCaptureDevice;

@interface HSFigCaptureStream : HSCMBaseObject {

	HSFigCaptureDevice* _device;
	OpaqueFigCaptureStreamRef _underlyingStream;

}

@property (nonatomic,readonly) OpaqueFigCaptureStreamRef underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (nonatomic,readonly) HSFigCaptureDevice * device;                             //@synthesize device=_device - In the implementation block
+(id)statusDescription:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(HSFigCaptureDevice *)device;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(OpaqueFigCaptureStreamRef)underlyingStream;
-(BOOL)isEqualToStream:(id)arg1 ;
-(id)initWithCaptureStream:(OpaqueFigCaptureStreamRef)arg1 fromDevice:(id)arg2 ;
@end

