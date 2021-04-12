/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceRecordingEnd:(BOOL)arg1 ;
-(BOOL)hasDurationFromVoiceRecordingEnd;
-(void)setDurationFromVoiceSendEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceSendEnd:(BOOL)arg1 ;
-(BOOL)hasDurationFromVoiceSendEnd;
-(unsigned long long)durationFromVoiceRecordingEnd;
-(unsigned long long)durationFromVoiceSendEnd;
@end

