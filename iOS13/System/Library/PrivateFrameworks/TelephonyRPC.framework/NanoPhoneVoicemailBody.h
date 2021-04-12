/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(void)setVoicemailRecording:(NSData *)arg1 ;
-(BOOL)hasVoicemailRecording;
-(NSData *)voicemailRecording;
@end

