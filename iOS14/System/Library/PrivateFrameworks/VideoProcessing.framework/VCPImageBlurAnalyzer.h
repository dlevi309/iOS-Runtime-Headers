/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPBlurAnalyzer.h>

@class NSArray, VCPCNNModel, VCPCNNData, VCPCNNBlurAnalyzer;

@interface VCPImageBlurAnalyzer : VCPBlurAnalyzer {

	float _sharpnessBlocks[16];
	NSArray* _faces;
	NSArray* _framePTSResults;
	NSArray* _homographyResults;
	VCPCNNModel* _faceModel;
	VCPCNNData* _faceInput;
	float _livePhotoStillDisplayTime;
	float _imageExposureTime;
	BOOL _useGPU;
	BOOL _sdof;
	float _contrast;
	VCPCNNBlurAnalyzer* _blurAnalyzer;
	float _sharpness;
	float _textureScore;

}

@property (readonly) float sharpness;                 //@synthesize sharpness=_sharpness - In the implementation block
@property (readonly) float textureScore;              //@synthesize textureScore=_textureScore - In the implementation block
-(float)getFaceScoreFromOutput:(id)arg1 ratio:(float)arg2 ;
-(float)estimateDistance:(id)arg1 prevHomography:(id)arg2 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 withPreAnalysisScore:(float)arg3 results:(id*)arg4 cancel:(/*^block*/id)arg5 ;
-(int)computeLocalSharpness:(CVBufferRef)arg1 ;
-(void)spatialPooling;
-(int)computeCNNFaceSharpness:(CVBufferRef)arg1 result:(float*)arg2 cancel:(/*^block*/id)arg3 ;
-(int)computeSharpnessScore:(float*)arg1 forFacesInImage:(CVBufferRef)arg2 ;
-(int)computeGyroSharpness:(float*)arg1 ;
-(id)initWithFaceResults:(id)arg1 sdof:(BOOL)arg2 ;
-(void)setGyroSharpnessParam:(id)arg1 homographyResults:(id)arg2 livePhotoStillDisplayTime:(float)arg3 imageExposureTime:(float)arg4 ;
-(float)sharpness;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(float)textureScore;
-(void)setFaceResults:(id)arg1 ;
-(id)initWithFaceResults:(id)arg1 sdof:(BOOL)arg2 revision:(unsigned long long)arg3 ;
-(int)prepareFaceBlurModel:(BOOL)arg1 ;
-(int)scaleRegion:(CGRect*)arg1 ofImage:(CVBufferRef)arg2 toData:(id)arg3 withWidth:(int)arg4 andHeight:(int)arg5 ;
@end

