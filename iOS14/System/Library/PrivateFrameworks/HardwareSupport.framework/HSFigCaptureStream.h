/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)start:(id*)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(HSFigCaptureDevice *)device;
-(OpaqueFigCaptureStreamRef)underlyingStream;
-(id)description;
-(BOOL)stop:(id*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToStream:(id)arg1 ;
-(id)initWithCaptureStream:(OpaqueFigCaptureStreamRef)arg1 fromDevice:(id)arg2 ;
@end

