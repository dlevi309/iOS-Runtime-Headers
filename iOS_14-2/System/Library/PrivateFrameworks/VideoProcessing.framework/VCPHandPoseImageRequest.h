/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPRequest.h>

@class VCPImageHandsAnalyzer;

@interface VCPHandPoseImageRequest : VCPRequest {

	VCPImageHandsAnalyzer* _analyzer;
	int _preferredWidth;
	int _preferredHeight;
	unsigned _preferredFormat;

}
+(int)parseResults:(id)arg1 observations:(id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(BOOL)updateWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)processImage:(CVBufferRef)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(unsigned)preferredPixelFormat;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
@end

