/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/


#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
@class NSData;

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	BOOL _canHardwareScaleImage;
	BOOL _stripImageMetadata;
	double _targetJPEGCompressionValue;

}

@property (assign,nonatomic) double targetJPEGCompressionValue;              //@synthesize targetJPEGCompressionValue=_targetJPEGCompressionValue - In the implementation block
@property (assign,nonatomic) BOOL stripImageMetadata;                        //@synthesize stripImageMetadata=_stripImageMetadata - In the implementation block
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(BOOL)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(BOOL)_decodeImageToIOSurface;
-(void)dealloc;
-(double)targetJPEGCompressionValue;
-(BOOL)stripImageMetadata;
-(BOOL)scaleImageToFitLargestDimension:(id)arg1 outputData:(id*)arg2 ;
-(void)setTargetJPEGCompressionValue:(double)arg1 ;
-(void)setStripImageMetadata:(BOOL)arg1 ;
@end

