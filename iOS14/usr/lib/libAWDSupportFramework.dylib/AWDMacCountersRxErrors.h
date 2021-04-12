/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMacCountersRxErrors : PBCodable <NSCopying> {

	unsigned long long _rxbadfcs;
	unsigned long long _rxbadplcp;
	unsigned long long _rxcrsglitch;
	unsigned long long _rxfrmtoolong;
	unsigned long long _rxfrmtooshrt;
	unsigned long long _rxinvmachdr;
	unsigned long long _rxstrt;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasRxfrmtoolong; 
@property (assign,nonatomic) unsigned long long rxfrmtoolong;              //@synthesize rxfrmtoolong=_rxfrmtoolong - In the implementation block
@property (assign,nonatomic) BOOL hasRxfrmtooshrt; 
@property (assign,nonatomic) unsigned long long rxfrmtooshrt;              //@synthesize rxfrmtooshrt=_rxfrmtooshrt - In the implementation block
@property (assign,nonatomic) BOOL hasRxinvmachdr; 
@property (assign,nonatomic) unsigned long long rxinvmachdr;               //@synthesize rxinvmachdr=_rxinvmachdr - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadfcs; 
@property (assign,nonatomic) unsigned long long rxbadfcs;                  //@synthesize rxbadfcs=_rxbadfcs - In the implementation block
@property (assign,nonatomic) BOOL hasRxbadplcp; 
@property (assign,nonatomic) unsigned long long rxbadplcp;                 //@synthesize rxbadplcp=_rxbadplcp - In the implementation block
@property (assign,nonatomic) BOOL hasRxcrsglitch; 
@property (assign,nonatomic) unsigned long long rxcrsglitch;               //@synthesize rxcrsglitch=_rxcrsglitch - In the implementation block
@property (assign,nonatomic) BOOL hasRxstrt; 
@property (assign,nonatomic) unsigned long long rxstrt;                    //@synthesize rxstrt=_rxstrt - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)rxstrt;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRxfrmtoolong:(unsigned long long)arg1 ;
-(void)setHasRxfrmtoolong:(BOOL)arg1 ;
-(BOOL)hasRxfrmtoolong;
-(void)setRxfrmtooshrt:(unsigned long long)arg1 ;
-(void)setHasRxfrmtooshrt:(BOOL)arg1 ;
-(BOOL)hasRxfrmtooshrt;
-(void)setRxinvmachdr:(unsigned long long)arg1 ;
-(void)setHasRxinvmachdr:(BOOL)arg1 ;
-(BOOL)hasRxinvmachdr;
-(void)setRxbadfcs:(unsigned long long)arg1 ;
-(void)setHasRxbadfcs:(BOOL)arg1 ;
-(BOOL)hasRxbadfcs;
-(void)setRxbadplcp:(unsigned long long)arg1 ;
-(void)setHasRxbadplcp:(BOOL)arg1 ;
-(BOOL)hasRxbadplcp;
-(void)setRxcrsglitch:(unsigned long long)arg1 ;
-(void)setHasRxcrsglitch:(BOOL)arg1 ;
-(BOOL)hasRxcrsglitch;
-(void)setRxstrt:(unsigned long long)arg1 ;
-(void)setHasRxstrt:(BOOL)arg1 ;
-(BOOL)hasRxstrt;
-(unsigned long long)rxfrmtoolong;
-(unsigned long long)rxfrmtooshrt;
-(unsigned long long)rxinvmachdr;
-(unsigned long long)rxbadfcs;
-(unsigned long long)rxbadplcp;
-(unsigned long long)rxcrsglitch;
@end

