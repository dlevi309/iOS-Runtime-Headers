/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class MLCDeviceCPU, NSArray;

@interface _MLCCPULayer : NSObject {

	MLCDeviceCPU* _device;
	void* _filter;
	NSArray* _deviceOps;

}

@property (nonatomic,readonly) MLCDeviceCPU * device;              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) void* filter;                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * deviceOps;                  //@synthesize deviceOps=_deviceOps - In the implementation block
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensors:(id)arg4 ;
-(void)setFilter:(void*)arg1 ;
-(void*)filter;
-(MLCDeviceCPU *)device;
-(void)dealloc;
-(NSArray *)deviceOps;
-(void)setDeviceOps:(NSArray *)arg1 ;
-(id)initWithDevice:(id)arg1 deviceOps:(id)arg2 ;
@end

