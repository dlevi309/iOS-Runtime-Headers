/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLCTensorDescriptor, NSData, MLCTensorData;

@interface MLCCustomLayerTensor : NSObject <NSCopying> {

	MLCTensorDescriptor* _descriptor;
	NSData* _cpuBuffer;
	id _gpuBuffer;

}

@property (nonatomic,retain) NSData * cpuBuffer;                                     //@synthesize cpuBuffer=_cpuBuffer - In the implementation block
@property (nonatomic,retain) id gpuBuffer;                                           //@synthesize gpuBuffer=_gpuBuffer - In the implementation block
@property (nonatomic,retain,readonly) MLCTensorDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MLCTensorData * hostData; 
@property (nonatomic,readonly) id<MTLBuffer> metalBuffer; 
+(id)customLayerTensorWithDescriptor:(id)arg1 gpuBuffer:(id)arg2 ;
+(id)customLayerTensorWithDescriptor:(id)arg1 cpuBuffer:(id)arg2 ;
-(MLCTensorDescriptor *)descriptor;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MTLBuffer>)metalBuffer;
-(id)initWithTensorDescriptor:(id)arg1 cpuBuffer:(id)arg2 gpuBuffer:(id)arg3 ;
-(NSData *)cpuBuffer;
-(id)gpuBuffer;
-(MLCTensorData *)hostData;
-(void)setCpuBuffer:(NSData *)arg1 ;
-(void)setGpuBuffer:(id)arg1 ;
@end

