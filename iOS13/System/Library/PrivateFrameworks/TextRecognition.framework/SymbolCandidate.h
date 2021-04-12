/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSString;

@interface SymbolCandidate : NSObject {

	unsigned short _symbol;
	double _probability;
	double _logProbability;

}

@property (assign,nonatomic) unsigned short symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (assign,nonatomic) double probability;                    //@synthesize probability=_probability - In the implementation block
@property (assign,nonatomic) double logProbability;                 //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,readonly) NSString * description; 
-(NSString *)description;
-(unsigned short)symbol;
-(void)setSymbol:(unsigned short)arg1 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
-(double)logProbability;
-(void)setLogProbability:(double)arg1 ;
@end

