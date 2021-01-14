/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)probability;
-(NSString *)description;
-(unsigned short)symbol;
-(void)setProbability:(double)arg1 ;
-(void)setSymbol:(unsigned short)arg1 ;
-(void)setLogProbability:(double)arg1 ;
-(double)logProbability;
@end

