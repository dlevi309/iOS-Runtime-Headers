/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {

	NSMutableArray* _landmarks;

}
+(id)detector;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceBounds:(CGRect)arg2 ;
-(id)landmarks;
-(float*)getInputBuffer;
-(int)computeLandmarks:(float*)arg1 ;
@end

