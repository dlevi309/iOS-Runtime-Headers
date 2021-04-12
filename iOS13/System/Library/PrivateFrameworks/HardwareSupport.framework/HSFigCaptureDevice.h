/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <HardwareSupport/HSCMBaseObject.h>

@interface HSFigCaptureDevice : HSCMBaseObject {

	OpaqueFigCaptureDeviceRef _underlyingDevice;

}

@property (nonatomic,readonly) OpaqueFigCaptureDeviceRef underlyingDevice;              //@synthesize underlyingDevice=_underlyingDevice - In the implementation block
+(id)statusDescription:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)invalidate:(id*)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(OpaqueFigCaptureDeviceRef)underlyingDevice;
-(id)valueForProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 error:(id*)arg3 ;
-(id)initWithCaptureDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(id)streams:(id*)arg1 ;
-(BOOL)requestControlOfStreams:(id)arg1 error:(id*)arg2 ;
-(BOOL)relinquishControlOfStreams:(id)arg1 error:(id*)arg2 ;
-(id)synchronizedStreamsGroups:(id*)arg1 ;
@end

