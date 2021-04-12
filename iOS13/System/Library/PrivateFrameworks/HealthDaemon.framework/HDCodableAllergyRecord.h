/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicalRecord, HDCodableAllergyReactionList;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingList* _allergyCodings;
	NSString* _asserter;
	HDCodableMedicalCoding* _criticalityCoding;
	NSData* _lastOccurenceDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSData* _onsetDate;
	HDCodableAllergyReactionList* _reactions;
	NSData* _recordedDate;
	HDCodableMedicalCoding* _statusCoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                   //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasAllergyCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * allergyCodings;              //@synthesize allergyCodings=_allergyCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasOnsetDate; 
@property (nonatomic,retain) NSData * onsetDate;                                       //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,readonly) BOOL hasAsserter; 
@property (nonatomic,retain) NSString * asserter;                                      //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,readonly) BOOL hasReactions; 
@property (nonatomic,retain) HDCodableAllergyReactionList * reactions;                 //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,readonly) BOOL hasCriticalityCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * criticalityCoding;               //@synthesize criticalityCoding=_criticalityCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasLastOccurenceDate; 
@property (nonatomic,retain) NSData * lastOccurenceDate;                               //@synthesize lastOccurenceDate=_lastOccurenceDate - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordedDate; 
@property (nonatomic,retain) NSData * recordedDate;                                    //@synthesize recordedDate=_recordedDate - In the implementation block
@property (nonatomic,readonly) BOOL hasStatusCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * statusCoding;                    //@synthesize statusCoding=_statusCoding - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableMedicalCoding *)statusCoding;
-(HDCodableMedicalCodingList *)allergyCodings;
-(HDCodableMedicalCoding *)criticalityCoding;
-(HDCodableAllergyReactionList *)reactions;
-(NSString *)asserter;
-(NSData *)onsetDate;
-(NSData *)recordedDate;
-(NSData *)lastOccurenceDate;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(void)setStatusCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasMedicalRecord;
-(BOOL)hasStatusCoding;
-(HDCodableMedicalRecord *)medicalRecord;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setAsserter:(NSString *)arg1 ;
-(void)setRecordedDate:(NSData *)arg1 ;
-(BOOL)hasAsserter;
-(BOOL)hasRecordedDate;
-(void)setAllergyCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setOnsetDate:(NSData *)arg1 ;
-(void)setReactions:(HDCodableAllergyReactionList *)arg1 ;
-(void)setCriticalityCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setLastOccurenceDate:(NSData *)arg1 ;
-(BOOL)hasOnsetDate;
-(BOOL)hasAllergyCodings;
-(BOOL)hasReactions;
-(BOOL)hasCriticalityCoding;
-(BOOL)hasLastOccurenceDate;
@end

