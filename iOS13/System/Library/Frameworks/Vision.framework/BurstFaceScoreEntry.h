/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface BurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(float)computeAverage;
-(id)initWithScore:(float)arg1 ;
-(void)addScore:(float)arg1 ;
-(float)computeStandardDeviation;
-(float)maxScore;
-(void)setMaxScore:(float)arg1 ;
-(float)minScore;
-(void)setMinScore:(float)arg1 ;
-(int)numScores;
-(void)setNumScores:(int)arg1 ;
@end

