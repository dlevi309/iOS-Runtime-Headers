/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface AVCTextStreamConfig : NSObject {

	long long _codecType;
	unsigned long long _numRedundantPayloads;
	unsigned long long _txRedPayloadType;
	unsigned long long _rxRedPayloadType;
	float _txIntervalMin;

}

@property (assign,nonatomic) long long codecType;                                  //@synthesize codecType=_codecType - In the implementation block
@property (assign,nonatomic) unsigned long long numRedundantPayloads;              //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) unsigned long long txRedPayloadType;                  //@synthesize txRedPayloadType=_txRedPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long rxRedPayloadType;                  //@synthesize rxRedPayloadType=_rxRedPayloadType - In the implementation block
@property (assign,nonatomic) float txIntervalMin;                                  //@synthesize txIntervalMin=_txIntervalMin - In the implementation block
+(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
+(long long)codecTypeWithClientCodecType:(long long)arg1 ;
-(BOOL)isValid;
-(id)dictionary;
-(long long)codecType;
-(void)setCodecType:(long long)arg1 ;
-(void)setNumRedundantPayloads:(unsigned long long)arg1 ;
-(void)setTxRedPayloadType:(unsigned long long)arg1 ;
-(void)setRxRedPayloadType:(unsigned long long)arg1 ;
-(unsigned long long)numRedundantPayloads;
-(float)txIntervalMin;
-(void)setUpWithDictionary:(id)arg1 ;
-(void)setTxIntervalMin:(float)arg1 ;
-(BOOL)isRedValid;
-(unsigned long long)txRedPayloadType;
-(unsigned long long)rxRedPayloadType;
@end

