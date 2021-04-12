/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HDCodableMedicalCodingList, NSString, HDCodableMedicalRecord, HDCodableMedicalCodingListList, HDCodableMedicalCoding;

@interface HDCodableVaccinationRecord : PBCodable <HDDecoding, NSCopying> {

	NSData* _administrationDate;
	HDCodableMedicalCodingList* _bodySiteCodings;
	NSString* _doseNumber;
	NSString* _doseQuantity;
	NSData* _expirationDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSString* _performer;
	NSString* _reaction;
	HDCodableMedicalCodingListList* _reasonsCodings;
	HDCodableMedicalCodingListList* _reasonsNotGivenCodings;
	HDCodableMedicalCodingList* _routeCodings;
	HDCodableMedicalCoding* _statusCoding;
	HDCodableMedicalCodingList* _vaccinationCodings;
	BOOL _notGiven;
	BOOL _patientReported;
	SCD_Struct_HD11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                               //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasVaccinationCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * vaccinationCodings;                      //@synthesize vaccinationCodings=_vaccinationCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasExpirationDate; 
@property (nonatomic,retain) NSData * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasDoseNumber; 
@property (nonatomic,retain) NSString * doseNumber;                                                //@synthesize doseNumber=_doseNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasDoseQuantity; 
@property (nonatomic,retain) NSString * doseQuantity;                                              //@synthesize doseQuantity=_doseQuantity - In the implementation block
@property (nonatomic,readonly) BOOL hasPerformer; 
@property (nonatomic,retain) NSString * performer;                                                 //@synthesize performer=_performer - In the implementation block
@property (nonatomic,readonly) BOOL hasBodySiteCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * bodySiteCodings;                         //@synthesize bodySiteCodings=_bodySiteCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasReaction; 
@property (nonatomic,retain) NSString * reaction;                                                  //@synthesize reaction=_reaction - In the implementation block
@property (assign,nonatomic) BOOL hasNotGiven; 
@property (assign,nonatomic) BOOL notGiven;                                                        //@synthesize notGiven=_notGiven - In the implementation block
@property (nonatomic,readonly) BOOL hasAdministrationDate; 
@property (nonatomic,retain) NSData * administrationDate;                                          //@synthesize administrationDate=_administrationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                                //@synthesize statusCoding=_statusCoding - In the implementation block
@property (assign,nonatomic) BOOL hasPatientReported; 
@property (assign,nonatomic) BOOL patientReported;                                                 //@synthesize patientReported=_patientReported - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * routeCodings;                            //@synthesize routeCodings=_routeCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonsCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * reasonsCodings;                      //@synthesize reasonsCodings=_reasonsCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonsNotGivenCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * reasonsNotGivenCodings;              //@synthesize reasonsNotGivenCodings=_reasonsNotGivenCodings - In the implementation block
-(id)dictionaryRepresentation;
-(void)setExpirationDate:(NSData *)arg1 ;
-(BOOL)hasExpirationDate;
-(HDCodableMedicalCodingList *)routeCodings;
-(HDCodableMedicalCodingList *)bodySiteCodings;
-(HDCodableMedicalCodingListList *)reasonsCodings;
-(HDCodableMedicalCodingListList *)reasonsNotGivenCodings;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(NSString *)reaction;
-(BOOL)notGiven;
-(void)mergeFrom:(id)arg1 ;
-(void)setPerformer:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)performer;
-(NSString *)doseNumber;
-(BOOL)patientReported;
-(NSString *)doseQuantity;
-(NSData *)administrationDate;
-(NSData *)expirationDate;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)vaccinationCodings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(BOOL)applyToObject:(id)arg1 ;
-(void)setVaccinationCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setDoseNumber:(NSString *)arg1 ;
-(void)setDoseQuantity:(NSString *)arg1 ;
-(void)setBodySiteCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReaction:(NSString *)arg1 ;
-(void)setNotGiven:(BOOL)arg1 ;
-(void)setAdministrationDate:(NSData *)arg1 ;
-(void)setPatientReported:(BOOL)arg1 ;
-(void)setRouteCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReasonsCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setReasonsNotGivenCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)hasBodySiteCodings;
-(BOOL)hasVaccinationCodings;
-(BOOL)hasDoseNumber;
-(BOOL)hasDoseQuantity;
-(BOOL)hasPerformer;
-(BOOL)hasReaction;
-(void)setHasNotGiven:(BOOL)arg1 ;
-(BOOL)hasNotGiven;
-(BOOL)hasAdministrationDate;
-(void)setHasPatientReported:(BOOL)arg1 ;
-(BOOL)hasPatientReported;
-(BOOL)hasRouteCodings;
-(BOOL)hasReasonsCodings;
-(BOOL)hasReasonsNotGivenCodings;
@end

