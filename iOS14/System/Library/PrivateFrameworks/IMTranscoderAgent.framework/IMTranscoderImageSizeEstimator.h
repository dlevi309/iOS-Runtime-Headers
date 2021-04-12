/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/


#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
@interface IMTranscoderImageSizeEstimator : NSObject {

	CGSize _originalSize;
	double _normalizedInputFactor;

}
+(id)newEstimatorWithURL:(id)arg1 uti:(id)arg2 imageSource:(CGImageSourceRef)arg3 ;
-(unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
-(id)initWithUTI:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(double)_normalizedInputFactorForUTI:(id)arg1 bytesPerPixel:(double)arg2 ;
-(double)_nominalBytesPerPixelForUTI:(id)arg1 ;
-(CGSize)_newSizeForMaximumDimension:(long long)arg1 originalSize:(CGSize)arg2 ;
-(double)_estimatedBytesPerPixelForJPEGQuality:(double)arg1 ;
-(id)initWithUTI:(id)arg1 originalSize:(CGSize)arg2 fileSize:(unsigned long long)arg3 ;
@end

