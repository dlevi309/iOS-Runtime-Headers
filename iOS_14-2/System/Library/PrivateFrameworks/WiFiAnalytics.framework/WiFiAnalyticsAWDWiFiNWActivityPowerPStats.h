/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityPowerPStats : PBCodable <NSCopying> {

	unsigned long long _kRadioPhyReportRxDur;
	unsigned long long _kRadioPhyReportTxDur;
	SCD_Struct_Wi7 _has;

}

@property (assign,nonatomic) BOOL hasKRadioPhyReportTxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportTxDur;              //@synthesize kRadioPhyReportTxDur=_kRadioPhyReportTxDur - In the implementation block
@property (assign,nonatomic) BOOL hasKRadioPhyReportRxDur; 
@property (assign,nonatomic) unsigned long long kRadioPhyReportRxDur;              //@synthesize kRadioPhyReportRxDur=_kRadioPhyReportRxDur - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setKRadioPhyReportTxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportTxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportTxDur;
-(void)setKRadioPhyReportRxDur:(unsigned long long)arg1 ;
-(void)setHasKRadioPhyReportRxDur:(BOOL)arg1 ;
-(BOOL)hasKRadioPhyReportRxDur;
-(unsigned long long)kRadioPhyReportTxDur;
-(unsigned long long)kRadioPhyReportRxDur;
@end

