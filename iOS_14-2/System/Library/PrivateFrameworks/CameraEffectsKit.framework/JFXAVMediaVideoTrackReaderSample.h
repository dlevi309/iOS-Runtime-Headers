/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaVideoTrackReaderSample.h>

@interface JFXAVMediaVideoTrackReaderSample : NSObject <JFXMediaVideoTrackReaderSample> {

	opaqueCMSampleBufferRef _sampleBufferRef;
	SCD_Struct_JF3 _duration;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBufferRef;              //@synthesize sampleBufferRef=_sampleBufferRef - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 presentationTimeStamp; 
@property (nonatomic,readonly) SCD_Struct_JF4 timeRange; 
-(SCD_Struct_JF3)presentationTimeStamp;
-(SCD_Struct_JF4)timeRange;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_JF3)duration;
-(void)dealloc;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 duration:(SCD_Struct_JF3)arg2 ;
-(opaqueCMSampleBufferRef)sampleBufferRef;
@end

