/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDWiFiMetricsManagerAutoJoinRecord : PBCodable <NSCopying> {

	SCD_Struct_AW21* _scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
	unsigned long long _beganTimestamp;
	unsigned long long _endedTimestamp;
	unsigned long long _enteredKnownNetworkGeotagLocationTimeStamp;
	unsigned long long _timestamp;
	unsigned long long _wakeTimestamp;
	unsigned _bandExclusionReason;
	unsigned _bandScanCount24;
	unsigned _bandScanCount5;
	unsigned _ccaBitmap;
	unsigned _knownNetworksFoundInScans;
	unsigned _lastScanError;
	unsigned _lastScanType;
	NSMutableArray* _networksExcludedFromAJDueToThresholds;
	unsigned _nwExclusionCount;
	unsigned _resetReason;
	unsigned _resetTypes;
	unsigned _retryIndex;
	unsigned _rssiBitmap;
	unsigned _scanResultFound;
	unsigned _scanTypes;
	unsigned _state;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBeganTimestamp; 
@property (assign,nonatomic) unsigned long long beganTimestamp;                                                              //@synthesize beganTimestamp=_beganTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndedTimestamp; 
@property (assign,nonatomic) unsigned long long endedTimestamp;                                                              //@synthesize endedTimestamp=_endedTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWakeTimestamp; 
@property (assign,nonatomic) unsigned long long wakeTimestamp;                                                               //@synthesize wakeTimestamp=_wakeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnteredKnownNetworkGeotagLocationTimeStamp; 
@property (assign,nonatomic) unsigned long long enteredKnownNetworkGeotagLocationTimeStamp;                                  //@synthesize enteredKnownNetworkGeotagLocationTimeStamp=_enteredKnownNetworkGeotagLocationTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                                                                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasRetryIndex; 
@property (assign,nonatomic) unsigned retryIndex;                                                                            //@synthesize retryIndex=_retryIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long scannedNetworksExcludedFromAJDueToBlacklistReasonCountsCount; 
@property (nonatomic,readonly) unsigned* scannedNetworksExcludedFromAJDueToBlacklistReasonCounts; 
@property (assign,nonatomic) BOOL hasScanTypes; 
@property (assign,nonatomic) unsigned scanTypes;                                                                             //@synthesize scanTypes=_scanTypes - In the implementation block
@property (assign,nonatomic) BOOL hasLastScanType; 
@property (assign,nonatomic) unsigned lastScanType;                                                                          //@synthesize lastScanType=_lastScanType - In the implementation block
@property (assign,nonatomic) BOOL hasResetTypes; 
@property (assign,nonatomic) unsigned resetTypes;                                                                            //@synthesize resetTypes=_resetTypes - In the implementation block
@property (assign,nonatomic) BOOL hasResetReason; 
@property (assign,nonatomic) unsigned resetReason;                                                                           //@synthesize resetReason=_resetReason - In the implementation block
@property (assign,nonatomic) BOOL hasScanResultFound; 
@property (assign,nonatomic) unsigned scanResultFound;                                                                       //@synthesize scanResultFound=_scanResultFound - In the implementation block
@property (assign,nonatomic) BOOL hasKnownNetworksFoundInScans; 
@property (assign,nonatomic) unsigned knownNetworksFoundInScans;                                                             //@synthesize knownNetworksFoundInScans=_knownNetworksFoundInScans - In the implementation block
@property (assign,nonatomic) BOOL hasLastScanError; 
@property (assign,nonatomic) unsigned lastScanError;                                                                         //@synthesize lastScanError=_lastScanError - In the implementation block
@property (assign,nonatomic) BOOL hasRssiBitmap; 
@property (assign,nonatomic) unsigned rssiBitmap;                                                                            //@synthesize rssiBitmap=_rssiBitmap - In the implementation block
@property (assign,nonatomic) BOOL hasCcaBitmap; 
@property (assign,nonatomic) unsigned ccaBitmap;                                                                             //@synthesize ccaBitmap=_ccaBitmap - In the implementation block
@property (assign,nonatomic) BOOL hasBandScanCount24; 
@property (assign,nonatomic) unsigned bandScanCount24;                                                                       //@synthesize bandScanCount24=_bandScanCount24 - In the implementation block
@property (assign,nonatomic) BOOL hasBandScanCount5; 
@property (assign,nonatomic) unsigned bandScanCount5;                                                                        //@synthesize bandScanCount5=_bandScanCount5 - In the implementation block
@property (assign,nonatomic) BOOL hasNwExclusionCount; 
@property (assign,nonatomic) unsigned nwExclusionCount;                                                                      //@synthesize nwExclusionCount=_nwExclusionCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * networksExcludedFromAJDueToThresholds;                                         //@synthesize networksExcludedFromAJDueToThresholds=_networksExcludedFromAJDueToThresholds - In the implementation block
@property (assign,nonatomic) BOOL hasBandExclusionReason; 
@property (assign,nonatomic) unsigned bandExclusionReason;                                                                   //@synthesize bandExclusionReason=_bandExclusionReason - In the implementation block
+(Class)networksExcludedFromAJDueToThresholdsType;
-(unsigned)nwExclusionCount;
-(id)dictionaryRepresentation;
-(BOOL)hasRetryIndex;
-(void)setEnteredKnownNetworkGeotagLocationTimeStamp:(unsigned long long)arg1 ;
-(void)setHasNwExclusionCount:(BOOL)arg1 ;
-(void)setHasRssiBitmap:(BOOL)arg1 ;
-(BOOL)hasLastScanType;
-(void)setNwExclusionCount:(unsigned)arg1 ;
-(unsigned long long)endedTimestamp;
-(unsigned*)scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
-(unsigned long long)wakeTimestamp;
-(BOOL)hasState;
-(void)setHasEndedTimestamp:(BOOL)arg1 ;
-(unsigned)rssiBitmap;
-(BOOL)hasBandExclusionReason;
-(unsigned)resetTypes;
-(void)setScanTypes:(unsigned)arg1 ;
-(void)setNetworksExcludedFromAJDueToThresholds:(NSMutableArray *)arg1 ;
-(void)setHasBeganTimestamp:(BOOL)arg1 ;
-(void)setHasLastScanError:(BOOL)arg1 ;
-(void)setRetryIndex:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(void)addScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned)arg1 ;
-(BOOL)hasScanTypes;
-(void)setHasRetryIndex:(BOOL)arg1 ;
-(unsigned)resetReason;
-(void)setHasCcaBitmap:(BOOL)arg1 ;
-(void)setHasBandScanCount5:(BOOL)arg1 ;
-(unsigned)scannedNetworksExcludedFromAJDueToBlacklistReasonCountsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)enteredKnownNetworkGeotagLocationTimeStamp;
-(unsigned long long)networksExcludedFromAJDueToThresholdsCount;
-(void)setLastScanType:(unsigned)arg1 ;
-(void)setHasEnteredKnownNetworkGeotagLocationTimeStamp:(BOOL)arg1 ;
-(BOOL)hasBandScanCount5;
-(void)clearNetworksExcludedFromAJDueToThresholds;
-(unsigned)bandScanCount5;
-(BOOL)hasEnteredKnownNetworkGeotagLocationTimeStamp;
-(void)setBandExclusionReason:(unsigned)arg1 ;
-(BOOL)hasEndedTimestamp;
-(BOOL)hasBandScanCount24;
-(unsigned)scanResultFound;
-(BOOL)hasCcaBitmap;
-(void)setScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)ccaBitmap;
-(id)description;
-(BOOL)hasNwExclusionCount;
-(void)setCcaBitmap:(unsigned)arg1 ;
-(void)setBeganTimestamp:(unsigned long long)arg1 ;
-(void)setHasState:(BOOL)arg1 ;
-(unsigned)lastScanError;
-(unsigned long long)beganTimestamp;
-(unsigned long long)scannedNetworksExcludedFromAJDueToBlacklistReasonCountsCount;
-(BOOL)hasWakeTimestamp;
-(void)setBandScanCount5:(unsigned)arg1 ;
-(void)setHasKnownNetworksFoundInScans:(BOOL)arg1 ;
-(void)setHasResetReason:(BOOL)arg1 ;
-(id)networksExcludedFromAJDueToThresholdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasBandExclusionReason:(BOOL)arg1 ;
-(void)setKnownNetworksFoundInScans:(unsigned)arg1 ;
-(void)setResetTypes:(unsigned)arg1 ;
-(NSMutableArray *)networksExcludedFromAJDueToThresholds;
-(BOOL)hasScanResultFound;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setState:(unsigned)arg1 ;
-(unsigned)retryIndex;
-(unsigned long long)hash;
-(BOOL)hasLastScanError;
-(unsigned)bandExclusionReason;
-(BOOL)hasTimestamp;
-(unsigned)state;
-(void)setHasLastScanType:(BOOL)arg1 ;
-(BOOL)hasKnownNetworksFoundInScans;
-(void)setHasWakeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRssiBitmap;
-(void)setHasScanResultFound:(BOOL)arg1 ;
-(unsigned)scanTypes;
-(unsigned)lastScanType;
-(void)setEndedTimestamp:(unsigned long long)arg1 ;
-(void)clearScannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)knownNetworksFoundInScans;
-(BOOL)hasResetReason;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBandScanCount24:(unsigned)arg1 ;
-(BOOL)hasResetTypes;
-(void)setResetReason:(unsigned)arg1 ;
-(void)setHasScanTypes:(BOOL)arg1 ;
-(BOOL)hasBeganTimestamp;
-(void)setScanResultFound:(unsigned)arg1 ;
-(void)setWakeTimestamp:(unsigned long long)arg1 ;
-(void)setHasBandScanCount24:(BOOL)arg1 ;
-(void)addNetworksExcludedFromAJDueToThresholds:(id)arg1 ;
-(unsigned)bandScanCount24;
-(void)setLastScanError:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasResetTypes:(BOOL)arg1 ;
-(void)setRssiBitmap:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

