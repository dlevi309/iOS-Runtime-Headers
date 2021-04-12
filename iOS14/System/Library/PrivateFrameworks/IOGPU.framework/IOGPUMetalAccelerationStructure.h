/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/

#import <IOGPU/IOGPUMetalResource.h>

@protocol MTLBuffer;
@class IOGPUMetalBuffer, MTLAccelerationStructureDescriptor;

@interface IOGPUMetalAccelerationStructure : IOGPUMetalResource {

	IOGPUMetalBuffer*<MTLBuffer> _buffer;
	unsigned long long _bufferOffset;
	MTLAccelerationStructureDescriptor* _descriptor;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) IOGPUMetalBuffer*<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(MTLAccelerationStructureDescriptor *)descriptor;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)bufferOffset;
-(IOGPUMetalBuffer*<MTLBuffer>)buffer;
-(void)setDescriptor:(MTLAccelerationStructureDescriptor *)arg1 ;
-(void)dealloc;
@end

