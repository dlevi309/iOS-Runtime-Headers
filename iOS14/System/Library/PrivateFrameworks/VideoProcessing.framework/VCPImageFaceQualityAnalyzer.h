/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray;

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer {

	NSMutableArray* _faceQualityScores;

}

@property (retain) NSMutableArray * faceQualityScores;              //@synthesize faceQualityScores=_faceQualityScores - In the implementation block
-(int)analyzeDetectedFaces:(CVBufferRef)arg1 faceResults:(id)arg2 cancel:(/*^block*/id)arg3 ;
-(NSMutableArray *)faceQualityScores;
-(void)setFaceQualityScores:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

