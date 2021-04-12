/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncStartEvent : PBCodable <NSCopying> {

	unsigned long long _countSinceLastSuccess;
	unsigned long long _timeSinceLastSuccess;
	unsigned long long _timestamp;
	HDAWDHealthKitCloudSyncEvent* _event;
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) HDAWDHealthKitCloudSyncEvent * event;                  //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL hasCountSinceLastSuccess; 
@property (assign,nonatomic) unsigned long long countSinceLastSuccess;              //@synthesize countSinceLastSuccess=_countSinceLastSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastSuccess; 
@property (assign,nonatomic) unsigned long long timeSinceLastSuccess;               //@synthesize timeSinceLastSuccess=_timeSinceLastSuccess - In the implementation block
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
-(void)setCountSinceLastSuccess:(unsigned long long)arg1 ;
-(void)setHasCountSinceLastSuccess:(BOOL)arg1 ;
-(BOOL)hasCountSinceLastSuccess;
-(void)setTimeSinceLastSuccess:(unsigned long long)arg1 ;
-(void)setHasTimeSinceLastSuccess:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastSuccess;
-(unsigned long long)countSinceLastSuccess;
-(unsigned long long)timeSinceLastSuccess;
@end

