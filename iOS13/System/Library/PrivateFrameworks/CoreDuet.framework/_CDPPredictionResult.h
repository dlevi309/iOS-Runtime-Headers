/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSMutableDictionary, NSArray;

@interface _CDPPredictionResult : NSObject {

	NSMutableDictionary* _scoresForMembers;
	NSArray* _rankedMembers;
	double _weight;

}

@property (retain) NSMutableDictionary * scoresForMembers;              //@synthesize scoresForMembers=_scoresForMembers - In the implementation block
@property (assign) double weight;                                       //@synthesize weight=_weight - In the implementation block
-(void)setScoresForMembers:(NSMutableDictionary *)arg1 ;
-(void)setWeight:(double)arg1 ;
-(void)commonInit;
-(double)weight;
-(NSMutableDictionary *)scoresForMembers;
-(id)rankedMembers:(id)arg1 ;
-(id)initWithMembers:(id)arg1 andScores:(id)arg2 ;
-(id)initByMergingPredictionResults:(id)arg1 ;
-(id)rankedMembers;
-(id)rankedCandidates:(id)arg1 ;
-(id)rankedMembersPassingThreshold:(double)arg1 ;
@end

