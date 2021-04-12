/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <HardwareSupport/HSCMBaseObject.h>

@interface HSFigCaptureDevice : HSCMBaseObject {

	OpaqueFigCaptureDeviceRef _underlyingDevice;

}

@property (nonatomic,readonly) OpaqueFigCaptureDeviceRef underlyingDevice;              //@synthesize underlyingDevice=_underlyingDevice - In the implementation block
+(id)statusDescription:(int)arg1 ;
-(BOOL)invalidate:(id*)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)description;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(OpaqueFigCaptureDeviceRef)underlyingDevice;
-(id)valueForProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 error:(id*)arg3 ;
-(id)streams:(id*)arg1 ;
-(BOOL)requestControlOfStreams:(id)arg1 error:(id*)arg2 ;
-(BOOL)relinquishControlOfStreams:(id)arg1 error:(id*)arg2 ;
-(id)synchronizedStreamsGroups:(id*)arg1 ;
@end

