/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNPetsDetector;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {

	int _maxNumRegions;
	VCPCNNPetsDetector* _petsDetector;

}
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(int)convertResultsToDict:(id)arg1 results:(id)arg2 ;
@end

