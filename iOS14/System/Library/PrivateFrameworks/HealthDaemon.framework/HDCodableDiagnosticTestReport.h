/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingList, NSData, HDCodableMedicalRecord, NSString, HDCodableFHIRIdentifierList, HDCodableMedicalCoding;

@interface HDCodableDiagnosticTestReport : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingList* _diagnosticTestCodingCollection;
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
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                                   //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasDiagnosticTestCodingCollection; 
@property (nonatomic,retain) HDCodableMedicalCodingList * diagnosticTestCodingCollection;              //@synthesize diagnosticTestCodingCollection=_diagnosticTestCodingCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasPanelName; 
@property (nonatomic,retain) NSString * panelName;                                                     //@synthesize panelName=_panelName - In the implementation block
@property (nonatomic,readonly) BOOL hasResults; 
@property (nonatomic,retain) HDCodableFHIRIdentifierList * results;                                    //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveStartDate; 
@property (nonatomic,retain) NSData * effectiveStartDate;                                              //@synthesize effectiveStartDate=_effectiveStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                                    //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveEndDate; 
@property (nonatomic,retain) NSData * effectiveEndDate;                                                //@synthesize effectiveEndDate=_effectiveEndDate - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueDate; 
@property (nonatomic,retain) NSData * issueDate;                                                       //@synthesize issueDate=_issueDate - In the implementation block
-(void)setResults:(HDCodableFHIRIdentifierList *)arg1 ;
-(id)dictionaryRepresentation;
-(HDCodableFHIRIdentifierList *)results;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(void)setPanelName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasResults;
-(NSData *)issueDate;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)effectiveStartDate;
-(NSData *)effectiveEndDate;
-(NSString *)panelName;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)diagnosticTestCodingCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIssueDate:(NSData *)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setDiagnosticTestCodingCollection:(HDCodableMedicalCodingList *)arg1 ;
-(void)setEffectiveStartDate:(NSData *)arg1 ;
-(void)setEffectiveEndDate:(NSData *)arg1 ;
-(BOOL)hasEffectiveStartDate;
-(BOOL)hasIssueDate;
-(BOOL)hasEffectiveEndDate;
-(BOOL)hasDiagnosticTestCodingCollection;
-(BOOL)hasPanelName;
@end

