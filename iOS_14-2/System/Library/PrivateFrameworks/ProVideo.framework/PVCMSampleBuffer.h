/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) SCD_Struct_PV22 presentationTimeStamp; 
+(id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(SCD_Struct_PV22)arg2 frameDuration:(SCD_Struct_PV22)arg3 ;
+(id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(SCD_Struct_PV22)arg2 frameDuration:(SCD_Struct_PV22)arg3 error:(out id*)arg4 ;
+(opaqueCMSampleBufferRef)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(SCD_Struct_PV73)arg2 error:(out id*)arg3 ;
-(SCD_Struct_PV22)presentationTimeStamp;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(opaqueCMSampleBufferRef)sampleBufferRef;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(out id*)arg2 ;
-(PVImageBuffer *)backingPVImageBuffer;
@end

