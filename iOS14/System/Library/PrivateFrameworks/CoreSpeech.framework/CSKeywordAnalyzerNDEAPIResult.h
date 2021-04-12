/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSDictionary;

@interface CSKeywordAnalyzerNDEAPIResult : NSObject {

	BOOL _isSecondChance;
	BOOL _isEarlyDetect;
	float _bestScore;
	unsigned long long _samplesFed;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;

}

@property (assign,nonatomic) unsigned long long samplesFed;              //@synthesize samplesFed=_samplesFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;               //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                 //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                            //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) BOOL isSecondChance;                        //@synthesize isSecondChance=_isSecondChance - In the implementation block
@property (assign,nonatomic) BOOL isEarlyDetect;                         //@synthesize isEarlyDetect=_isEarlyDetect - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)init;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(NSDictionary *)dictionary;
-(unsigned long long)bestEnd;
-(BOOL)isEarlyDetect;
-(unsigned long long)bestStart;
-(void)setSamplesFed:(unsigned long long)arg1 ;
-(void)setBestStart:(unsigned long long)arg1 ;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(unsigned long long)samplesFed;
-(id)initWithBlob:(id)arg1 isEarlyDetected:(BOOL)arg2 ;
-(BOOL)isSecondChance;
-(void)setIsSecondChance:(BOOL)arg1 ;
-(void)setIsEarlyDetect:(BOOL)arg1 ;
@end

