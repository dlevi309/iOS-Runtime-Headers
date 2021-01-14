/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNPersonDetector, VCPCNNPersonKeypointsDetector, NSMutableArray;

@interface VCPImageHumanPoseAnalyzerTopDown : VCPImageAnalyzer {

	int _maxNumRegions;
	int _inputWidth;
	int _inputHeight;
	VCPCNNPersonDetector* _personDetector;
	VCPCNNPersonKeypointsDetector* _personKeypointsDetector;
	NSMutableArray* _results;

}
-(id)initWithMaxNumRegions:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 inputConfig:(id)arg4 ;
-(int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned*)arg3 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
@end

