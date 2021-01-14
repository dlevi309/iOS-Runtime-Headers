/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
*/

#import <IMTranscoderAgent/IMTranscoderAgent-Structs.h>
#import <IMTranscoderAgent/IMTranscoderImageSizeEstimator.h>

@interface IMTranscoderImageFigPhotoSizeEstimator : IMTranscoderImageSizeEstimator {

	FigPhotoDecompressionContainerRef _container;

}
-(void)dealloc;
-(unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
-(id)initWithURL:(id)arg1 uti:(id)arg2 imageSource:(CGImageSourceRef)arg3 ;
-(unsigned long long)optimizedEstimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3 ;
@end

