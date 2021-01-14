/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying> {

	unsigned _audioUnitModel;
	unsigned _payloadFlags;
	unsigned _rtpSSRC;
	unsigned _secondaryFlags;
	unsigned _supportFlags;
	BOOL _useSBR;
	SCD_Struct_VC55 _has;

}

@property (nonatomic,readonly) BOOL allowAudioRecording; 
@property (nonatomic,readonly) BOOL allowAudioSwitching; 
@property (assign,nonatomic) unsigned rtpSSRC;                        //@synthesize rtpSSRC=_rtpSSRC - In the implementation block
@property (assign,nonatomic) BOOL hasAudioUnitModel; 
@property (assign,nonatomic) unsigned audioUnitModel;                 //@synthesize audioUnitModel=_audioUnitModel - In the implementation block
@property (assign,nonatomic) unsigned supportFlags;                   //@synthesize supportFlags=_supportFlags - In the implementation block
@property (assign,nonatomic) unsigned payloadFlags;                   //@synthesize payloadFlags=_payloadFlags - In the implementation block
@property (assign,nonatomic) unsigned secondaryFlags;                 //@synthesize secondaryFlags=_secondaryFlags - In the implementation block
@property (assign,nonatomic) BOOL useSBR;                             //@synthesize useSBR=_useSBR - In the implementation block
+(BOOL)isAudioPayloadSupported:(int)arg1 ;
+(int)negotiationPayloadFromPayload:(int)arg1 ;
+(int)payloadFromNegotiationPayload:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)useSBR;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned)rtpSSRC;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)allowAudioRecording;
-(void)setAudioUnitModel:(unsigned)arg1 ;
-(void)setHasAudioUnitModel:(BOOL)arg1 ;
-(BOOL)hasAudioUnitModel;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(unsigned)audioUnitModel;
-(unsigned)supportFlags;
-(void)setSupportFlags:(unsigned)arg1 ;
-(unsigned)payloadFlags;
-(void)setPayloadFlags:(unsigned)arg1 ;
-(unsigned)secondaryFlags;
-(void)setSecondaryFlags:(unsigned)arg1 ;
-(void)setUseSBR:(BOOL)arg1 ;
-(BOOL)allowAudioSwitching;
-(id)newMediaNegotiatorAudioConfiguration;
-(id)initWithAudioConfiguration:(id)arg1 ;
-(void)printWithLogFile:(void*)arg1 ;
@end

