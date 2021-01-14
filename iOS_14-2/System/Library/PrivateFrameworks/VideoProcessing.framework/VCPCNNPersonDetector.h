/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNPersonDetector : NSObject {

	int _maxNumRegions;
	float* _inputData;
	NSArray* _outputNames;
	vector<float *, std::__1::allocator<float *> >* _outputsData;
	VCPCNNModelEspresso* _modelEspresso;
	int _inputWidth;
	int _inputHeight;

}
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)retrieveBoxes:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 anchorBox:(float)arg5 ;
-(id)initWithMaxNumRegions:(int)arg1 forceCPU:(BOOL)arg2 sharedModel:(BOOL)arg3 inputConfig:(id)arg4 ;
-(void)nonMaxSuppression:(id)arg1 ;
-(int)generatePersonRegions:(const vector<espresso_buffer_t, std::__1::allocator<espresso_buffer_t> >*)arg1 boxes:(id)arg2 maxNumRegions:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 inputHeight:(int)arg3 inputWidth:(int)arg4 ;
-(int)generatePersonBoxes:(id)arg1 ;
-(int)personDetection:(CVBufferRef)arg1 personRegions:(id)arg2 cancel:(/*^block*/id)arg3 ;
@end

