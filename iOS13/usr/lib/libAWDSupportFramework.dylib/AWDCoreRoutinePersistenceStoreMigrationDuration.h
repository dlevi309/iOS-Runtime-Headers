/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceStoreMigrationDuration : PBCodable <NSCopying> {

	double _migrationTimeInterval;
	unsigned long long _timestamp;
	int _byteSize;
	int _deviceClass;
	int _nextModelVersion;
	int _previousModelVersion;
	int _storeType;
	BOOL _didVacuum;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStoreType; 
@property (assign,nonatomic) int storeType;                              //@synthesize storeType=_storeType - In the implementation block
@property (assign,nonatomic) BOOL hasMigrationTimeInterval; 
@property (assign,nonatomic) double migrationTimeInterval;               //@synthesize migrationTimeInterval=_migrationTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasDidVacuum; 
@property (assign,nonatomic) BOOL didVacuum;                             //@synthesize didVacuum=_didVacuum - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousModelVersion; 
@property (assign,nonatomic) int previousModelVersion;                   //@synthesize previousModelVersion=_previousModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNextModelVersion; 
@property (assign,nonatomic) int nextModelVersion;                       //@synthesize nextModelVersion=_nextModelVersion - In the implementation block
@property (assign,nonatomic) BOOL hasByteSize; 
@property (assign,nonatomic) int byteSize;                               //@synthesize byteSize=_byteSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)deviceClass;
-(int)storeType;
-(void)setStoreType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setDeviceClass:(int)arg1 ;
-(BOOL)hasDeviceClass;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(int)byteSize;
-(void)setByteSize:(int)arg1 ;
-(void)setHasStoreType:(BOOL)arg1 ;
-(BOOL)hasStoreType;
-(void)setMigrationTimeInterval:(double)arg1 ;
-(void)setHasMigrationTimeInterval:(BOOL)arg1 ;
-(BOOL)hasMigrationTimeInterval;
-(void)setDidVacuum:(BOOL)arg1 ;
-(void)setHasDidVacuum:(BOOL)arg1 ;
-(BOOL)hasDidVacuum;
-(void)setPreviousModelVersion:(int)arg1 ;
-(void)setHasPreviousModelVersion:(BOOL)arg1 ;
-(BOOL)hasPreviousModelVersion;
-(void)setNextModelVersion:(int)arg1 ;
-(void)setHasNextModelVersion:(BOOL)arg1 ;
-(BOOL)hasNextModelVersion;
-(void)setHasByteSize:(BOOL)arg1 ;
-(BOOL)hasByteSize;
-(double)migrationTimeInterval;
-(BOOL)didVacuum;
-(int)previousModelVersion;
-(int)nextModelVersion;
@end

