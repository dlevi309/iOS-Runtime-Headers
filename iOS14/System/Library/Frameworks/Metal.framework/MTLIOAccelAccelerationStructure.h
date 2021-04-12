/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLIOAccelResource.h>

@protocol MTLBuffer;
@class MTLIOAccelBuffer, MTLAccelerationStructureDescriptor;

@interface MTLIOAccelAccelerationStructure : MTLIOAccelResource {

	MTLIOAccelBuffer*<MTLBuffer> _buffer;
	unsigned long long _bufferOffset;
	MTLAccelerationStructureDescriptor* _descriptor;

}

@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) MTLIOAccelBuffer*<MTLBuffer> buffer; 
@property (nonatomic,readonly) unsigned long long bufferOffset; 
@property (nonatomic,retain) MTLAccelerationStructureDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(unsigned long long)size;
-(unsigned long long)uniqueIdentifier;
-(MTLAccelerationStructureDescriptor *)descriptor;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)bufferOffset;
-(MTLIOAccelBuffer*<MTLBuffer>)buffer;
-(void)setDescriptor:(MTLAccelerationStructureDescriptor *)arg1 ;
-(void)dealloc;
@end

