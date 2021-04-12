/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSDictionary;

@interface CSNovDetectorResult : NSObject {

	BOOL _earlyWarning;
	BOOL _isRescoring;
	float _bestScore;
	unsigned long long _sampleFed;
	unsigned long long _bestPhrase;
	unsigned long long _bestStart;
	unsigned long long _bestEnd;

}

@property (assign,nonatomic) unsigned long long sampleFed;               //@synthesize sampleFed=_sampleFed - In the implementation block
@property (assign,nonatomic) unsigned long long bestPhrase;              //@synthesize bestPhrase=_bestPhrase - In the implementation block
@property (assign,nonatomic) unsigned long long bestStart;               //@synthesize bestStart=_bestStart - In the implementation block
@property (assign,nonatomic) unsigned long long bestEnd;                 //@synthesize bestEnd=_bestEnd - In the implementation block
@property (assign,nonatomic) float bestScore;                            //@synthesize bestScore=_bestScore - In the implementation block
@property (assign,nonatomic) BOOL earlyWarning;                          //@synthesize earlyWarning=_earlyWarning - In the implementation block
@property (assign,nonatomic) BOOL isRescoring;                           //@synthesize isRescoring=_isRescoring - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(id)initWithResult:(id)arg1 ;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(NSDictionary *)dictionary;
-(unsigned long long)bestEnd;
-(unsigned long long)bestStart;
-(void)setBestPhrase:(unsigned long long)arg1 ;
-(void)setBestStart:(unsigned long long)arg1 ;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(void)setIsRescoring:(BOOL)arg1 ;
-(unsigned long long)bestPhrase;
-(BOOL)isRescoring;
-(unsigned long long)sampleFed;
-(BOOL)earlyWarning;
-(void)setSampleFed:(unsigned long long)arg1 ;
-(void)setEarlyWarning:(BOOL)arg1 ;
@end

