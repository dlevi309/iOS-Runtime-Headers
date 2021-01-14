/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, HDCodableMedicationDosageList, HDCodableMedicalRecord, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalCoding;

@interface HDCodableMedicationRecord : PBCodable <HDDecoding, NSCopying> {

	long long _assertionType;
	NSString* _asserter;
	NSData* _assertionDate;
	HDCodableMedicationDosageList* _dosages;
	NSData* _earliestDosageDate;
	NSData* _effectiveEndDate;
	NSData* _effectiveStartDate;
	HDCodableMedicalRecord* _medicalRecord;
	HDCodableMedicalCodingList* _medicationCodings;
	HDCodableMedicalCodingList* _reasonForUseCodings;
	HDCodableMedicalCodingListList* _reasonsNotTakenCodings;
	HDCodableMedicalCoding* _statusCoding;
	BOOL _notTaken;
	SCD_Struct_HD11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                               //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasMedicationCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * medicationCodings;                       //@synthesize medicationCodings=_medicationCodings - In the implementation block
@property (assign,nonatomic) BOOL hasAssertionType; 
@property (assign,nonatomic) long long assertionType;                                              //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,readonly) BOOL hasAsserter; 
@property (nonatomic,retain) NSString * asserter;                                                  //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,readonly) BOOL hasAssertionDate; 
@property (nonatomic,retain) NSData * assertionDate;                                               //@synthesize assertionDate=_assertionDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                                //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasDosages; 
@property (nonatomic,retain) HDCodableMedicationDosageList * dosages;                              //@synthesize dosages=_dosages - In the implementation block
@property (nonatomic,readonly) BOOL hasEarliestDosageDate; 
@property (nonatomic,retain) NSData * earliestDosageDate;                                          //@synthesize earliestDosageDate=_earliestDosageDate - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonForUseCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * reasonForUseCodings;                     //@synthesize reasonForUseCodings=_reasonForUseCodings - In the implementation block
@property (assign,nonatomic) BOOL hasNotTaken; 
@property (assign,nonatomic) BOOL notTaken;                                                        //@synthesize notTaken=_notTaken - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonsNotTakenCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * reasonsNotTakenCodings;              //@synthesize reasonsNotTakenCodings=_reasonsNotTakenCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveStartDate; 
@property (nonatomic,retain) NSData * effectiveStartDate;                                          //@synthesize effectiveStartDate=_effectiveStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveEndDate; 
@property (nonatomic,retain) NSData * effectiveEndDate;                                            //@synthesize effectiveEndDate=_effectiveEndDate - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(HDCodableMedicationDosageList *)dosages;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)asserter;
-(BOOL)notTaken;
-(NSString *)description;
-(long long)assertionType;
-(unsigned long long)hash;
-(void)setAssertionType:(long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)effectiveStartDate;
-(NSData *)effectiveEndDate;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCodingList *)medicationCodings;
-(NSData *)earliestDosageDate;
-(HDCodableMedicalCoding *)statusCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)assertionDate;
-(HDCodableMedicalCodingList *)reasonForUseCodings;
-(HDCodableMedicalCodingListList *)reasonsNotTakenCodings;
-(void)setMedicationCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setDosages:(HDCodableMedicationDosageList *)arg1 ;
-(void)setEarliestDosageDate:(NSData *)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasMedicationCodings;
-(BOOL)hasDosages;
-(BOOL)hasEarliestDosageDate;
-(BOOL)hasStatusCoding;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setEffectiveStartDate:(NSData *)arg1 ;
-(void)setEffectiveEndDate:(NSData *)arg1 ;
-(void)setAsserter:(NSString *)arg1 ;
-(BOOL)hasAsserter;
-(void)setAssertionDate:(NSData *)arg1 ;
-(void)setReasonForUseCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setNotTaken:(BOOL)arg1 ;
-(void)setReasonsNotTakenCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(BOOL)hasEffectiveStartDate;
-(BOOL)hasEffectiveEndDate;
-(void)setHasAssertionType:(BOOL)arg1 ;
-(BOOL)hasAssertionType;
-(BOOL)hasAssertionDate;
-(BOOL)hasReasonForUseCodings;
-(void)setHasNotTaken:(BOOL)arg1 ;
-(BOOL)hasNotTaken;
-(BOOL)hasReasonsNotTakenCodings;
@end

