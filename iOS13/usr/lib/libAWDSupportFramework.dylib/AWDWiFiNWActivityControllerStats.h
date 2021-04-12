/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiNWActivityAggregateMetrics, AWDWiFiNWActivityBtCoex, AWDWiFiNWActivityImpedingFunctions, AWDWiFiNWActivityRateAndAggregation, AWDWiFiNWActivityPowerStats, AWDWiFiNWActivityScanActivity;

@interface AWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {

	AWDWiFiNWActivityAggregateMetrics* _aggregateMetrics;
	unsigned _backoffStuck;
	AWDWiFiNWActivityBtCoex* _btCoex;
	unsigned _channelsVisited0;
	unsigned _channelsVisited1;
	unsigned _controllerResets;
	AWDWiFiNWActivityImpedingFunctions* _impedingFunctions;
	AWDWiFiNWActivityRateAndAggregation* _phyrate;
	AWDWiFiNWActivityPowerStats* _powerActivity;
	AWDWiFiNWActivityScanActivity* _scanActivity;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasControllerResets; 
@property (assign,nonatomic) unsigned controllerResets;                                           //@synthesize controllerResets=_controllerResets - In the implementation block
@property (assign,nonatomic) BOOL hasBackoffStuck; 
@property (assign,nonatomic) unsigned backoffStuck;                                               //@synthesize backoffStuck=_backoffStuck - In the implementation block
@property (nonatomic,readonly) BOOL hasScanActivity; 
@property (nonatomic,retain) AWDWiFiNWActivityScanActivity * scanActivity;                        //@synthesize scanActivity=_scanActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasPowerActivity; 
@property (nonatomic,retain) AWDWiFiNWActivityPowerStats * powerActivity;                         //@synthesize powerActivity=_powerActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasImpedingFunctions; 
@property (nonatomic,retain) AWDWiFiNWActivityImpedingFunctions * impedingFunctions;              //@synthesize impedingFunctions=_impedingFunctions - In the implementation block
@property (nonatomic,readonly) BOOL hasAggregateMetrics; 
@property (nonatomic,retain) AWDWiFiNWActivityAggregateMetrics * aggregateMetrics;                //@synthesize aggregateMetrics=_aggregateMetrics - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoex; 
@property (nonatomic,retain) AWDWiFiNWActivityBtCoex * btCoex;                                    //@synthesize btCoex=_btCoex - In the implementation block
@property (assign,nonatomic) BOOL hasChannelsVisited0; 
@property (assign,nonatomic) unsigned channelsVisited0;                                           //@synthesize channelsVisited0=_channelsVisited0 - In the implementation block
@property (assign,nonatomic) BOOL hasChannelsVisited1; 
@property (assign,nonatomic) unsigned channelsVisited1;                                           //@synthesize channelsVisited1=_channelsVisited1 - In the implementation block
@property (nonatomic,readonly) BOOL hasPhyrate; 
@property (nonatomic,retain) AWDWiFiNWActivityRateAndAggregation * phyrate;                       //@synthesize phyrate=_phyrate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScanActivity:(AWDWiFiNWActivityScanActivity *)arg1 ;
-(void)setPowerActivity:(AWDWiFiNWActivityPowerStats *)arg1 ;
-(void)setImpedingFunctions:(AWDWiFiNWActivityImpedingFunctions *)arg1 ;
-(void)setAggregateMetrics:(AWDWiFiNWActivityAggregateMetrics *)arg1 ;
-(void)setBtCoex:(AWDWiFiNWActivityBtCoex *)arg1 ;
-(void)setPhyrate:(AWDWiFiNWActivityRateAndAggregation *)arg1 ;
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
-(AWDWiFiNWActivityScanActivity *)scanActivity;
-(AWDWiFiNWActivityPowerStats *)powerActivity;
-(AWDWiFiNWActivityImpedingFunctions *)impedingFunctions;
-(AWDWiFiNWActivityAggregateMetrics *)aggregateMetrics;
-(AWDWiFiNWActivityBtCoex *)btCoex;
-(unsigned)channelsVisited0;
-(unsigned)channelsVisited1;
-(AWDWiFiNWActivityRateAndAggregation *)phyrate;
@end

