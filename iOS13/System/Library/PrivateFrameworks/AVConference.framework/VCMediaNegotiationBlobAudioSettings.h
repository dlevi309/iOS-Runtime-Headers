/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_VC45 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)allowAudioRecording;
-(void)setAudioUnitModel:(unsigned)arg1 ;
-(void)setHasAudioUnitModel:(BOOL)arg1 ;
-(BOOL)hasAudioUnitModel;
-(unsigned)rtpSSRC;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(unsigned)audioUnitModel;
-(unsigned)supportFlags;
-(void)setSupportFlags:(unsigned)arg1 ;
-(unsigned)payloadFlags;
-(void)setPayloadFlags:(unsigned)arg1 ;
-(unsigned)secondaryFlags;
-(void)setSecondaryFlags:(unsigned)arg1 ;
-(BOOL)useSBR;
-(void)setUseSBR:(BOOL)arg1 ;
-(BOOL)allowAudioSwitching;
-(id)newMediaNegotiatorAudioConfiguration;
-(id)initWithAudioConfiguration:(id)arg1 ;
-(void)printWithLogFile:(void*)arg1 ;
@end

