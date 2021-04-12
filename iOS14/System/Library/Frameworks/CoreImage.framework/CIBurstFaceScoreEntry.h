/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@interface CIBurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(float)maxScore;
-(id)initWithScore:(float)arg1 ;
-(void)setMaxScore:(float)arg1 ;
-(float)minScore;
-(float)computeAverage;
-(float)computeStandardDeviation;
-(void)setMinScore:(float)arg1 ;
-(void)setNumScores:(int)arg1 ;
-(void)addScore:(float)arg1 ;
-(int)numScores;
@end

