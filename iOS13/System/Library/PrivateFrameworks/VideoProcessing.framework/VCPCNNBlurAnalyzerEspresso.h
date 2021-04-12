/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNBlurAnalyzer.h>

@class VCPCNNModelEspresso, NSString;

@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _srcWidth;
	int _srcHeight;

}
+(id)sharedModel:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)computeSharpnessScore:(float*)arg1 textureness:(char*)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(/*^block*/id)arg5 ;
@end

