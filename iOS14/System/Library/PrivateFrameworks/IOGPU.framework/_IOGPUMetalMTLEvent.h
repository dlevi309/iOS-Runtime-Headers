/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMTLEvent.h>
#import <libobjc.A.dylib/MTLEvent.h>

@protocol MTLDevice;
@class NSString, IOGPUMetalDevice;

@interface _IOGPUMetalMTLEvent : IOGPUMTLEvent <MTLEvent> {

	IOGPUMetalDevice*<MTLDevice> _device;
	unsigned long long _labelTraceID;
	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(id)retainedLabel;
-(NSString *)label;
-(void)dealloc;
@end

