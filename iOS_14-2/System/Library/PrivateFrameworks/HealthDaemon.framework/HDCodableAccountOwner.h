/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HDCodableMedicalRecord, NSString;

@interface HDCodableAccountOwner : PBCodable <HDDecoding, NSCopying> {

	NSData* _birthDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSString* _name;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;              //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasBirthDate; 
@property (nonatomic,retain) NSData * birthDate;                                  //@synthesize birthDate=_birthDate - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)birthDate;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBirthDate:(NSData *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)hasBirthDate;
@end

