/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <libobjc.A.dylib/EncoderConfigDelegate.h>

@protocol VideoEncoderInterfaceDelegate;
@class NSString;

@interface VideoEncoderInterface : NSObject <EncoderConfigDelegate> {

	HEVCLosslessEncoder* m_encoder;
	BOOL m_encoderInitialized;
	double m_expectedFrameRate;
	int m_qpValue;
	NSString* m_stream;
	id<VideoEncoderInterfaceDelegate> m_delegate;
	BOOL _customEncoderConfig;
	unsigned _lastEncodingStatus;
	unsigned _lastEncodingInfoFlags;

}

@property (readonly) unsigned lastEncodingStatus;                   //@synthesize lastEncodingStatus=_lastEncodingStatus - In the implementation block
@property (readonly) unsigned lastEncodingInfoFlags;                //@synthesize lastEncodingInfoFlags=_lastEncodingInfoFlags - In the implementation block
@property (readonly) BOOL frameReorderingEnabled; 
@property (assign) BOOL customEncoderConfig;                        //@synthesize customEncoderConfig=_customEncoderConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CVBufferRef)createHEVCCompatiblePixelBuffer:(CVBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)customEncoderConfig;
-(void)encodeFrame:(CVBufferRef)arg1 pst:(SCD_Struct_MO29)arg2 frameProperties:(CFDictionaryRef)arg3 metadata:(id)arg4 ;
-(BOOL)frameReorderingEnabled;
-(unsigned)lastEncodingStatus;
-(unsigned)lastEncodingInfoFlags;
-(void)closeEncoder;
-(id)initWithExpectedFrameRate:(double)arg1 forStream:(id)arg2 delegate:(id)arg3 ;
-(void)setCustomEncoderConfig:(BOOL)arg1 ;
-(id)overrideVideoEncoderSpecification;
-(unsigned)codecTypeOverride;
-(BOOL)configureSessionOverride:(OpaqueVTCompressionSessionRef)arg1 ;
-(void)writeSampleBuffer:(opaqueCMSampleBufferRef)arg1 pts:(SCD_Struct_MO29)arg2 metadata:(id)arg3 withStatus:(int)arg4 andFlags:(unsigned)arg5 ;
-(void)skipFrameWithStatus:(int)arg1 andFlags:(unsigned)arg2 ;
-(void)setupEncoderWithWidth:(int)arg1 andHeight:(int)arg2 imageFormat:(int)arg3 andFramerate:(double)arg4 ;
-(void)useQPEncoding:(int)arg1 ;
@end

