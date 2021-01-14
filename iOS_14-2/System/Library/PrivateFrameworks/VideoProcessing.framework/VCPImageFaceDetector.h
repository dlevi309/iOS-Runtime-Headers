/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageFaceDetector : VCPImageAnalyzer
+(id)faceDetector;
-(BOOL)isDuplicate:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(int)faceDetection:(CVBufferRef)arg1 faces:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(int)processTile:(CVBufferRef)arg1 results:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)aggregateTileResults:(id)arg1 tileRect:(CGRect)arg2 imageSize:(CGSize)arg3 landscape:(BOOL)arg4 results:(id)arg5 ;
@end

