/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXVideoEncoderInterface : NSObject {

	HEVCLosslessEncoder* m_encoder;
	CVBufferRef m_preparedPixelBuffer;
	BOOL m_encoderInitialized;
	promise<opaqueCMSampleBuffer *>* m_sampleBufferPromise;
	double m_expectedFrameRate;
	opaqueCMSampleBufferRef _currentBuffer;

}

@property (assign) opaqueCMSampleBufferRef currentBuffer;              //@synthesize currentBuffer=_currentBuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(opaqueCMSampleBufferRef)currentBuffer;
-(void)writeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)skipFrame;
-(void)setupEncoderWithWidth:(int)arg1 andHeight:(int)arg2 imageFormat:(int)arg3 andFramerate:(double)arg4 ;
-(id)initWithExpectedFrameRate:(double)arg1 ;
-(opaqueCMSampleBufferRef)encodeFrame:(CVBufferRef)arg1 presentationTime:(SCD_Struct_JF3)arg2 frameProperties:(CFDictionaryRef)arg3 ;
-(void)closeEncoder;
-(void)setCurrentBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

