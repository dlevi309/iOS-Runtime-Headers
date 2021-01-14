/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {

	unsigned long long _durationFromVoiceRecordingEnd;
	unsigned long long _durationFromVoiceSendEnd;
	unsigned long long _timestamp;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationFromVoiceRecordingEnd; 
@property (assign,nonatomic) unsigned long long durationFromVoiceRecordingEnd;              //@synthesize durationFromVoiceRecordingEnd=_durationFromVoiceRecordingEnd - In the implementation block
@property (assign,nonatomic) BOOL hasDurationFromVoiceSendEnd; 
@property (assign,nonatomic) unsigned long long durationFromVoiceSendEnd;                   //@synthesize durationFromVoiceSendEnd=_durationFromVoiceSendEnd - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceRecordingEnd:(BOOL)arg1 ;
-(BOOL)hasDurationFromVoiceRecordingEnd;
-(void)setDurationFromVoiceSendEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceSendEnd:(BOOL)arg1 ;
-(BOOL)hasDurationFromVoiceSendEnd;
-(unsigned long long)durationFromVoiceRecordingEnd;
-(unsigned long long)durationFromVoiceSendEnd;
@end

