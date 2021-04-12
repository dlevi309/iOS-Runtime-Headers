/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiNWActivityBtCoexReqestReason;

@interface AWDWiFiNWActivityBtCoex : PBCodable <NSCopying> {

	unsigned _a2dpdeny;
	unsigned _a2dpgrant;
	unsigned _aptxafterpm;
	unsigned _audiodeny;
	unsigned _audiogrant;
	unsigned _btabort;
	AWDWiFiNWActivityBtCoexReqestReason* _btrequestReason;
	unsigned _cts;
	unsigned _duration;
	unsigned _grant;
	unsigned _pm;
	unsigned _psnullretrycount;
	unsigned _request;
	unsigned _sniffdeny;
	unsigned _sniffgrant;
	unsigned _ucodehighlatency;
	unsigned _wlanrxpreempt;
	unsigned _wlantxpreempt;
	SCD_Struct_AW30 _has;

}

@property (assign,nonatomic) BOOL hasRequest; 
@property (assign,nonatomic) unsigned request;                                                   //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL hasGrant; 
@property (assign,nonatomic) unsigned grant;                                                     //@synthesize grant=_grant - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasBtabort; 
@property (assign,nonatomic) unsigned btabort;                                                   //@synthesize btabort=_btabort - In the implementation block
@property (assign,nonatomic) BOOL hasPsnullretrycount; 
@property (assign,nonatomic) unsigned psnullretrycount;                                          //@synthesize psnullretrycount=_psnullretrycount - In the implementation block
@property (assign,nonatomic) BOOL hasUcodehighlatency; 
@property (assign,nonatomic) unsigned ucodehighlatency;                                          //@synthesize ucodehighlatency=_ucodehighlatency - In the implementation block
@property (assign,nonatomic) BOOL hasCts; 
@property (assign,nonatomic) unsigned cts;                                                       //@synthesize cts=_cts - In the implementation block
@property (assign,nonatomic) BOOL hasPm; 
@property (assign,nonatomic) unsigned pm;                                                        //@synthesize pm=_pm - In the implementation block
@property (assign,nonatomic) BOOL hasWlantxpreempt; 
@property (assign,nonatomic) unsigned wlantxpreempt;                                             //@synthesize wlantxpreempt=_wlantxpreempt - In the implementation block
@property (assign,nonatomic) BOOL hasWlanrxpreempt; 
@property (assign,nonatomic) unsigned wlanrxpreempt;                                             //@synthesize wlanrxpreempt=_wlanrxpreempt - In the implementation block
@property (assign,nonatomic) BOOL hasAptxafterpm; 
@property (assign,nonatomic) unsigned aptxafterpm;                                               //@synthesize aptxafterpm=_aptxafterpm - In the implementation block
@property (assign,nonatomic) BOOL hasAudiogrant; 
@property (assign,nonatomic) unsigned audiogrant;                                                //@synthesize audiogrant=_audiogrant - In the implementation block
@property (assign,nonatomic) BOOL hasAudiodeny; 
@property (assign,nonatomic) unsigned audiodeny;                                                 //@synthesize audiodeny=_audiodeny - In the implementation block
@property (assign,nonatomic) BOOL hasA2dpgrant; 
@property (assign,nonatomic) unsigned a2dpgrant;                                                 //@synthesize a2dpgrant=_a2dpgrant - In the implementation block
@property (assign,nonatomic) BOOL hasA2dpdeny; 
@property (assign,nonatomic) unsigned a2dpdeny;                                                  //@synthesize a2dpdeny=_a2dpdeny - In the implementation block
@property (assign,nonatomic) BOOL hasSniffgrant; 
@property (assign,nonatomic) unsigned sniffgrant;                                                //@synthesize sniffgrant=_sniffgrant - In the implementation block
@property (assign,nonatomic) BOOL hasSniffdeny; 
@property (assign,nonatomic) unsigned sniffdeny;                                                 //@synthesize sniffdeny=_sniffdeny - In the implementation block
@property (nonatomic,readonly) BOOL hasBtrequestReason; 
@property (nonatomic,retain) AWDWiFiNWActivityBtCoexReqestReason * btrequestReason;              //@synthesize btrequestReason=_btrequestReason - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(unsigned)arg1 ;
-(unsigned)request;
-(unsigned)grant;
-(void)setDuration:(unsigned)arg1 ;
-(BOOL)hasDuration;
-(BOOL)hasRequest;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setBtrequestReason:(AWDWiFiNWActivityBtCoexReqestReason *)arg1 ;
-(void)setHasRequest:(BOOL)arg1 ;
-(void)setGrant:(unsigned)arg1 ;
-(void)setHasGrant:(BOOL)arg1 ;
-(BOOL)hasGrant;
-(void)setBtabort:(unsigned)arg1 ;
-(void)setHasBtabort:(BOOL)arg1 ;
-(BOOL)hasBtabort;
-(void)setPsnullretrycount:(unsigned)arg1 ;
-(void)setHasPsnullretrycount:(BOOL)arg1 ;
-(BOOL)hasPsnullretrycount;
-(void)setUcodehighlatency:(unsigned)arg1 ;
-(void)setHasUcodehighlatency:(BOOL)arg1 ;
-(BOOL)hasUcodehighlatency;
-(void)setCts:(unsigned)arg1 ;
-(void)setHasCts:(BOOL)arg1 ;
-(BOOL)hasCts;
-(void)setPm:(unsigned)arg1 ;
-(void)setHasPm:(BOOL)arg1 ;
-(BOOL)hasPm;
-(void)setWlantxpreempt:(unsigned)arg1 ;
-(void)setHasWlantxpreempt:(BOOL)arg1 ;
-(BOOL)hasWlantxpreempt;
-(void)setWlanrxpreempt:(unsigned)arg1 ;
-(void)setHasWlanrxpreempt:(BOOL)arg1 ;
-(BOOL)hasWlanrxpreempt;
-(void)setAptxafterpm:(unsigned)arg1 ;
-(void)setHasAptxafterpm:(BOOL)arg1 ;
-(BOOL)hasAptxafterpm;
-(void)setAudiogrant:(unsigned)arg1 ;
-(void)setHasAudiogrant:(BOOL)arg1 ;
-(BOOL)hasAudiogrant;
-(void)setAudiodeny:(unsigned)arg1 ;
-(void)setHasAudiodeny:(BOOL)arg1 ;
-(BOOL)hasAudiodeny;
-(void)setA2dpgrant:(unsigned)arg1 ;
-(void)setHasA2dpgrant:(BOOL)arg1 ;
-(BOOL)hasA2dpgrant;
-(void)setA2dpdeny:(unsigned)arg1 ;
-(void)setHasA2dpdeny:(BOOL)arg1 ;
-(BOOL)hasA2dpdeny;
-(void)setSniffgrant:(unsigned)arg1 ;
-(void)setHasSniffgrant:(BOOL)arg1 ;
-(BOOL)hasSniffgrant;
-(void)setSniffdeny:(unsigned)arg1 ;
-(void)setHasSniffdeny:(BOOL)arg1 ;
-(BOOL)hasSniffdeny;
-(BOOL)hasBtrequestReason;
-(unsigned)btabort;
-(unsigned)psnullretrycount;
-(unsigned)ucodehighlatency;
-(unsigned)cts;
-(unsigned)pm;
-(unsigned)wlantxpreempt;
-(unsigned)wlanrxpreempt;
-(unsigned)aptxafterpm;
-(unsigned)audiogrant;
-(unsigned)audiodeny;
-(unsigned)a2dpgrant;
-(unsigned)a2dpdeny;
-(unsigned)sniffgrant;
-(unsigned)sniffdeny;
-(AWDWiFiNWActivityBtCoexReqestReason *)btrequestReason;
@end

