/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalIDData, NSMutableArray;

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying> {

	HDCodableMedicalIDData* _medicalIDData;
	NSMutableArray* _medicalIDLogs;

}

@property (nonatomic,readonly) BOOL hasMedicalIDData; 
@property (nonatomic,retain) HDCodableMedicalIDData * medicalIDData;              //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSMutableArray * medicalIDLogs;                      //@synthesize medicalIDLogs=_medicalIDLogs - In the implementation block
+(Class)medicalIDLogsType;
-(id)dictionaryRepresentation;
-(HDCodableMedicalIDData *)medicalIDData;
-(void)mergeFrom:(id)arg1 ;
-(void)setMedicalIDData:(HDCodableMedicalIDData *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addMedicalIDLogs:(id)arg1 ;
-(unsigned long long)medicalIDLogsCount;
-(void)clearMedicalIDLogs;
-(id)medicalIDLogsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMedicalIDData;
-(NSMutableArray *)medicalIDLogs;
-(void)setMedicalIDLogs:(NSMutableArray *)arg1 ;
@end

