/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)transcriptionString;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(void)setTranscriptionString:(NSString *)arg1 ;
-(BOOL)hasTranscriptionString;
@end

