/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NanoPhoneVoicemailTranscript : PBCodable <NSCopying> {

	long long _voicemailNumber;
	NSString* _transcriptionString;

}

@property (assign,nonatomic) long long voicemailNumber;                   //@synthesize voicemailNumber=_voicemailNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasTranscriptionString; 
@property (nonatomic,retain) NSString * transcriptionString;              //@synthesize transcriptionString=_transcriptionString - In the implementation block
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
-(NSString *)transcriptionString;
-(void)setTranscriptionString:(NSString *)arg1 ;
-(id)initWithTranscriptMessage:(id)arg1 voicemailNumber:(unsigned long long)arg2 ;
-(BOOL)hasTranscriptionString;
@end

