/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingList, NSMutableArray, HDCodableInspectableValue;

@interface HDCodableCodedValue : PBCodable <NSCopying> {

	HDCodableMedicalCodingList* _codings;
	NSMutableArray* _referenceRanges;
	HDCodableInspectableValue* _value;

}

@property (nonatomic,readonly) BOOL hasCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * codings;              //@synthesize codings=_codings - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) HDCodableInspectableValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * referenceRanges;                  //@synthesize referenceRanges=_referenceRanges - In the implementation block
+(Class)referenceRangesType;
-(id)dictionaryRepresentation;
-(BOOL)hasValue;
-(HDCodableMedicalCodingList *)codings;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(HDCodableInspectableValue *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)referenceRanges;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableInspectableValue *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReferenceRanges:(NSMutableArray *)arg1 ;
-(void)addReferenceRanges:(id)arg1 ;
-(unsigned long long)referenceRangesCount;
-(void)clearReferenceRanges;
-(id)referenceRangesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCodings;
@end

