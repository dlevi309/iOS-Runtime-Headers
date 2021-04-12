/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePassDescriptor.h>

@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor {

	MTLComputePassDescriptorPrivate _private;
	unsigned _substreamCount;

}

@property (assign,nonatomic) unsigned substreamCount;              //@synthesize substreamCount=_substreamCount - In the implementation block
+(id)computePassDescriptor;
-(id)init;
-(void)setDispatchType:(unsigned long long)arg1 ;
-(unsigned)substreamCount;
-(void)setSubstreamCount:(unsigned)arg1 ;
-(const MTLComputePassDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)dispatchType;
-(unsigned long long)hash;
-(id)sampleBufferAttachments;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

