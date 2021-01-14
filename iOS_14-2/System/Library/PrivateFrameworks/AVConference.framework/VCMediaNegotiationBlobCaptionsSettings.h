/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable <NSCopying> {

	unsigned _senderLanguages;
	BOOL _canDisplayCaptions;
	SCD_Struct_VC93 _has;

}

@property (assign,nonatomic) BOOL hasCanDisplayCaptions; 
@property (assign,nonatomic) BOOL canDisplayCaptions;                 //@synthesize canDisplayCaptions=_canDisplayCaptions - In the implementation block
@property (assign,nonatomic) BOOL hasSenderLanguages; 
@property (assign,nonatomic) unsigned senderLanguages;                //@synthesize senderLanguages=_senderLanguages - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCanDisplayCaptions:(BOOL)arg1 ;
-(void)setHasCanDisplayCaptions:(BOOL)arg1 ;
-(BOOL)hasCanDisplayCaptions;
-(void)setSenderLanguages:(unsigned)arg1 ;
-(void)setHasSenderLanguages:(BOOL)arg1 ;
-(BOOL)hasSenderLanguages;
-(BOOL)canDisplayCaptions;
-(unsigned)senderLanguages;
@end

