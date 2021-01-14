/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPairedSyncSyncReport : PBCodable <NSCopying> {

	unsigned long long _syncDuration;
	unsigned long long _timestamp;
	NSString* _activityName;
	unsigned _defaultByteCount;
	NSString* _gizmoBuild;
	NSString* _gizmoHardware;
	unsigned _recordCount;
	unsigned _syncByteCount;
	unsigned _syncErrorCode;
	unsigned _syncType;
	unsigned _timeoutCount;
	unsigned _urgentByteCount;
	BOOL _isAutomated;
	BOOL _sawADropout;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsAutomated; 
@property (assign,nonatomic) BOOL isAutomated;                             //@synthesize isAutomated=_isAutomated - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoBuild; 
@property (nonatomic,retain) NSString * gizmoBuild;                        //@synthesize gizmoBuild=_gizmoBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasGizmoHardware; 
@property (nonatomic,retain) NSString * gizmoHardware;                     //@synthesize gizmoHardware=_gizmoHardware - In the implementation block
@property (assign,nonatomic) BOOL hasSyncDuration; 
@property (assign,nonatomic) unsigned long long syncDuration;              //@synthesize syncDuration=_syncDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityName; 
@property (nonatomic,retain) NSString * activityName;                      //@synthesize activityName=_activityName - In the implementation block
@property (assign,nonatomic) BOOL hasSyncErrorCode; 
@property (assign,nonatomic) unsigned syncErrorCode;                       //@synthesize syncErrorCode=_syncErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutCount; 
@property (assign,nonatomic) unsigned timeoutCount;                        //@synthesize timeoutCount=_timeoutCount - In the implementation block
@property (assign,nonatomic) BOOL hasSyncType; 
@property (assign,nonatomic) unsigned syncType;                            //@synthesize syncType=_syncType - In the implementation block
@property (assign,nonatomic) BOOL hasRecordCount; 
@property (assign,nonatomic) unsigned recordCount;                         //@synthesize recordCount=_recordCount - In the implementation block
@property (assign,nonatomic) BOOL hasSyncByteCount; 
@property (assign,nonatomic) unsigned syncByteCount;                       //@synthesize syncByteCount=_syncByteCount - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultByteCount; 
@property (assign,nonatomic) unsigned defaultByteCount;                    //@synthesize defaultByteCount=_defaultByteCount - In the implementation block
@property (assign,nonatomic) BOOL hasUrgentByteCount; 
@property (assign,nonatomic) unsigned urgentByteCount;                     //@synthesize urgentByteCount=_urgentByteCount - In the implementation block
@property (assign,nonatomic) BOOL hasSawADropout; 
@property (assign,nonatomic) BOOL sawADropout;                             //@synthesize sawADropout=_sawADropout - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)recordCount;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)syncType;
-(id)description;
-(NSString *)activityName;
-(void)setRecordCount:(unsigned)arg1 ;
-(void)setHasRecordCount:(BOOL)arg1 ;
-(BOOL)hasRecordCount;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSyncType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setSyncDuration:(unsigned long long)arg1 ;
-(void)setHasSyncType:(BOOL)arg1 ;
-(BOOL)hasSyncType;
-(BOOL)sawADropout;
-(NSString *)gizmoBuild;
-(NSString *)gizmoHardware;
-(void)setGizmoBuild:(NSString *)arg1 ;
-(void)setGizmoHardware:(NSString *)arg1 ;
-(void)setActivityName:(NSString *)arg1 ;
-(void)setHasSyncDuration:(BOOL)arg1 ;
-(BOOL)hasSyncDuration;
-(unsigned long long)syncDuration;
-(void)setIsAutomated:(BOOL)arg1 ;
-(void)setHasIsAutomated:(BOOL)arg1 ;
-(BOOL)hasIsAutomated;
-(BOOL)hasGizmoBuild;
-(BOOL)hasGizmoHardware;
-(BOOL)hasActivityName;
-(void)setSyncErrorCode:(unsigned)arg1 ;
-(void)setHasSyncErrorCode:(BOOL)arg1 ;
-(BOOL)hasSyncErrorCode;
-(void)setTimeoutCount:(unsigned)arg1 ;
-(void)setHasTimeoutCount:(BOOL)arg1 ;
-(BOOL)hasTimeoutCount;
-(void)setSyncByteCount:(unsigned)arg1 ;
-(void)setHasSyncByteCount:(BOOL)arg1 ;
-(BOOL)hasSyncByteCount;
-(void)setDefaultByteCount:(unsigned)arg1 ;
-(void)setHasDefaultByteCount:(BOOL)arg1 ;
-(BOOL)hasDefaultByteCount;
-(void)setUrgentByteCount:(unsigned)arg1 ;
-(void)setHasUrgentByteCount:(BOOL)arg1 ;
-(BOOL)hasUrgentByteCount;
-(void)setSawADropout:(BOOL)arg1 ;
-(void)setHasSawADropout:(BOOL)arg1 ;
-(BOOL)hasSawADropout;
-(BOOL)isAutomated;
-(unsigned)syncErrorCode;
-(unsigned)timeoutCount;
-(unsigned)syncByteCount;
-(unsigned)defaultByteCount;
-(unsigned)urgentByteCount;
@end

