/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class MLCTensor, MLCDevice;

@interface MLCTensorParameter : NSObject {

	BOOL _isUpdatable;
	MLCTensor* _tensor;
	MLCDevice* _device;

}

@property (nonatomic,retain) MLCDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,retain,readonly) MLCTensor * tensor;              //@synthesize tensor=_tensor - In the implementation block
@property (assign,nonatomic) BOOL isUpdatable;                         //@synthesize isUpdatable=_isUpdatable - In the implementation block
+(id)parameterWithTensor:(id)arg1 optimizerData:(id)arg2 ;
+(id)parameterWithTensor:(id)arg1 ;
-(BOOL)isUpdatable;
-(MLCDevice *)device;
-(MLCTensor *)tensor;
-(void)setIsUpdatable:(BOOL)arg1 ;
-(void)setDevice:(MLCDevice *)arg1 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 device:(id)arg2 isVector:(BOOL)arg3 ;
-(id)initWithTensor:(id)arg1 optimizerData:(id)arg2 ;
@end

