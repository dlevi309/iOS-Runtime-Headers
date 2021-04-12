/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying> {

	unsigned _capabilities;
	unsigned _switches;
	SCD_Struct_VC30 _has;

}

@property (assign,nonatomic) BOOL hasCapabilities; 
@property (assign,nonatomic) unsigned capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSwitches; 
@property (assign,nonatomic) unsigned switches;                  //@synthesize switches=_switches - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)capabilities;
-(void)setCapabilities:(unsigned)arg1 ;
-(BOOL)hasCapabilities;
-(BOOL)SIPDisabled;
-(BOOL)secureMessagingRequired;
-(unsigned)switches;
-(void)setSwitches:(unsigned)arg1 ;
-(BOOL)hasSwitches;
-(void)setHasCapabilities:(BOOL)arg1 ;
-(void)setHasSwitches:(BOOL)arg1 ;
@end

