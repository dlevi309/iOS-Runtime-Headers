/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCMediaStreamConfig.h>

@interface VCTextStreamConfig : VCMediaStreamConfig {

	unsigned char _numRedundantPayloads;
	BOOL _redEnabled;
	float _txIntervalMin;

}

@property (getter=isRedEnabled,nonatomic,readonly) BOOL redEnabled;              //@synthesize redEnabled=_redEnabled - In the implementation block
@property (assign,nonatomic) unsigned char numRedundantPayloads;                 //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) float txIntervalMin;                                //@synthesize txIntervalMin=_txIntervalMin - In the implementation block
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(float)txIntervalMin;
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(BOOL)setupCodecWithClientDictionary:(id)arg1 ;
-(void)setTxIntervalMin:(float)arg1 ;
@end

