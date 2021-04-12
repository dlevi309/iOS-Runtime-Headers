/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason : PBCodable <NSCopying> {

	unsigned _a2dp;
	unsigned _acl;
	unsigned _ble;
	unsigned _blescan;
	unsigned _esco;
	unsigned _inquiry;
	unsigned _inquiryscan;
	unsigned _mss;
	unsigned _other;
	unsigned _page;
	unsigned _pagescan;
	unsigned _park;
	unsigned _sco;
	unsigned _sniff;
	SCD_Struct_Wi15 _has;

}

@property (assign,nonatomic) BOOL hasAcl; 
@property (assign,nonatomic) unsigned acl;                      //@synthesize acl=_acl - In the implementation block
@property (assign,nonatomic) BOOL hasSco; 
@property (assign,nonatomic) unsigned sco;                      //@synthesize sco=_sco - In the implementation block
@property (assign,nonatomic) BOOL hasEsco; 
@property (assign,nonatomic) unsigned esco;                     //@synthesize esco=_esco - In the implementation block
@property (assign,nonatomic) BOOL hasA2dp; 
@property (assign,nonatomic) unsigned a2dp;                     //@synthesize a2dp=_a2dp - In the implementation block
@property (assign,nonatomic) BOOL hasSniff; 
@property (assign,nonatomic) unsigned sniff;                    //@synthesize sniff=_sniff - In the implementation block
@property (assign,nonatomic) BOOL hasPagescan; 
@property (assign,nonatomic) unsigned pagescan;                 //@synthesize pagescan=_pagescan - In the implementation block
@property (assign,nonatomic) BOOL hasInquiryscan; 
@property (assign,nonatomic) unsigned inquiryscan;              //@synthesize inquiryscan=_inquiryscan - In the implementation block
@property (assign,nonatomic) BOOL hasPage; 
@property (assign,nonatomic) unsigned page;                     //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) BOOL hasInquiry; 
@property (assign,nonatomic) unsigned inquiry;                  //@synthesize inquiry=_inquiry - In the implementation block
@property (assign,nonatomic) BOOL hasMss; 
@property (assign,nonatomic) unsigned mss;                      //@synthesize mss=_mss - In the implementation block
@property (assign,nonatomic) BOOL hasPark; 
@property (assign,nonatomic) unsigned park;                     //@synthesize park=_park - In the implementation block
@property (assign,nonatomic) BOOL hasBle; 
@property (assign,nonatomic) unsigned ble;                      //@synthesize ble=_ble - In the implementation block
@property (assign,nonatomic) BOOL hasBlescan; 
@property (assign,nonatomic) unsigned blescan;                  //@synthesize blescan=_blescan - In the implementation block
@property (assign,nonatomic) BOOL hasOther; 
@property (assign,nonatomic) unsigned other;                    //@synthesize other=_other - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPage:(unsigned)arg1 ;
-(unsigned)sco;
-(unsigned)mss;
-(unsigned)ble;
-(unsigned)page;
-(unsigned)esco;
-(unsigned)a2dp;
-(unsigned)acl;
-(unsigned)sniff;
-(void)mergeFrom:(id)arg1 ;
-(void)setOther:(unsigned)arg1 ;
-(void)setAcl:(unsigned)arg1 ;
-(BOOL)hasAcl;
-(BOOL)hasSco;
-(BOOL)hasMss;
-(BOOL)hasBle;
-(id)description;
-(unsigned)other;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSco:(unsigned)arg1 ;
-(BOOL)hasEsco;
-(BOOL)hasA2dp;
-(BOOL)hasPage;
-(void)setMss:(unsigned)arg1 ;
-(BOOL)hasPark;
-(void)setBle:(unsigned)arg1 ;
-(unsigned)inquiry;
-(unsigned)blescan;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)park;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOther;
-(void)setHasOther:(BOOL)arg1 ;
-(void)setHasAcl:(BOOL)arg1 ;
-(void)setHasSco:(BOOL)arg1 ;
-(void)setEsco:(unsigned)arg1 ;
-(void)setHasEsco:(BOOL)arg1 ;
-(void)setA2dp:(unsigned)arg1 ;
-(void)setHasA2dp:(BOOL)arg1 ;
-(void)setSniff:(unsigned)arg1 ;
-(void)setHasSniff:(BOOL)arg1 ;
-(BOOL)hasSniff;
-(void)setPagescan:(unsigned)arg1 ;
-(void)setHasPagescan:(BOOL)arg1 ;
-(BOOL)hasPagescan;
-(void)setInquiryscan:(unsigned)arg1 ;
-(void)setHasInquiryscan:(BOOL)arg1 ;
-(BOOL)hasInquiryscan;
-(void)setHasPage:(BOOL)arg1 ;
-(void)setInquiry:(unsigned)arg1 ;
-(void)setHasInquiry:(BOOL)arg1 ;
-(BOOL)hasInquiry;
-(void)setHasMss:(BOOL)arg1 ;
-(void)setPark:(unsigned)arg1 ;
-(void)setHasPark:(BOOL)arg1 ;
-(void)setHasBle:(BOOL)arg1 ;
-(void)setBlescan:(unsigned)arg1 ;
-(void)setHasBlescan:(BOOL)arg1 ;
-(BOOL)hasBlescan;
-(unsigned)pagescan;
-(unsigned)inquiryscan;
@end

