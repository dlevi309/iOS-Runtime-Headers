/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingListList, HDCodableMedicalCodingList, NSData, HDCodableMedicalRecord, HDCodableStringList, HDCodableMedicalCoding, NSString;

@interface HDCodableProcedureRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingListList* _bodySitesCodings;
	HDCodableMedicalCodingList* _categoryCodings;
	HDCodableMedicalCodingListList* _complicationsCodings;
	NSData* _executionEndDate;
	NSData* _executionStartDate;
	HDCodableMedicalCodingListList* _followUpsCodings;
	HDCodableMedicalRecord* _medicalRecord;
	HDCodableMedicalCodingList* _outcomeCodings;
	HDCodableStringList* _performers;
	HDCodableMedicalCodingList* _procedureCodings;
	HDCodableMedicalCodingList* _reasonCodings;
	HDCodableMedicalCodingListList* _reasonsNotPerformedCodings;
	HDCodableMedicalCoding* _statusCoding;
	BOOL _notPerformed;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                                   //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasProcedureCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * procedureCodings;                            //@synthesize procedureCodings=_procedureCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasPerformers; 
@property (nonatomic,retain) HDCodableStringList * performers;                                         //@synthesize performers=_performers - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutionStartDate; 
@property (nonatomic,retain) NSData * executionStartDate;                                              //@synthesize executionStartDate=_executionStartDate - In the implementation block
@property (nonatomic,readonly) BOOL hasExecutionEndDate; 
@property (nonatomic,retain) NSData * executionEndDate;                                                //@synthesize executionEndDate=_executionEndDate - In the implementation block
@property (assign,nonatomic) BOOL hasNotPerformed; 
@property (assign,nonatomic) BOOL notPerformed;                                                        //@synthesize notPerformed=_notPerformed - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                                    //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoryCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * categoryCodings;                             //@synthesize categoryCodings=_categoryCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * reasonCodings;                               //@synthesize reasonCodings=_reasonCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasReasonsNotPerformedCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * reasonsNotPerformedCodings;              //@synthesize reasonsNotPerformedCodings=_reasonsNotPerformedCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasOutcomeCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * outcomeCodings;                              //@synthesize outcomeCodings=_outcomeCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasComplicationsCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * complicationsCodings;                    //@synthesize complicationsCodings=_complicationsCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasFollowUpsCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * followUpsCodings;                        //@synthesize followUpsCodings=_followUpsCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasBodySitesCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingListList * bodySitesCodings;                        //@synthesize bodySitesCodings=_bodySitesCodings - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableStringList *)performers;
-(void)setPerformers:(HDCodableStringList *)arg1 ;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)reasonCodings;
-(HDCodableMedicalCodingList *)procedureCodings;
-(HDCodableMedicalCodingList *)categoryCodings;
-(HDCodableMedicalCodingListList *)bodySitesCodings;
-(HDCodableMedicalCodingListList *)reasonsNotPerformedCodings;
-(HDCodableMedicalCodingList *)outcomeCodings;
-(HDCodableMedicalCodingListList *)complicationsCodings;
-(HDCodableMedicalCodingListList *)followUpsCodings;
-(NSData *)executionStartDate;
-(NSData *)executionEndDate;
-(BOOL)notPerformed;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(HDCodableMedicalRecord *)medicalRecord;
-(void)setProcedureCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setExecutionStartDate:(NSData *)arg1 ;
-(void)setExecutionEndDate:(NSData *)arg1 ;
-(void)setNotPerformed:(BOOL)arg1 ;
-(void)setCategoryCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReasonCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReasonsNotPerformedCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setOutcomeCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setComplicationsCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setFollowUpsCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(void)setBodySitesCodings:(HDCodableMedicalCodingListList *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)hasCategoryCodings;
-(BOOL)hasBodySitesCodings;
-(BOOL)hasPerformers;
-(BOOL)hasReasonCodings;
-(BOOL)hasProcedureCodings;
-(BOOL)hasExecutionStartDate;
-(BOOL)hasExecutionEndDate;
-(void)setHasNotPerformed:(BOOL)arg1 ;
-(BOOL)hasNotPerformed;
-(BOOL)hasReasonsNotPerformedCodings;
-(BOOL)hasOutcomeCodings;
-(BOOL)hasComplicationsCodings;
-(BOOL)hasFollowUpsCodings;
@end

