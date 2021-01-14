/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNumRedundantPayloads:(unsigned char)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)isRedEnabled;
-(unsigned char)numRedundantPayloads;
-(float)txIntervalMin;
-(BOOL)setupCodecWithClientDictionary:(id)arg1 ;
-(void)setTxIntervalMin:(float)arg1 ;
@end

