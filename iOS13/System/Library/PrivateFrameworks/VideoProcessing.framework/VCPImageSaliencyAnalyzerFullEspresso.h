/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPImageSaliencyAnalyzer.h>

@class VCPCNNModelEspresso, NSString;

@interface VCPImageSaliencyAnalyzerFullEspresso : VCPImageSaliencyAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _srcWidth;
	int _srcHeight;

}
+(id)sharedModel:(id)arg1 ;
-(void)dealloc;
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)getSalientRegions:(/*^block*/id)arg1 ;
@end

