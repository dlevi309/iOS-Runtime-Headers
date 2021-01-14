/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingListList, HDCodableMedicalCodingList, NSData, HDCodableMedicalRecord, HDCodableStringList, HDCodableMedicalCoding, NSString;

@interface HDCodableProcedureRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingListList* _bodySitesCodingCollections;
	HDCodableMedicalCodingList* _categoryCodingCollection;
	HDCodableMedicalCodingListList* _complicationsCodingCollections;
	NSData* _executionEndDate;
	NSData* _executionStartDate;
	HDCodableMedicalCodingListList* _followUpsCodingCollections;
	HDCodableMedicalRecord* _medicalRecord;
	HDCodableMedicalCodingList* _outcomeCodingCollection;
	HDCodableStringList* _performers;
	HDCodableMedicalCodingList* _procedureCodingCollection;
	HDCodableMedicalCodingListList* _reasonCodingCollections;
	HDCodableMedicalCodingListList* _reasonsNotPerformedCodingCollections;
	HDCodableMedicalCoding* _statusCoding;
	BOOL _notPerformed;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                                             //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasProcedureCodingCollection; 
@property (nonatomic,retain) HDCodableMedicalCodingList * procedureCodingCollection;                             //@synthesize procedureCodingCollection=_procedureCodingCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasPerformers; 
@property (nonatomic,retain) HDCodableStringList * performers;                                                   //@synthesize performers=_performers - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutionStartDate; 
@property (nonatomic,retain) NSData * executionStartDate;                                                        //@synthesize executionStartDate=_executionStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutionEndDate; 
@property (nonatomic,retain) NSData * executionEndDate;                                                          //@synthesize executionEndDate=_executionEndDate - In the implementation block
@property (assign,nonatomic) BOOL hasNotPerformed; 
@property (assign,nonatomic) BOOL notPerformed;                                                                  //@synthesize notPerformed=_notPerformed - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                                              //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryCodingCollection; 
@property (nonatomic,retain) HDCodableMedicalCodingList * categoryCodingCollection;                              //@synthesize categoryCodingCollection=_categoryCodingCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * reasonCodingCollections;                           //@synthesize reasonCodingCollections=_reasonCodingCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonsNotPerformedCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * reasonsNotPerformedCodingCollections;              //@synthesize reasonsNotPerformedCodingCollections=_reasonsNotPerformedCodingCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasOutcomeCodingCollection; 
@property (nonatomic,retain) HDCodableMedicalCodingList * outcomeCodingCollection;                               //@synthesize outcomeCodingCollection=_outcomeCodingCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasComplicationsCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * complicationsCodingCollections;                    //@synthesize complicationsCodingCollections=_complicationsCodingCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasFollowUpsCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * followUpsCodingCollections;                        //@synthesize followUpsCodingCollections=_followUpsCodingCollections - In the implementation block
@property (nonatomic,readonly) BOOL hasBodySitesCodingCollections; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * bodySitesCodingCollections;                        //@synthesize bodySitesCodingCollections=_bodySitesCodingCollections - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(HDCodableMedicalCodingListList *)bodySitesCodingCollections;
-(void)mergeFrom:(id)arg1 ;
-(void)setPerformers:(HDCodableStringList *)arg1 ;
-(NSString *)description;
-(NSData *)executionStartDate;
-(NSData *)executionEndDate;
-(BOOL)notPerformed;
-(HDCodableMedicalCodingList *)categoryCodingCollection;
-(HDCodableMedicalCodingListList *)reasonCodingCollections;
-(HDCodableMedicalCodingList *)outcomeCodingCollection;
-(HDCodableMedicalCodingListList *)reasonsNotPerformedCodingCollections;
-(HDCodableMedicalCodingListList *)complicationsCodingCollections;
-(HDCodableMedicalCodingListList *)followUpsCodingCollections;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)procedureCodingCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HDCodableStringList *)performers;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(void)setProcedureCodingCollection:(HDCodableMedicalCodingList *)arg1 ;
-(void)setExecutionStartDate:(NSData *)arg1 ;
-(void)setExecutionEndDate:(NSData *)arg1 ;
-(void)setNotPerformed:(BOOL)arg1 ;
-(void)setCategoryCodingCollection:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReasonCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setReasonsNotPerformedCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setOutcomeCodingCollection:(HDCodableMedicalCodingList *)arg1 ;
-(void)setComplicationsCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setFollowUpsCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setBodySitesCodingCollections:(HDCodableMedicalCodingListList *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)hasBodySitesCodingCollections;
-(BOOL)hasPerformers;
-(BOOL)hasProcedureCodingCollection;
-(BOOL)hasExecutionStartDate;
-(BOOL)hasExecutionEndDate;
-(void)setHasNotPerformed:(BOOL)arg1 ;
-(BOOL)hasNotPerformed;
-(BOOL)hasCategoryCodingCollection;
-(BOOL)hasReasonCodingCollections;
-(BOOL)hasReasonsNotPerformedCodingCollections;
-(BOOL)hasOutcomeCodingCollection;
-(BOOL)hasComplicationsCodingCollections;
-(BOOL)hasFollowUpsCodingCollections;
@end

