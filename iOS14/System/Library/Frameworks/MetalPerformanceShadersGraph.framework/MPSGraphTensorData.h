/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/


@class MPSNDArray, NSArray, NSData, MPSGraphDevice;

@interface MPSGraphTensorData : NSObject {

	MPSNDArray* _mpsndarray;
	NSArray* _mpsimagebatch;
	NSData* _data;
	long long _layout;
	unsigned _dataType;
	NSArray* _shape;
	MPSGraphDevice* _device;

}

@property (nonatomic,copy,readonly) NSArray * shape;                 //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) MPSGraphDevice * device;              //@synthesize device=_device - In the implementation block
-(unsigned)dataType;
-(NSArray *)shape;
-(void)printNDArray;
-(id)checkNDArray:(float*)arg1 nativeUlps:(float)arg2 absoluteErr:(float)arg3 ;
-(MPSGraphDevice *)device;
-(id)mpsndarray;
-(id)initWithDevice:(id)arg1 data:(id)arg2 shape:(id)arg3 dataType:(unsigned)arg4 ;
-(id)initWithMTLBuffer:(id)arg1 shape:(id)arg2 dataType:(unsigned)arg3 ;
-(id)initWithMPSMatrix:(id)arg1 rank:(unsigned long long)arg2 ;
-(id)initWithMPSMatrix:(id)arg1 ;
-(id)initWithMPSVector:(id)arg1 ;
-(id)initWithMPSVector:(id)arg1 rank:(unsigned long long)arg2 ;
-(id)initWithMPSNDArray:(id)arg1 ;
-(id)initWithMPSImageBatch:(id)arg1 ;
@end

