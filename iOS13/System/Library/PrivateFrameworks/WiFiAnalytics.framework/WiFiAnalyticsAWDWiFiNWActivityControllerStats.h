/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics, WiFiAnalyticsAWDWiFiNWActivityBtCoex, WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions, WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation, WiFiAnalyticsAWDWiFiNWActivityPowerStats, WiFiAnalyticsAWDWiFiNWActivityScanActivity;

@interface WiFiAnalyticsAWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {

	WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics* _aggregateMetrics;
	unsigned _backoffStuck;
	WiFiAnalyticsAWDWiFiNWActivityBtCoex* _btCoex;
	unsigned _channelsVisited0;
	unsigned _channelsVisited1;
	unsigned _controllerResets;
	WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions* _impedingFunctions;
	WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation* _phyrate;
	WiFiAnalyticsAWDWiFiNWActivityPowerStats* _powerActivity;
	WiFiAnalyticsAWDWiFiNWActivityScanActivity* _scanActivity;
	SCD_Struct_Wi7 _has;

}

@property (assign,nonatomic) BOOL hasControllerResets; 
@property (assign,nonatomic) unsigned controllerResets;                                                        //@synthesize controllerResets=_controllerResets - In the implementation block
@property (assign,nonatomic) BOOL hasBackoffStuck; 
@property (assign,nonatomic) unsigned backoffStuck;                                                            //@synthesize backoffStuck=_backoffStuck - In the implementation block
@property (nonatomic,readonly) BOOL hasScanActivity; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityScanActivity * scanActivity;                        //@synthesize scanActivity=_scanActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasPowerActivity; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityPowerStats * powerActivity;                         //@synthesize powerActivity=_powerActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasImpedingFunctions; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions * impedingFunctions;              //@synthesize impedingFunctions=_impedingFunctions - In the implementation block
@property (nonatomic,readonly) BOOL hasAggregateMetrics; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics * aggregateMetrics;                //@synthesize aggregateMetrics=_aggregateMetrics - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoex; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityBtCoex * btCoex;                                    //@synthesize btCoex=_btCoex - In the implementation block
@property (assign,nonatomic) BOOL hasChannelsVisited0; 
@property (assign,nonatomic) unsigned channelsVisited0;                                                        //@synthesize channelsVisited0=_channelsVisited0 - In the implementation block
@property (assign,nonatomic) BOOL hasChannelsVisited1; 
@property (assign,nonatomic) unsigned channelsVisited1;                                                        //@synthesize channelsVisited1=_channelsVisited1 - In the implementation block
@property (nonatomic,readonly) BOOL hasPhyrate; 
@property (nonatomic,retain) WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation * phyrate;                       //@synthesize phyrate=_phyrate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScanActivity:(WiFiAnalyticsAWDWiFiNWActivityScanActivity *)arg1 ;
-(void)setPowerActivity:(WiFiAnalyticsAWDWiFiNWActivityPowerStats *)arg1 ;
-(void)setImpedingFunctions:(WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *)arg1 ;
-(void)setAggregateMetrics:(WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *)arg1 ;
-(void)setBtCoex:(WiFiAnalyticsAWDWiFiNWActivityBtCoex *)arg1 ;
-(void)setPhyrate:(WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *)arg1 ;
-(void)setControllerResets:(unsigned)arg1 ;
-(void)setHasControllerResets:(BOOL)arg1 ;
-(BOOL)hasControllerResets;
-(void)setBackoffStuck:(unsigned)arg1 ;
-(void)setHasBackoffStuck:(BOOL)arg1 ;
-(BOOL)hasBackoffStuck;
-(BOOL)hasScanActivity;
-(BOOL)hasPowerActivity;
-(BOOL)hasImpedingFunctions;
-(BOOL)hasAggregateMetrics;
-(BOOL)hasBtCoex;
-(void)setChannelsVisited0:(unsigned)arg1 ;
-(void)setHasChannelsVisited0:(BOOL)arg1 ;
-(BOOL)hasChannelsVisited0;
-(void)setChannelsVisited1:(unsigned)arg1 ;
-(void)setHasChannelsVisited1:(BOOL)arg1 ;
-(BOOL)hasChannelsVisited1;
-(BOOL)hasPhyrate;
-(unsigned)controllerResets;
-(unsigned)backoffStuck;
-(WiFiAnalyticsAWDWiFiNWActivityScanActivity *)scanActivity;
-(WiFiAnalyticsAWDWiFiNWActivityPowerStats *)powerActivity;
-(WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *)impedingFunctions;
-(WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *)aggregateMetrics;
-(WiFiAnalyticsAWDWiFiNWActivityBtCoex *)btCoex;
-(unsigned)channelsVisited0;
-(unsigned)channelsVisited1;
-(WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *)phyrate;
@end

