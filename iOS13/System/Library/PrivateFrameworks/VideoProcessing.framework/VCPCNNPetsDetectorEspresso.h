/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VCPCNNPetsDetector.h>

@class VCPCNNModelEspresso, NSString;

@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {

	int _maxNumRegions;
	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	int _srcWidth;
	int _srcHeight;

}
+(id)sharedModel:(id)arg1 ;
-(void)dealloc;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(/*^block*/id)arg3 ;
@end

