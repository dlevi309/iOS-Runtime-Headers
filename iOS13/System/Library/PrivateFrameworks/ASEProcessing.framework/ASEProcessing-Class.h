/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ASEProcessing.framework/ASEProcessing
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <ASEProcessing/ASEProcessing-Structs.h>
@class NSObject;

@interface ASEProcessing : NSObject {

	unsigned long long _numberOfRequestedFrames;
	unsigned long long _numberOfScheduledFrames;
	unsigned long long _numberOfProcessedFrames;
	int _aseProcessingVersion;
	unsigned _aseProcessingType;
	unsigned _inputWidth;
	unsigned _inputHeight;
	SCD_Struct_AS9* _aseFrameProcessing;
	NSObject*<OS_dispatch_queue> _scheduleQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_semaphore> _scheduleSemaphone;
	unsigned _noiseMeterStepSize;
	unsigned _FD_state;
	unsigned _FG_count;
	unsigned _NFG_count;
	unsigned _prev_H1_7;
	unsigned _prev_V1_7;
	unsigned _prev_ratio_2D_1D;
	unsigned _productType;
	float _enhancementStrength;
	unsigned _destinationWidth;
	unsigned _destinationHeight;

}

@property (assign) float enhancementStrength;               //@synthesize enhancementStrength=_enhancementStrength - In the implementation block
@property (assign) unsigned destinationWidth;               //@synthesize destinationWidth=_destinationWidth - In the implementation block
@property (assign) unsigned destinationHeight;              //@synthesize destinationHeight=_destinationHeight - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithConfig:(const SCD_Struct_AS10*)arg1 ;
-(long long)processFrameWithInput:(SCD_Struct_AS11*)arg1 Output:(SCD_Struct_AS9*)arg2 ;
-(void)setDestinationHeight:(unsigned)arg1 ;
-(void)setDestinationWidth:(unsigned)arg1 ;
-(void)processPixelWithInput:(const SCD_Struct_AS11*)arg1 Output:(SCD_Struct_AS9*)arg2 ;
-(void)processPixelWithInput_V0:(const SCD_Struct_AS11*)arg1 Output:(SCD_Struct_AS9*)arg2 ;
-(void)processPixelWithInput_V1:(const SCD_Struct_AS11*)arg1 Output:(SCD_Struct_AS9*)arg2 ;
-(void)processPixelWithPixelControl_V0:(SCD_Struct_AS12*)arg1 ;
-(void)processPixelWithMeasurement_V0:(const SCD_Struct_AS11*)arg1 pixelControl:(SCD_Struct_AS12*)arg2 ;
-(void)digitalZoomSelectControl_V0:(SCD_Struct_AS12*)arg1 ;
-(void)printAseMeasurementOutput:(const SCD_Struct_AS11*)arg1 ;
-(void)processPixelWithPixelControl_V1:(SCD_Struct_AS7*)arg1 ;
-(void)processPixelWithMeasurement_V1:(const SCD_Struct_AS11*)arg1 pixelControl:(SCD_Struct_AS7*)arg2 ;
-(void)digitalZoomSelectControl_V1:(SCD_Struct_AS7*)arg1 ;
-(long long)processFrameWithInput:(SCD_Struct_AS11*)arg1 callback:(/*^block*/id)arg2 ;
-(float)enhancementStrength;
-(void)setEnhancementStrength:(float)arg1 ;
-(unsigned)destinationWidth;
-(unsigned)destinationHeight;
@end

