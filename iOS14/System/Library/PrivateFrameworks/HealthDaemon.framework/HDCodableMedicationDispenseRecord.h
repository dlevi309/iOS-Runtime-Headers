/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCodedQuantity, HDCodableMedicationDosageList, NSData, HDCodableMedicalRecord, HDCodableMedicalCodingList, HDCodableMedicalCoding, NSString;

@interface HDCodableMedicationDispenseRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableCodedQuantity* _daysSupplyQuantity;
	HDCodableMedicationDosageList* _dosages;
	NSData* _earliestDosageDate;
	NSData* _handOverDate;
	HDCodableMedicalRecord* _medicalRecord;
	HDCodableMedicalCodingList* _medicationCodings;
	NSData* _preparationDate;
	HDCodableCodedQuantity* _quantityDispensed;
	HDCodableMedicalCoding* _statusCoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                      //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasMedicationCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * medicationCodings;              //@synthesize medicationCodings=_medicationCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasQuantityDispensed; 
@property (nonatomic,retain) HDCodableCodedQuantity * quantityDispensed;                  //@synthesize quantityDispensed=_quantityDispensed - In the implementation block
@property (nonatomic,readonly) BOOL hasPreparationDate; 
@property (nonatomic,retain) NSData * preparationDate;                                    //@synthesize preparationDate=_preparationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasHandOverDate; 
@property (nonatomic,retain) NSData * handOverDate;                                       //@synthesize handOverDate=_handOverDate - In the implementation block
@property (nonatomic,readonly) BOOL hasDosages; 
@property (nonatomic,retain) HDCodableMedicationDosageList * dosages;                     //@synthesize dosages=_dosages - In the implementation block
@property (nonatomic,readonly) BOOL hasEarliestDosageDate; 
@property (nonatomic,retain) NSData * earliestDosageDate;                                 //@synthesize earliestDosageDate=_earliestDosageDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                       //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasDaysSupplyQuantity; 
@property (nonatomic,retain) HDCodableCodedQuantity * daysSupplyQuantity;                 //@synthesize daysSupplyQuantity=_daysSupplyQuantity - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(HDCodableMedicationDosageList *)dosages;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCodingList *)medicationCodings;
-(HDCodableCodedQuantity *)quantityDispensed;
-(NSData *)preparationDate;
-(NSData *)handOverDate;
-(NSData *)earliestDosageDate;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableCodedQuantity *)daysSupplyQuantity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMedicationCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setQuantityDispensed:(HDCodableCodedQuantity *)arg1 ;
-(void)setPreparationDate:(NSData *)arg1 ;
-(void)setHandOverDate:(NSData *)arg1 ;
-(void)setDosages:(HDCodableMedicationDosageList *)arg1 ;
-(void)setEarliestDosageDate:(NSData *)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setDaysSupplyQuantity:(HDCodableCodedQuantity *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasMedicationCodings;
-(BOOL)hasQuantityDispensed;
-(BOOL)hasPreparationDate;
-(BOOL)hasHandOverDate;
-(BOOL)hasDosages;
-(BOOL)hasEarliestDosageDate;
-(BOOL)hasStatusCoding;
-(BOOL)hasDaysSupplyQuantity;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
@end

