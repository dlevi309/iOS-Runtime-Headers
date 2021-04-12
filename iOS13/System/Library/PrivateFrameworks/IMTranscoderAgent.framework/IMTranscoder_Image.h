/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/

#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_Image : IMTranscoder {

	BOOL _stripImageMetadata;
	double _overrideJPEGCompressionQuality;

}

@property (assign,nonatomic) double overrideJPEGCompressionQuality;              //@synthesize overrideJPEGCompressionQuality=_overrideJPEGCompressionQuality - In the implementation block
@property (assign,nonatomic) BOOL stripImageMetadata;                            //@synthesize stripImageMetadata=_stripImageMetadata - In the implementation block
+(id)supportedUTIs;
+(id)excludedUTIs;
+(BOOL)_canConvertPNGToJPEG:(CGImageRef)arg1 ;
-(void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(/*^block*/id)arg9 ;
-(BOOL)stripImageMetadata;
-(void)setStripImageMetadata:(BOOL)arg1 ;
-(BOOL)_isHEIFImageFormat:(CGImageSourceRef)arg1 ;
-(BOOL)_isWideGamutImage:(CGImageSourceRef)arg1 ;
-(void)_setWideGamutProperties:(id)arg1 scaledImage:(CGImageRef)arg2 imageDestination:(CGImageDestinationRef)arg3 index:(unsigned long long)arg4 ;
-(id)_writeImageData:(id)arg1 inFormat:(CFStringRef)arg2 sourceURL:(id)arg3 ;
-(double)overrideJPEGCompressionQuality;
-(id)_newGeneratedImage:(CGImageSourceRef)arg1 sourceWidth:(id)arg2 sourceHeight:(id)arg3 sourceLength:(unsigned long long)arg4 sourceProps:(id)arg5 target:(long long)arg6 hardwareEncoder:(id)arg7 inFormat:(CFStringRef)arg8 fromFormat:(CFStringRef)arg9 withMaxLength:(unsigned long long)arg10 withMaxCount:(unsigned long long)arg11 withCompressionQuality:(double)arg12 enforceMaxes:(BOOL)arg13 subsampling:(int)arg14 ;
-(id)_checkAndSaveImageData:(id)arg1 sourceURL:(id)arg2 inFormat:(CFStringRef)arg3 withMaxByteSize:(unsigned long long)arg4 actualSize:(unsigned long long*)arg5 usedLengthIndex:(int*)arg6 currentIndex:(int)arg7 ;
-(id)_copyWideGamutImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 inFormat:(CFStringRef)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 telemetry:(id)arg7 ;
-(id)_writeHEIFImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 inFormat:(CFStringRef)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long*)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int*)arg8 telemetry:(id)arg9 ;
-(id)_writeImage:(CGImageSourceRef)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(CFStringRef)arg5 fromFormat:(CFStringRef)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long*)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int*)arg11 estimator:(id)arg12 telemetry:(id)arg13 ;
-(unsigned long long)_getImageWidth:(CGImageSourceRef)arg1 ;
-(void)setOverrideJPEGCompressionQuality:(double)arg1 ;
-(id)_writeRepresentationsForImage:(CGImageSourceRef)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(CFStringRef)arg6 inFormat:(CFStringRef)arg7 estimator:(id)arg8 telemetry:(id)arg9 ;
-(id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3 ;
@end

