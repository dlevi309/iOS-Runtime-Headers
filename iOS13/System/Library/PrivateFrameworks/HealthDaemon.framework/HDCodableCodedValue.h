/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableInspectableValue *)value;
-(void)setValue:(HDCodableInspectableValue *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(HDCodableMedicalCodingList *)codings;
-(NSMutableArray *)referenceRanges;
-(void)setCodings:(HDCodableMedicalCodingList *)arg1 ;
-(void)setReferenceRanges:(NSMutableArray *)arg1 ;
-(void)addReferenceRanges:(id)arg1 ;
-(unsigned long long)referenceRangesCount;
-(void)clearReferenceRanges;
-(id)referenceRangesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCodings;
@end

