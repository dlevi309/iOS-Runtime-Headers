/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableInspectableValue, NSString, HDCodableMedicalCodingListList, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, NSData;

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableInspectableValue* _abatement;
	NSString* _asserter;
	HDCodableMedicalCodingListList* _bodySitesCodingCollections;
	HDCodableMedicalCodingListList* _categoriesCodingCollections;
	HDCodableMedicalCoding* _clinicalStatusCoding;
	HDCodableMedicalCodingList* _conditionCodingCollection;
	HDCodableMedicalRecord* _medicalRecord;
	HDCodableInspectableValue* _onset;
	NSData* _recordedDate;
	HDCodableMedicalCodingList* _severityCodingCollection;
	HDCodableMedicalCoding* _verificationStatusCoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                                    //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasConditionCodingCollection; 
@property (nonatomic,retain) HDCodableMedicalCodingList * conditionCodingCollection;                    //@synthesize conditionCodingCollection=_conditionCodingCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoriesCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * categoriesCodingCollections;              //@synthesize categoriesCodingCollections=_categoriesCodingCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasAsserter; 
@property (nonatomic,retain) NSString * asserter;                                                       //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,readonly) BOOL hasAbatement; 
@property (nonatomic,retain) HDCodableInspectableValue * abatement;                                     //@synthesize abatement=_abatement - In the implementation block
@property (nonatomic,readonly) BOOL hasOnset; 
@property (nonatomic,retain) HDCodableInspectableValue * onset;                                         //@synthesize onset=_onset - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordedDate; 
@property (nonatomic,retain) NSData * recordedDate;                                                     //@synthesize recordedDate=_recordedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasClinicalStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * clinicalStatusCoding;                             //@synthesize clinicalStatusCoding=_clinicalStatusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasVerificationStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * verificationStatusCoding;                         //@synthesize verificationStatusCoding=_verificationStatusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasSeverityCodingCollection; 
@property (nonatomic,retain) HDCodableMedicalCodingList * severityCodingCollection;                     //@synthesize severityCodingCollection=_severityCodingCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasBodySitesCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * bodySitesCodingCollections;               //@synthesize bodySitesCodingCollections=_bodySitesCodingCollections - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableInspectableValue *)onset;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(HDCodableMedicalCodingListList *)categoriesCodingCollections;
-(HDCodableMedicalCoding *)clinicalStatusCoding;
-(HDCodableMedicalCoding *)verificationStatusCoding;
-(HDCodableMedicalCodingList *)severityCodingCollection;
-(HDCodableMedicalCodingListList *)bodySitesCodingCollections;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)asserter;
-(HDCodableInspectableValue *)abatement;
-(NSData *)recordedDate;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCodingList *)conditionCodingCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOnset;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMedicalRecord;
-(void)setBodySitesCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setConditionCodingCollection:(HDCodableMedicalCodingList *)arg1 ;
-(void)setCategoriesCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setAsserter:(NSString *)arg1 ;
-(void)setAbatement:(HDCodableInspectableValue *)arg1 ;
-(void)setOnset:(HDCodableInspectableValue *)arg1 ;
-(void)setRecordedDate:(NSData *)arg1 ;
-(void)setClinicalStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setVerificationStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setSeverityCodingCollection:(HDCodableMedicalCodingList *)arg1 ;
-(BOOL)hasConditionCodingCollection;
-(BOOL)hasCategoriesCodingCollections;
-(BOOL)hasAsserter;
-(BOOL)hasAbatement;
-(BOOL)hasRecordedDate;
-(BOOL)hasClinicalStatusCoding;
-(BOOL)hasVerificationStatusCoding;
-(BOOL)hasSeverityCodingCollection;
-(BOOL)hasBodySitesCodingCollections;
@end

