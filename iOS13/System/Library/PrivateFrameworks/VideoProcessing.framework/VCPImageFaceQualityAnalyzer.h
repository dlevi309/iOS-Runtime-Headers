/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray;

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer {

	NSMutableArray* _faceQualityScores;

}

@property (retain) NSMutableArray * faceQualityScores;              //@synthesize faceQualityScores=_faceQualityScores - In the implementation block
-(void)dealloc;
-(int)analyzeDetectedFaces:(CVBufferRef)arg1 faceResults:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(NSMutableArray *)faceQualityScores;
-(void)setFaceQualityScores:(NSMutableArray *)arg1 ;
@end

