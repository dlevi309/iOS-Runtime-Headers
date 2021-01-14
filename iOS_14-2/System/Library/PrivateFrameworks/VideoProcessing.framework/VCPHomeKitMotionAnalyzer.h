/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableArray;

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {

	NSMutableArray* _regions;
	float* _diff;
	float* _ptrFirst;
	float* _ptrLast;
	Scaler* _scaler;
	vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >* _frameArray;
	int _frameWidth;
	int _frameHeight;
	int _width;
	int _height;
	int _stride;
	int _blockSize;
	int _widthBlockNum;
	int _heightBlockNum;
	float _actionScore;

}

@property (readonly) float actionScore;              //@synthesize actionScore=_actionScore - In the implementation block
-(id)init;
-(int)setPixelBuffer:(CVBufferRef)arg1 ;
-(int)calculateFrameDifference:(CVBufferRef)arg1 ;
-(int)computeRegionsofInterest;
-(float)actionScore;
-(int)analyzeFrame:(CVBufferRef)arg1 withTimestamp:(SCD_Struct_VC6)arg2 andDuration:(SCD_Struct_VC6)arg3 flags:(unsigned long long*)arg4 ;
-(id)regionsOfInterest;
-(void)dealloc;
@end

