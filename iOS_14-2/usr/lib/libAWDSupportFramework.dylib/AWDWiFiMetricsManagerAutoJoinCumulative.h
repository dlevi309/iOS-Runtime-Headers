/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerAutoJoinCumulative : PBCodable <NSCopying> {

	SCD_Struct_AW21* _excludedDueToAJBlacklistCounts;
	SCD_Struct_AW21* _scanTypesCounts;
	unsigned long long _timestamp;
	unsigned _ajScansPerformedWithLocation;
	unsigned _ajScansPerformedWithoutLocation;
	unsigned _bandScanCount24;
	unsigned _bandScanCount5;
	unsigned _ccaBitmap;
	unsigned _didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
	unsigned _rssiBitmap;
	unsigned _userChoseToAssociateToAJBlacklistedCount;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long scanTypesCountsCount; 
@property (nonatomic,readonly) unsigned* scanTypesCounts; 
@property (nonatomic,readonly) unsigned long long excludedDueToAJBlacklistCountsCount; 
@property (nonatomic,readonly) unsigned* excludedDueToAJBlacklistCounts; 
@property (assign,nonatomic) BOOL hasUserChoseToAssociateToAJBlacklistedCount; 
@property (assign,nonatomic) unsigned userChoseToAssociateToAJBlacklistedCount;                          //@synthesize userChoseToAssociateToAJBlacklistedCount=_userChoseToAssociateToAJBlacklistedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAjScansPerformedWithLocation; 
@property (assign,nonatomic) unsigned ajScansPerformedWithLocation;                                      //@synthesize ajScansPerformedWithLocation=_ajScansPerformedWithLocation - In the implementation block
@property (assign,nonatomic) BOOL hasAjScansPerformedWithoutLocation; 
@property (assign,nonatomic) unsigned ajScansPerformedWithoutLocation;                                   //@synthesize ajScansPerformedWithoutLocation=_ajScansPerformedWithoutLocation - In the implementation block
@property (assign,nonatomic) BOOL hasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount; 
@property (assign,nonatomic) unsigned didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;              //@synthesize didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount=_didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount - In the implementation block
@property (assign,nonatomic) BOOL hasRssiBitmap; 
@property (assign,nonatomic) unsigned rssiBitmap;                                                        //@synthesize rssiBitmap=_rssiBitmap - In the implementation block
@property (assign,nonatomic) BOOL hasCcaBitmap; 
@property (assign,nonatomic) unsigned ccaBitmap;                                                         //@synthesize ccaBitmap=_ccaBitmap - In the implementation block
@property (assign,nonatomic) BOOL hasBandScanCount24; 
@property (assign,nonatomic) unsigned bandScanCount24;                                                   //@synthesize bandScanCount24=_bandScanCount24 - In the implementation block
@property (assign,nonatomic) BOOL hasBandScanCount5; 
@property (assign,nonatomic) unsigned bandScanCount5;                                                    //@synthesize bandScanCount5=_bandScanCount5 - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasRssiBitmap:(BOOL)arg1 ;
-(unsigned)rssiBitmap;
-(unsigned long long)timestamp;
-(void)setHasCcaBitmap:(BOOL)arg1 ;
-(void)setHasBandScanCount5:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBandScanCount5;
-(unsigned)bandScanCount5;
-(BOOL)hasBandScanCount24;
-(BOOL)hasCcaBitmap;
-(unsigned)ccaBitmap;
-(id)description;
-(void)setCcaBitmap:(unsigned)arg1 ;
-(void)setBandScanCount5:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasRssiBitmap;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBandScanCount24:(unsigned)arg1 ;
-(void)setHasBandScanCount24:(BOOL)arg1 ;
-(unsigned)bandScanCount24;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setRssiBitmap:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)scanTypesCountsCount;
-(void)clearScanTypesCounts;
-(unsigned)scanTypesCountAtIndex:(unsigned long long)arg1 ;
-(void)addScanTypesCount:(unsigned)arg1 ;
-(unsigned long long)excludedDueToAJBlacklistCountsCount;
-(void)clearExcludedDueToAJBlacklistCounts;
-(unsigned)excludedDueToAJBlacklistCountAtIndex:(unsigned long long)arg1 ;
-(void)addExcludedDueToAJBlacklistCount:(unsigned)arg1 ;
-(unsigned*)scanTypesCounts;
-(void)setScanTypesCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)excludedDueToAJBlacklistCounts;
-(void)setExcludedDueToAJBlacklistCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setUserChoseToAssociateToAJBlacklistedCount:(unsigned)arg1 ;
-(void)setHasUserChoseToAssociateToAJBlacklistedCount:(BOOL)arg1 ;
-(BOOL)hasUserChoseToAssociateToAJBlacklistedCount;
-(void)setAjScansPerformedWithLocation:(unsigned)arg1 ;
-(void)setHasAjScansPerformedWithLocation:(BOOL)arg1 ;
-(BOOL)hasAjScansPerformedWithLocation;
-(void)setAjScansPerformedWithoutLocation:(unsigned)arg1 ;
-(void)setHasAjScansPerformedWithoutLocation:(BOOL)arg1 ;
-(BOOL)hasAjScansPerformedWithoutLocation;
-(void)setDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount:(unsigned)arg1 ;
-(void)setHasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount:(BOOL)arg1 ;
-(BOOL)hasDidAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
-(unsigned)userChoseToAssociateToAJBlacklistedCount;
-(unsigned)ajScansPerformedWithLocation;
-(unsigned)ajScansPerformedWithoutLocation;
-(unsigned)didAssocTo5GHzAfterBroadcastPeriodicAllBandScanCount;
@end

