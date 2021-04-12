/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNModelEspresso, NSString, NSMutableArray;

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	NSString* _resConfig;
	NSMutableArray* _persons;
	NSMutableArray* _results;
	BOOL _saveKeypoints;
	int _inputWidth;
	int _inputHeight;
	BOOL _trackingMode;

}

@property (assign) BOOL trackingMode;              //@synthesize trackingMode=_trackingMode - In the implementation block
+(id)sharedModel:(id)arg1 ;
+(BOOL)saveKeypoints;
-(id)init;
-(void)dealloc;
-(BOOL)trackingMode;
-(void)setTrackingMode:(BOOL)arg1 ;
-(int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2 ;
-(int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3 ;
-(int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChannels:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4 ;
-(int)generateHumanPose:(CVBufferRef)arg1 ;
-(id)initWithKeypointsOption:(BOOL)arg1 aspectRatio:(id)arg2 lightweight:(BOOL)arg3 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
@end

