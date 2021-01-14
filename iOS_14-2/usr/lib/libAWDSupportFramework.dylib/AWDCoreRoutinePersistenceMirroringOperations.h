/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutinePersistenceMirroringOperations : PBCodable <NSCopying> {

	long long _timeIntervalSinceLastOperation;
	unsigned long long _timestamp;
	int _deviceClass;
	int _errorCount;
	int _operationType;
	int _qualityOfService;
	int _recordsChanged;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceClass; 
@property (assign,nonatomic) int deviceClass;                                       //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) int operationType;                                     //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) BOOL hasRecordsChanged; 
@property (assign,nonatomic) int recordsChanged;                                    //@synthesize recordsChanged=_recordsChanged - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCount; 
@property (assign,nonatomic) int errorCount;                                        //@synthesize errorCount=_errorCount - In the implementation block
@property (assign,nonatomic) BOOL hasTimeIntervalSinceLastOperation; 
@property (assign,nonatomic) long long timeIntervalSinceLastOperation;              //@synthesize timeIntervalSinceLastOperation=_timeIntervalSinceLastOperation - In the implementation block
@property (assign,nonatomic) BOOL hasQualityOfService; 
@property (assign,nonatomic) int qualityOfService;                                  //@synthesize qualityOfService=_qualityOfService - In the implementation block
-(int)operationType;
-(id)dictionaryRepresentation;
-(void)setQualityOfService:(int)arg1 ;
-(unsigned long long)timestamp;
-(int)deviceClass;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasDeviceClass;
-(void)setDeviceClass:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOperationType:(int)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(int)errorCount;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)qualityOfService;
-(void)setHasDeviceClass:(BOOL)arg1 ;
-(void)setErrorCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasQualityOfService;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(void)setRecordsChanged:(int)arg1 ;
-(void)setHasRecordsChanged:(BOOL)arg1 ;
-(BOOL)hasRecordsChanged;
-(void)setHasErrorCount:(BOOL)arg1 ;
-(BOOL)hasErrorCount;
-(void)setTimeIntervalSinceLastOperation:(long long)arg1 ;
-(void)setHasTimeIntervalSinceLastOperation:(BOOL)arg1 ;
-(BOOL)hasTimeIntervalSinceLastOperation;
-(int)recordsChanged;
-(long long)timeIntervalSinceLastOperation;
@end

