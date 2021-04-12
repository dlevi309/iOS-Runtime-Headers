/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)dictionary;
-(void)setBestScore:(float)arg1 ;
-(float)bestScore;
-(id)initWithResult:(id)arg1 ;
-(unsigned long long)sampleFed;
-(unsigned long long)bestStart;
-(void)setBestStart:(unsigned long long)arg1 ;
-(unsigned long long)bestEnd;
-(void)setBestEnd:(unsigned long long)arg1 ;
-(unsigned long long)bestPhrase;
-(BOOL)earlyWarning;
-(void)setSampleFed:(unsigned long long)arg1 ;
-(void)setBestPhrase:(unsigned long long)arg1 ;
-(void)setEarlyWarning:(BOOL)arg1 ;
-(BOOL)isRescoring;
-(void)setIsRescoring:(BOOL)arg1 ;
@end

