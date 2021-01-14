/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NanoPhoneVoicemailBody : PBCodable <NSCopying> {

	long long _voicemailNumber;
	NSData* _voicemailRecording;

}

@property (assign,nonatomic) long long voicemailNumber;                 //@synthesize voicemailNumber=_voicemailNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasVoicemailRecording; 
@property (nonatomic,retain) NSData * voicemailRecording;               //@synthesize voicemailRecording=_voicemailRecording - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(void)setVoicemailRecording:(NSData *)arg1 ;
-(id)initWithAudioMessage:(id)arg1 voicemailNumber:(unsigned long long)arg2 ;
-(NSData *)voicemailRecording;
-(BOOL)hasVoicemailRecording;
@end

