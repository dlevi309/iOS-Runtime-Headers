/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {

	unsigned _senderLanguages;
	BOOL _canDisplayCaptions;
	SCD_Struct_VC30 _has;

}

@property (assign,nonatomic) BOOL hasCanDisplayCaptions; 
@property (assign,nonatomic) BOOL canDisplayCaptions;                 //@synthesize canDisplayCaptions=_canDisplayCaptions - In the implementation block
@property (assign,nonatomic) BOOL hasSenderLanguages; 
@property (assign,nonatomic) unsigned senderLanguages;                //@synthesize senderLanguages=_senderLanguages - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCanDisplayCaptions:(BOOL)arg1 ;
-(void)setHasCanDisplayCaptions:(BOOL)arg1 ;
-(BOOL)hasCanDisplayCaptions;
-(void)setSenderLanguages:(unsigned)arg1 ;
-(void)setHasSenderLanguages:(BOOL)arg1 ;
-(BOOL)hasSenderLanguages;
-(BOOL)canDisplayCaptions;
-(unsigned)senderLanguages;
@end

