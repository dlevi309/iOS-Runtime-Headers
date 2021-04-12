/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString;

@interface LikelyAVFlowDetails : NSObject {

	int _matchScore;
	NSString* _owner;
	double _relevantThroughput;

}

@property (nonatomic,retain) NSString * owner;                       //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) int matchScore;                         //@synthesize matchScore=_matchScore - In the implementation block
@property (assign,nonatomic) double relevantThroughput;              //@synthesize relevantThroughput=_relevantThroughput - In the implementation block
-(NSString *)owner;
-(id)description;
-(void)setOwner:(NSString *)arg1 ;
-(int)matchScore;
-(void)setMatchScore:(int)arg1 ;
-(double)relevantThroughput;
-(void)setRelevantThroughput:(double)arg1 ;
@end

