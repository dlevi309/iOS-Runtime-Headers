/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSArray, NSString;

@interface CVNLPTextDecodingResultCandidate : NSObject {

	NSArray* _tokens;
	double _score;
	double _activationScore;

}

@property (nonatomic,readonly) NSArray * tokens;                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullString; 
@property (assign) double score;                                        //@synthesize score=_score - In the implementation block
@property (assign) double activationScore;                              //@synthesize activationScore=_activationScore - In the implementation block
-(NSArray *)tokens;
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSString *)fullString;
-(id)initWithTokens:(id)arg1 score:(double)arg2 activationScore:(double)arg3 ;
-(double)activationScore;
-(void)setActivationScore:(double)arg1 ;
@end

