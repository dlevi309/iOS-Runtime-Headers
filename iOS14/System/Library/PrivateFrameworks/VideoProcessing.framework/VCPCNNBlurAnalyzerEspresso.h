/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNBlurAnalyzer.h>

@class VCPLoaned, NSString;

@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer {

	VCPLoaned* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _srcWidth;
	int _srcHeight;

}
+(id)sharedModelPoolWithRevision:(unsigned long long)arg1 ;
+(id)sharedModel:(id)arg1 ;
-(id)init;
-(id)initWithRevision:(unsigned long long)arg1 ;
-(float)calculateScoreFromNetworkOutputV2:(float*)arg1 ;
-(void)copyBufferFrom:(char*)arg1 fromStride:(long long)arg2 toPtr:(float*)arg3 toStride:(long long)arg4 toWidth:(int)arg5 toHeight:(int)arg6 ;
-(int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)computeSharpnessScore:(float*)arg1 textureness:(char*)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(/*^block*/id)arg5 ;
-(void)dealloc;
@end

