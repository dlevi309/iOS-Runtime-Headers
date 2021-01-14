/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithMaxNumRegions:(int)arg1 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(void)dealloc;
@end

