/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <IOSurface/IOSurfaceSharedEvent.h>
#import <libobjc.A.dylib/MTLSharedEvent.h>

@class NSString;

@interface _MTLSharedEvent : IOSurfaceSharedEvent <MTLSharedEvent> {

	unsigned long long _labelTraceID;
	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long labelTraceID;               //@synthesize labelTraceID=_labelTraceID - In the implementation block
@property (assign) unsigned long long signaledValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithSharedEventHandle:(id)arg1 ;
-(id<MTLDevice>)device;
-(unsigned long long)labelTraceID;
-(id)newSharedEventHandle;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)retainedLabel;
-(NSString *)label;
-(void)dealloc;
@end

