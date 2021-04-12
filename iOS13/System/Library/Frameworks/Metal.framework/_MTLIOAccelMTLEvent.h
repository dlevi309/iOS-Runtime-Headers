/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <IOAccelerator/IOAccelMTLEvent.h>
#import <libobjc.A.dylib/MTLEvent.h>

@protocol MTLDevice;
@class NSString, MTLIOAccelDevice;

@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEvent> {

	MTLIOAccelDevice*<MTLDevice> _device;
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
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithDevice:(id)arg1 ;
-(id)retainedLabel;
@end

