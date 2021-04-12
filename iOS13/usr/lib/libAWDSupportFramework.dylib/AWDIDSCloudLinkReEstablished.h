/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDIDSCloudLinkReEstablished : PBCodable <NSCopying> {

	unsigned long long _linkTimeDelta;
	unsigned long long _timestamp;
	unsigned _linkType;
	unsigned _priorLinkType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                             //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasPriorLinkType; 
@property (assign,nonatomic) unsigned priorLinkType;                        //@synthesize priorLinkType=_priorLinkType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkTimeDelta; 
@property (assign,nonatomic) unsigned long long linkTimeDelta;              //@synthesize linkTimeDelta=_linkTimeDelta - In the implementation block
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
-(unsigned)linkType;
-(unsigned)priorLinkType;
-(void)setLinkTimeDelta:(unsigned long long)arg1 ;
-(void)setLinkType:(unsigned)arg1 ;
-(void)setPriorLinkType:(unsigned)arg1 ;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)setHasPriorLinkType:(BOOL)arg1 ;
-(BOOL)hasPriorLinkType;
-(void)setHasLinkTimeDelta:(BOOL)arg1 ;
-(BOOL)hasLinkTimeDelta;
-(unsigned long long)linkTimeDelta;
@end

