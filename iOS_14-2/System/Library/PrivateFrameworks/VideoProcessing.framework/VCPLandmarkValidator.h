/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPLandmarkValidator : NSObject {

	VCPCNNModel* _model;
	VCPCNNData* _input;
	float* _transArray;
	float* _meanLandmarkLoc;
	char* _triIndexMap;
	unsigned char _numTri;
	char* _triList;
	float* _orientation;

}

@property (assign) float* orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)initWithModelFile:(id)arg1 paramFile:(_sFILE*)arg2 numTri:(unsigned char)arg3 triList:(char*)arg4 angle:(float*)arg5 ;
-(int)validateOneImage:(CVBufferRef)arg1 landmarks:(float*)arg2 numofLandmarks:(int)arg3 score:(float*)arg4 ;
-(float*)orientation;
-(void)dealloc;
-(void)setOrientation:(float*)arg1 ;
@end

