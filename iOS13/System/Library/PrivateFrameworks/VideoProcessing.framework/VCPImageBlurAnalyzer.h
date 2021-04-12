/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray, VCPCNNModel, VCPCNNData, VCPCNNBlurAnalyzer;

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {

	float _sharpnessBlocks[16];
	NSArray* _faces;
	VCPCNNModel* _faceModel;
	VCPCNNData* _faceInput;
	BOOL _useGPU;
	BOOL _sdof;
	float _contrast;
	VCPCNNBlurAnalyzer* _blurAnalyzer;
	float _sharpness;
	float _textureScore;

}

@property (readonly) float sharpness;                 //@synthesize sharpness=_sharpness - In the implementation block
@property (readonly) float textureScore;              //@synthesize textureScore=_textureScore - In the implementation block
-(float)sharpness;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(float)textureScore;
-(void)setFaceResults:(id)arg1 ;
-(int)prepareFaceBlurModel:(BOOL)arg1 ;
-(int)scaleRegion:(CGRect*)arg1 ofImage:(CVBufferRef)arg2 toData:(id)arg3 withWidth:(int)arg4 andHeight:(int)arg5 ;
-(float)getFaceScoreFromOutput:(id)arg1 ratio:(float)arg2 ;
-(int)computeLocalSharpness:(CVBufferRef)arg1 ;
-(void)spatialPooling;
-(int)computeCNNFaceSharpness:(CVBufferRef)arg1 result:(float*)arg2 cancel:(/*^block*/id)arg3 ;
-(int)computeSharpnessScore:(float*)arg1 forFacesInImage:(CVBufferRef)arg2 ;
-(id)initWithFaceResults:(id)arg1 sdof:(BOOL)arg2 ;
@end

