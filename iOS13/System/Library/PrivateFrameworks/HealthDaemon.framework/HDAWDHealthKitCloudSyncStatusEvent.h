/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncStatusEvent : PBCodable <NSCopying> {

	unsigned long long _baselineEpoch;
	unsigned long long _emptyZoneCount;
	unsigned long long _timeSinceDownloadSuccess;
	unsigned long long _timeSinceLastUploadForwardProgress;
	unsigned long long _timeSinceUploadSuccess;
	unsigned long long _timeUntilRebaseRequired;
	unsigned long long _timestamp;
	HDAWDHealthKitCloudSyncEvent* _event;
	BOOL _hasEncounteredGapInCurrentEpoch;
	SCD_Struct_HD8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) HDAWDHealthKitCloudSyncEvent * event;                               //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceUploadSuccess; 
@property (assign,nonatomic) unsigned long long timeSinceUploadSuccess;                          //@synthesize timeSinceUploadSuccess=_timeSinceUploadSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceDownloadSuccess; 
@property (assign,nonatomic) unsigned long long timeSinceDownloadSuccess;                        //@synthesize timeSinceDownloadSuccess=_timeSinceDownloadSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTimeUntilRebaseRequired; 
@property (assign,nonatomic) unsigned long long timeUntilRebaseRequired;                         //@synthesize timeUntilRebaseRequired=_timeUntilRebaseRequired - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastUploadForwardProgress; 
@property (assign,nonatomic) unsigned long long timeSinceLastUploadForwardProgress;              //@synthesize timeSinceLastUploadForwardProgress=_timeSinceLastUploadForwardProgress - In the implementation block
@property (assign,nonatomic) BOOL hasBaselineEpoch; 
@property (assign,nonatomic) unsigned long long baselineEpoch;                                   //@synthesize baselineEpoch=_baselineEpoch - In the implementation block
@property (assign,nonatomic) BOOL hasHasEncounteredGapInCurrentEpoch; 
@property (assign,nonatomic) BOOL hasEncounteredGapInCurrentEpoch;                               //@synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch - In the implementation block
@property (assign,nonatomic) BOOL hasEmptyZoneCount; 
@property (assign,nonatomic) unsigned long long emptyZoneCount;                                  //@synthesize emptyZoneCount=_emptyZoneCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDAWDHealthKitCloudSyncEvent *)event;
-(void)setEvent:(HDAWDHealthKitCloudSyncEvent *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasEvent;
-(unsigned long long)baselineEpoch;
-(BOOL)hasEncounteredGapInCurrentEpoch;
-(void)setBaselineEpoch:(unsigned long long)arg1 ;
-(unsigned long long)emptyZoneCount;
-(void)setEmptyZoneCount:(unsigned long long)arg1 ;
-(unsigned long long)timeSinceDownloadSuccess;
-(void)setTimeSinceDownloadSuccess:(unsigned long long)arg1 ;
-(unsigned long long)timeSinceLastUploadForwardProgress;
-(void)setTimeSinceLastUploadForwardProgress:(unsigned long long)arg1 ;
-(unsigned long long)timeSinceUploadSuccess;
-(void)setTimeSinceUploadSuccess:(unsigned long long)arg1 ;
-(unsigned long long)timeUntilRebaseRequired;
-(void)setTimeUntilRebaseRequired:(unsigned long long)arg1 ;
-(void)setHasEncounteredGapInCurrentEpoch:(BOOL)arg1 ;
-(void)setHasTimeSinceUploadSuccess:(BOOL)arg1 ;
-(BOOL)hasTimeSinceUploadSuccess;
-(void)setHasTimeSinceDownloadSuccess:(BOOL)arg1 ;
-(BOOL)hasTimeSinceDownloadSuccess;
-(void)setHasTimeUntilRebaseRequired:(BOOL)arg1 ;
-(BOOL)hasTimeUntilRebaseRequired;
-(void)setHasTimeSinceLastUploadForwardProgress:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastUploadForwardProgress;
-(void)setHasBaselineEpoch:(BOOL)arg1 ;
-(BOOL)hasBaselineEpoch;
-(void)setHasHasEncounteredGapInCurrentEpoch:(BOOL)arg1 ;
-(BOOL)hasHasEncounteredGapInCurrentEpoch;
-(void)setHasEmptyZoneCount:(BOOL)arg1 ;
-(BOOL)hasEmptyZoneCount;
@end

