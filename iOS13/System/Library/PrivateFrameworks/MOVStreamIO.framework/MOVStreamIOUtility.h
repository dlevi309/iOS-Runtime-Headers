/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


#import <MOVStreamIO/MOVStreamIO-Structs.h>
@interface MOVStreamIOUtility : NSObject
+(id)valueWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)audioNoneEncoderConfig;
+(id)getJsonFriendlyCopy:(id)arg1 ;
+(BOOL)isValidJSONObject:(id)arg1 path:(id)arg2 ;
+(id)monochrome8bitHEVCLosslessEncoderConfig;
+(id)monochrome8bitHEVCEncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)monochrome8bitHEVCEncoderConfig;
+(id)slimEncoderConfig;
+(BOOL)isEncoderAvailableForEncoderType:(int)arg1 ;
+(id)colorH264EncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)colorH264EncoderConfig;
+(id)colorHEVCLosslessEncoderConfig;
+(id)colorHEVCEncoderConfigWithBitrate:(unsigned long long)arg1 ;
+(id)colorHEVCEncoderConfig;
+(opaqueCMFormatDescriptionRef)formatForPixelBuffer:(CVBufferRef)arg1 ;
+(BOOL)isEncoderAvailableWithEncoderName:(id)arg1 ;
+(double)transformAngleFromVideoOrientation:(int)arg1 ;
+(unsigned long long)getPreferredPlaneAlignmentSize;
+(unsigned long long)getPreferredBytesPerRowAlignmentSize;
+(int)getDefaultBitrateForVideoDimension:(SCD_Struct_MO2)arg1 atExpectedFramerate:(double)arg2 forEncoderType:(int)arg3 ;
+(CGAffineTransform)CGAffineTransformValueFromNSValue:(id)arg1 ;
+(id)addTransform:(CGAffineTransform)arg1 toConfiguration:(id)arg2 ;
+(id)addTrackTypeInfo:(unsigned long long)arg1 toConfiguration:(id)arg2 ;
+(id)monochrome10bitHEVCLosslessEncoderConfig;
+(id)slimXEncoderConfig;
+(id)noneEncoderConfig;
+(id)sampleBufferConfigWithPixelFormat:(unsigned)arg1 ;
+(id)customEncoderConfig;
+(void)populateError:(id*)arg1 withLocalizedDescription:(id)arg2 andErrorCode:(long long)arg3 ;
+(BOOL)verifyExactBytesPerRow:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned)arg4 ;
+(id)getPlistFriendlyCopyOf:(id)arg1 ;
+(void)populateError:(id*)arg1 withLocalizedDescription:(id)arg2 andErrorCode:(long long)arg3 domain:(id)arg4 log:(BOOL)arg5 ;
+(opaqueCMFormatDescriptionRef)createL010FormatDescriptionFromL016FormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(opaqueCMFormatDescriptionRef)createL010FormatDescriptionFromRawBayerFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(opaqueCMFormatDescriptionRef)createL008FormatDescriptionFromCompandedRawBayerFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
@end

