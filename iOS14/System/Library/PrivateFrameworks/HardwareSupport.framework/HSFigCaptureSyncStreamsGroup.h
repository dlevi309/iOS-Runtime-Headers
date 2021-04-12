/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <HardwareSupport/HSCMBaseObject.h>

@class HSFigCaptureDevice;

@interface HSFigCaptureSyncStreamsGroup : HSCMBaseObject {

	HSFigCaptureDevice* _device;
	OpaqueFigCaptureSynchronizedStreamsGroupRef _underlyingSyncStreamsGroup;

}

@property (nonatomic,readonly) OpaqueFigCaptureSynchronizedStreamsGroupRef underlyingSyncStreamsGroup;              //@synthesize underlyingSyncStreamsGroup=_underlyingSyncStreamsGroup - In the implementation block
@property (nonatomic,readonly) HSFigCaptureDevice * device;                                                         //@synthesize device=_device - In the implementation block
+(id)statusDescription:(int)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(HSFigCaptureDevice *)device;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)valueForProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 error:(id*)arg3 ;
-(BOOL)isEqualToStreamsGroup:(id)arg1 ;
-(OpaqueFigCaptureSynchronizedStreamsGroupRef)underlyingSyncStreamsGroup;
-(id)initWithCaptureSyncStreamsGroup:(OpaqueFigCaptureSynchronizedStreamsGroupRef)arg1 fromDevice:(id)arg2 ;
-(id)streams:(id*)arg1 ;
@end

