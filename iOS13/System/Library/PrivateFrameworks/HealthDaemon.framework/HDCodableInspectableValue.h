/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCodedQuantity, HDCodableCodedValueCollection, HDCodableMedicalCodingList, HDCodableDateComponents, HDCodableMedicalDateInterval, HDCodableMedicalDate, HDCodableRatioValue, NSString;

@interface HDCodableInspectableValue : PBCodable <NSCopying> {

	HDCodableCodedQuantity* _codedQuantityValue;
	HDCodableCodedValueCollection* _codedValueCollection;
	HDCodableMedicalCodingList* _dataAbsentReasonCodingsValue;
	HDCodableDateComponents* _dateComponentsValue;
	HDCodableMedicalCodingList* _medicalCodingValue;
	HDCodableMedicalDateInterval* _medicalDateIntervalValue;
	HDCodableMedicalDate* _medicalDateValue;
	HDCodableRatioValue* _ratioValue;
	NSString* _stringValue;

}

@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasRatioValue; 
@property (nonatomic,retain) HDCodableRatioValue * ratioValue;                                       //@synthesize ratioValue=_ratioValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateComponentsValue; 
@property (nonatomic,retain) HDCodableDateComponents * dateComponentsValue;                          //@synthesize dateComponentsValue=_dateComponentsValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCodedQuantityValue; 
@property (nonatomic,retain) HDCodableCodedQuantity * codedQuantityValue;                            //@synthesize codedQuantityValue=_codedQuantityValue - In the implementation block
@property (nonatomic,readonly) BOOL hasMedicalCodingValue; 
@property (nonatomic,retain) HDCodableMedicalCodingList * medicalCodingValue;                        //@synthesize medicalCodingValue=_medicalCodingValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCodedValueCollection; 
@property (nonatomic,retain) HDCodableCodedValueCollection * codedValueCollection;                   //@synthesize codedValueCollection=_codedValueCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasMedicalDateValue; 
@property (nonatomic,retain) HDCodableMedicalDate * medicalDateValue;                                //@synthesize medicalDateValue=_medicalDateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasMedicalDateIntervalValue; 
@property (nonatomic,retain) HDCodableMedicalDateInterval * medicalDateIntervalValue;                //@synthesize medicalDateIntervalValue=_medicalDateIntervalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDataAbsentReasonCodingsValue; 
@property (nonatomic,retain) HDCodableMedicalCodingList * dataAbsentReasonCodingsValue;              //@synthesize dataAbsentReasonCodingsValue=_dataAbsentReasonCodingsValue - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(HDCodableCodedQuantity *)codedQuantityValue;
-(HDCodableCodedValueCollection *)codedValueCollection;
-(HDCodableRatioValue *)ratioValue;
-(HDCodableMedicalDate *)medicalDateValue;
-(HDCodableMedicalDateInterval *)medicalDateIntervalValue;
-(HDCodableDateComponents *)dateComponentsValue;
-(BOOL)hasRatioValue;
-(BOOL)hasMedicalDateValue;
-(BOOL)hasDateComponentsValue;
-(BOOL)hasCodedQuantityValue;
-(BOOL)hasMedicalCodingValue;
-(HDCodableMedicalCodingList *)medicalCodingValue;
-(BOOL)hasCodedValueCollection;
-(void)setRatioValue:(HDCodableRatioValue *)arg1 ;
-(void)setMedicalDateValue:(HDCodableMedicalDate *)arg1 ;
-(void)setMedicalDateIntervalValue:(HDCodableMedicalDateInterval *)arg1 ;
-(void)setDateComponentsValue:(HDCodableDateComponents *)arg1 ;
-(void)setCodedQuantityValue:(HDCodableCodedQuantity *)arg1 ;
-(void)setMedicalCodingValue:(HDCodableMedicalCodingList *)arg1 ;
-(void)setCodedValueCollection:(HDCodableCodedValueCollection *)arg1 ;
-(void)setDataAbsentReasonCodingsValue:(HDCodableMedicalCodingList *)arg1 ;
-(BOOL)hasMedicalDateIntervalValue;
-(BOOL)hasDataAbsentReasonCodingsValue;
-(HDCodableMedicalCodingList *)dataAbsentReasonCodingsValue;
@end

