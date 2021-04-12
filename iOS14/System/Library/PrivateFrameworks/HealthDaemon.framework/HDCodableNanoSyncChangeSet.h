/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/HDNanoSyncPersistentUserInfoCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableError, NSData, NSString;

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {

	double _sessionStartDate;
	NSMutableArray* _changes;
	HDCodableError* _sessionError;
	NSData* _sessionUUID;
	int _statusCode;
	SCD_Struct_HD11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * changes;                   //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSData * sessionUUID;                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionStartDate; 
@property (assign,nonatomic) double sessionStartDate;                    //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionError; 
@property (nonatomic,retain) HDCodableError * sessionError;              //@synthesize sessionError=_sessionError - In the implementation block
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                             //@synthesize statusCode=_statusCode - In the implementation block
+(Class)changesType;
+(id)changeSetWithChanges:(id)arg1 sessionUUID:(id)arg2 startDate:(id)arg3 sessionError:(id)arg4 statusCode:(int)arg5 ;
+(id)retreiveFromPersistentUserInfo:(id)arg1 ;
+(id)persistentUserInfoKey;
-(NSMutableArray *)changes;
-(id)dictionaryRepresentation;
-(void)setSessionUUID:(NSData *)arg1 ;
-(NSData *)sessionUUID;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(int)statusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)addChanges:(id)arg1 ;
-(BOOL)hasStatusCode;
-(BOOL)readFrom:(id)arg1 ;
-(double)sessionStartDate;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)changesCount;
-(void)clearChanges;
-(id)changesAtIndex:(unsigned long long)arg1 ;
-(void)setSessionStartDate:(double)arg1 ;
-(id)nanoSyncDescription;
-(void)_addChanges:(id)arg1 ;
-(void)setSessionError:(HDCodableError *)arg1 ;
-(id)decodedSessionUUID;
-(id)decodedSessionStartDate;
-(id)decodedSessionError;
-(void)addToPersistentUserInfo:(id)arg1 ;
-(id)copyForPersistentUserInfo;
-(BOOL)hasSessionUUID;
-(void)setHasSessionStartDate:(BOOL)arg1 ;
-(BOOL)hasSessionStartDate;
-(BOOL)hasSessionError;
-(HDCodableError *)sessionError;
@end

