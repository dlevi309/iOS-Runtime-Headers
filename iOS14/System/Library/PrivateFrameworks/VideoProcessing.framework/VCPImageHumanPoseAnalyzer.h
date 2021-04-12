/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNModelEspresso, NSURL, NSString, NSMutableArray;

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	NSURL* _netFileUrl;
	float* _inputData;
	NSString* _resConfig;
	NSMutableArray* _persons;
	NSMutableArray* _results;
	BOOL _saveKeypoints;
	int _inputWidth;
	int _inputHeight;
	float* _heatmapNms;
	BOOL _forceCPU;
	BOOL _sharedModel;
	BOOL _flushModel;
	BOOL _trackingMode;

}

@property (assign) BOOL trackingMode;              //@synthesize trackingMode=_trackingMode - In the implementation block
+(id)sharedModel:(id)arg1 ;
+(BOOL)saveKeypoints;
-(id)init;
-(BOOL)trackingMode;
-(int)configForAspectRatio:(id)arg1 ;
-(int)createModelWithHeight:(int)arg1 srcWidth:(int)arg2 ;
-(int)parsePersons:(float)arg1 width:(int)arg2 height:(int)arg3 ;
-(int)processPersons:(float)arg1 width:(int)arg2 height:(int)arg3 ;
-(int)reInitModel;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChannels:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4 ;
-(int)generateHumanPose:(CVBufferRef)arg1 ;
-(id)initWithKeypointsOption:(BOOL)arg1 aspectRatio:(id)arg2 lightweight:(BOOL)arg3 forceCPU:(BOOL)arg4 sharedModel:(BOOL)arg5 flushModel:(BOOL)arg6 ;
-(int)updateModelForAspectRatio:(id)arg1 ;
-(int)preferredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned*)arg3 ;
-(void)setTrackingMode:(BOOL)arg1 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

