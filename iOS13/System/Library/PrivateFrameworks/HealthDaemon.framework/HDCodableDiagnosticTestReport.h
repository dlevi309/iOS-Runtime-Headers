/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingList, NSData, HDCodableMedicalRecord, NSString, HDCodableFHIRIdentifierList, HDCodableMedicalCoding;

@interface HDCodableDiagnosticTestReport : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingList* _diagnosticTestCodings;
	NSData* _effectiveEndDate;
	NSData* _effectiveStartDate;
	NSData* _issueDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSString* _panelName;
	HDCodableFHIRIdentifierList* _results;
	HDCodableMedicalCoding* _statusCoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                          //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasDiagnosticTestCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * diagnosticTestCodings;              //@synthesize diagnosticTestCodings=_diagnosticTestCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasPanelName; 
@property (nonatomic,retain) NSString * panelName;                                            //@synthesize panelName=_panelName - In the implementation block
@property (nonatomic,readonly) BOOL hasResults; 
@property (nonatomic,retain) HDCodableFHIRIdentifierList * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveStartDate; 
@property (nonatomic,retain) NSData * effectiveStartDate;                                     //@synthesize effectiveStartDate=_effectiveStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                           //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveEndDate; 
@property (nonatomic,retain) NSData * effectiveEndDate;                                       //@synthesize effectiveEndDate=_effectiveEndDate - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueDate; 
@property (nonatomic,retain) NSData * issueDate;                                              //@synthesize issueDate=_issueDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableFHIRIdentifierList *)results;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setResults:(HDCodableFHIRIdentifierList *)arg1 ;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)diagnosticTestCodings;
-(NSData *)effectiveStartDate;
-(NSData *)issueDate;
-(NSData *)effectiveEndDate;
-(NSString *)panelName;
-(BOOL)hasResults;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(HDCodableMedicalRecord *)medicalRecord;
-(BOOL)applyToObject:(id)arg1 ;
-(void)setDiagnosticTestCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setPanelName:(NSString *)arg1 ;
-(void)setEffectiveStartDate:(NSData *)arg1 ;
-(void)setEffectiveEndDate:(NSData *)arg1 ;
-(void)setIssueDate:(NSData *)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)hasDiagnosticTestCodings;
-(BOOL)hasEffectiveStartDate;
-(BOOL)hasIssueDate;
-(BOOL)hasEffectiveEndDate;
-(BOOL)hasPanelName;
@end

