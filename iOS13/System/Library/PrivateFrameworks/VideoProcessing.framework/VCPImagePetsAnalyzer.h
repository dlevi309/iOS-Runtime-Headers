/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNPetsDetector;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {

	int _maxNumRegions;
	VCPCNNPetsDetector* _petsDetector;

}
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)convertResultsToDict:(id)arg1 results:(id)arg2 ;
@end

