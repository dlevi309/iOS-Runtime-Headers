/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@class NSString, NSDictionary;

@interface VTKeywordAnalyzerPhraseScore : NSObject {

	BOOL _isEarlyWarning;
	BOOL _isRescoring;
	BOOL _isSecondChance;
	float _bestScore;
	unsigned long long _phraseId;
	NSString* _phStr;
	unsigned long long _samplesFed;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;
	unsigned long long _samplesAtFire;
	unsigned long long _startSampleCount;

}

@property (assign,nonatomic) unsigned long long phraseId;                      //@synthesize phraseId=_phraseId - In the implementation block
@property (nonatomic,retain) NSString * phStr;                                 //@synthesize phStr=_phStr - In the implementation block
@property (assign,nonatomic) unsigned long long samplesFed;                    //@synthesize samplesFed=_samplesFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;                     //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                       //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                                  //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) BOOL isEarlyWarning;                              //@synthesize isEarlyWarning=_isEarlyWarning - In the implementation block
@property (assign,nonatomic) BOOL isRescoring;                                 //@synthesize isRescoring=_isRescoring - In the implementation block
@property (assign,nonatomic) BOOL isSecondChance;                              //@synthesize isSecondChance=_isSecondChance - In the implementation block
@property (assign,nonatomic) unsigned long long samplesAtFire;                 //@synthesize samplesAtFire=_samplesAtFire - In the implementation block
@property (assign,nonatomic) unsigned long long startSampleCount;              //@synthesize startSampleCount=_startSampleCount - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)init;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(NSString *)phStr;
-(NSDictionary *)dictionary;
-(unsigned long long)bestEnd;
-(unsigned long long)phraseId;
-(unsigned long long)bestStart;
-(unsigned long long)startSampleCount;
-(void)setPhraseId:(unsigned long long)arg1 ;
-(void)setSamplesFed:(unsigned long long)arg1 ;
-(void)setBestStart:(unsigned long long)arg1 ;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(void)setIsEarlyWarning:(BOOL)arg1 ;
-(void)setIsRescoring:(BOOL)arg1 ;
-(unsigned long long)samplesFed;
-(BOOL)isEarlyWarning;
-(BOOL)isRescoring;
-(BOOL)isSecondChance;
-(void)setIsSecondChance:(BOOL)arg1 ;
-(unsigned long long)samplesAtFire;
-(void)setSamplesAtFire:(unsigned long long)arg1 ;
-(void)setStartSampleCount:(unsigned long long)arg1 ;
-(void)setPhStr:(NSString *)arg1 ;
@end

