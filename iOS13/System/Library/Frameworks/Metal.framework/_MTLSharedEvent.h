/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long signaledValue; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)retainedLabel;
-(id)initWithSharedEventHandle:(id)arg1 ;
-(unsigned long long)labelTraceID;
-(id)newSharedEventHandle;
@end

