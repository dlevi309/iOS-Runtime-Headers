/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)getSalientRegions:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

