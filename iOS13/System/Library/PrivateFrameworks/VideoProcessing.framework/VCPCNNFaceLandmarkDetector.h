/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {

	NSMutableArray* _landmarks;

}
+(id)detector;
-(id)landmarks;
-(float*)getInputBuffer;
-(int)computeLandmarks:(float*)arg1 ;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceBounds:(CGRect)arg2 ;
@end

