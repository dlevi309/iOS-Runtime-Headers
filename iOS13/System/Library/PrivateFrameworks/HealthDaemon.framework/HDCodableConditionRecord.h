/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableInspectableValue, NSString, HDCodableMedicalCodingListList, HDCodableMedicalCodingList, HDCodableMedicalCoding, HDCodableMedicalRecord, NSData;

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableInspectableValue* _abatement;
	NSString* _asserter;
	HDCodableMedicalCodingListList* _bodySitesCodings;
	HDCodableMedicalCodingList* _categoryCodings;
	HDCodableMedicalCoding* _clinicalStatusCoding;
	HDCodableMedicalCodingList* _conditionCodings;
	HDCodableMedicalRecord* _medicalRecord;
	HDCodableInspectableValue* _onset;
	NSData* _recordedDate;
	HDCodableMedicalCodingList* _severityCodings;
	HDCodableMedicalCoding* _verificationStatusCoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                         //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasConditionCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * conditionCodings;                  //@synthesize conditionCodings=_conditionCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * categoryCodings;                   //@synthesize categoryCodings=_categoryCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasAsserter; 
@property (nonatomic,retain) NSString * asserter;                                            //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,readonly) BOOL hasAbatement; 
@property (nonatomic,retain) HDCodableInspectableValue * abatement;                          //@synthesize abatement=_abatement - In the implementation block
@property (nonatomic,readonly) BOOL hasOnset; 
@property (nonatomic,retain) HDCodableInspectableValue * onset;                              //@synthesize onset=_onset - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordedDate; 
@property (nonatomic,retain) NSData * recordedDate;                                          //@synthesize recordedDate=_recordedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasClinicalStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * clinicalStatusCoding;                  //@synthesize clinicalStatusCoding=_clinicalStatusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasVerificationStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * verificationStatusCoding;              //@synthesize verificationStatusCoding=_verificationStatusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasSeverityCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * severityCodings;                   //@synthesize severityCodings=_severityCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasBodySitesCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * bodySitesCodings;              //@synthesize bodySitesCodings=_bodySitesCodings - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableMedicalCodingList *)conditionCodings;
-(HDCodableMedicalCodingList *)categoryCodings;
-(HDCodableMedicalCoding *)clinicalStatusCoding;
-(HDCodableMedicalCoding *)verificationStatusCoding;
-(HDCodableMedicalCodingList *)severityCodings;
-(HDCodableMedicalCodingListList *)bodySitesCodings;
-(NSString *)asserter;
-(HDCodableInspectableValue *)abatement;
-(HDCodableInspectableValue *)onset;
-(NSData *)recordedDate;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(BOOL)hasMedicalRecord;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setCategoryCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setBodySitesCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setConditionCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setAsserter:(NSString *)arg1 ;
-(void)setAbatement:(HDCodableInspectableValue *)arg1 ;
-(void)setOnset:(HDCodableInspectableValue *)arg1 ;
-(void)setRecordedDate:(NSData *)arg1 ;
-(void)setClinicalStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setVerificationStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setSeverityCodings:(HDCodableMedicalCodingList *)arg1 ;
-(BOOL)hasConditionCodings;
-(BOOL)hasCategoryCodings;
-(BOOL)hasAsserter;
-(BOOL)hasAbatement;
-(BOOL)hasOnset;
-(BOOL)hasRecordedDate;
-(BOOL)hasClinicalStatusCoding;
-(BOOL)hasVerificationStatusCoding;
-(BOOL)hasSeverityCodings;
-(BOOL)hasBodySitesCodings;
@end

