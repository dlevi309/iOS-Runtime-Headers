/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class NSArray;

@interface _MLCGPULayer : NSObject {

	NSArray* _deviceOps;

}

@property (nonatomic,retain) NSArray * deviceOps;              //@synthesize deviceOps=_deviceOps - In the implementation block
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensors:(id)arg4 ;
-(NSArray *)deviceOps;
-(void)setDeviceOps:(NSArray *)arg1 ;
@end

