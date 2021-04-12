/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVImageBuffer;

@interface PVCMSampleBuffer : NSObject {

	opaqueCMSampleBufferRef _sampleBufferRef;
	PVImageBuffer* _backingPVImageBuffer;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBufferRef;              //@synthesize sampleBufferRef=_sampleBufferRef - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * backingPVImageBuffer;                 //@synthesize backingPVImageBuffer=_backingPVImageBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV20 presentationTimeStamp; 
+(id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(SCD_Struct_PV20)arg2 frameDuration:(SCD_Struct_PV20)arg3 ;
+(opaqueCMSampleBufferRef)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(SCD_Struct_PV69)arg2 ;
-(void)dealloc;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_PV20)presentationTimeStamp;
-(opaqueCMSampleBufferRef)sampleBufferRef;
-(PVImageBuffer *)backingPVImageBuffer;
@end

