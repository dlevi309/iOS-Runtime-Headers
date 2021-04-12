/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPRTLandmarkDetector : NSObject {

	LandmarkDetector* _internalLandmarkDetector;
	int _numOfLandmarks;

}
-(id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6 ;
-(void)detectLandmark:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float*)arg5 prevResult:(float*)arg6 result:(float*)arg7 ;
-(void)calculateFaceRectFromPrevLM:(float*)arg1 result:(float*)arg2 numOfLandmarks:(int)arg3 ;
-(void)dealloc;
@end

