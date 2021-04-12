/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitCloudSyncEvent : PBCodable <NSCopying> {

	unsigned long long _pcsReportManateeStatus;
	NSString* _cloudKitUUID;
	NSString* _containerID;
	int _operation;
	NSString* _operationUUID;
	unsigned _options;
	int _reason;
	NSString* _syncCirclePrefix;
	NSString* _syncUUID;
	BOOL _hasCKManateeEnabled;
	BOOL _hasInternalSettingManateeEnabled;
	SCD_Struct_HD23 _has;

}

@property (assign,nonatomic) BOOL hasOperation; 
@property (assign,nonatomic) int operation;                                          //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                             //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) unsigned options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncCirclePrefix; 
@property (nonatomic,retain) NSString * syncCirclePrefix;                            //@synthesize syncCirclePrefix=_syncCirclePrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerID; 
@property (nonatomic,retain) NSString * containerID;                                 //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncUUID; 
@property (nonatomic,retain) NSString * syncUUID;                                    //@synthesize syncUUID=_syncUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasOperationUUID; 
@property (nonatomic,retain) NSString * operationUUID;                               //@synthesize operationUUID=_operationUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudKitUUID; 
@property (nonatomic,retain) NSString * cloudKitUUID;                                //@synthesize cloudKitUUID=_cloudKitUUID - In the implementation block
@property (assign,nonatomic) BOOL hasHasCKManateeEnabled; 
@property (assign,nonatomic) BOOL hasCKManateeEnabled;                               //@synthesize hasCKManateeEnabled=_hasCKManateeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHasInternalSettingManateeEnabled; 
@property (assign,nonatomic) BOOL hasInternalSettingManateeEnabled;                  //@synthesize hasInternalSettingManateeEnabled=_hasInternalSettingManateeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPcsReportManateeStatus; 
@property (assign,nonatomic) unsigned long long pcsReportManateeStatus;              //@synthesize pcsReportManateeStatus=_pcsReportManateeStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)options;
-(int)reason;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(NSString *)containerID;
-(void)setOperationUUID:(NSString *)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(BOOL)hasOptions;
-(BOOL)hasReason;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasContainerID;
-(void)setHasOperation:(BOOL)arg1 ;
-(BOOL)hasOperation;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(NSString *)operationUUID;
-(BOOL)hasOperationUUID;
-(void)setHasOptions:(BOOL)arg1 ;
-(void)setSyncUUID:(NSString *)arg1 ;
-(NSString *)syncCirclePrefix;
-(void)setSyncCirclePrefix:(NSString *)arg1 ;
-(void)setCloudKitUUID:(NSString *)arg1 ;
-(void)setHasCKManateeEnabled:(BOOL)arg1 ;
-(void)setHasInternalSettingManateeEnabled:(BOOL)arg1 ;
-(unsigned long long)pcsReportManateeStatus;
-(void)setPcsReportManateeStatus:(unsigned long long)arg1 ;
-(BOOL)hasSyncCirclePrefix;
-(BOOL)hasSyncUUID;
-(BOOL)hasCloudKitUUID;
-(void)setHasHasCKManateeEnabled:(BOOL)arg1 ;
-(BOOL)hasHasCKManateeEnabled;
-(void)setHasHasInternalSettingManateeEnabled:(BOOL)arg1 ;
-(BOOL)hasHasInternalSettingManateeEnabled;
-(void)setHasPcsReportManateeStatus:(BOOL)arg1 ;
-(BOOL)hasPcsReportManateeStatus;
-(NSString *)syncUUID;
-(NSString *)cloudKitUUID;
-(BOOL)hasCKManateeEnabled;
-(BOOL)hasInternalSettingManateeEnabled;
@end

