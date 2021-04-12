/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoActivityDescriptor : NSObject {

	float descriptors[10];
	int _widthInMb;
	int _heightInMb;
	long long* _motionMagnitudeHistogram;
	float* _motionMagnitude;

}

@property (readonly) float* descriptors; 
-(void)dealloc;
-(void)reset;
-(float*)descriptors;
-(id)initWithFrameWidthInMb:(int)arg1 heightInMb:(int)arg2 ;
-(void)ExtractActivityDescriptorFromStats:(EncodeStats*)arg1 ;
-(void)spatialDescriptorWithMvMagnitudeMean:(float)arg1 ;
@end

