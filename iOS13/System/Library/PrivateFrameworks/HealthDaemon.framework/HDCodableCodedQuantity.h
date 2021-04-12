/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCoding, NSString;

@interface HDCodableCodedQuantity : PBCodable <NSCopying> {

	HDCodableMedicalCoding* _comparatorCoding;
	NSString* _rawValue;
	HDCodableMedicalCoding* _unitCoding;

}

@property (nonatomic,readonly) BOOL hasRawValue; 
@property (nonatomic,retain) NSString * rawValue;                                    //@synthesize rawValue=_rawValue - In the implementation block
@property (nonatomic,readonly) BOOL hasComparatorCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * comparatorCoding;              //@synthesize comparatorCoding=_comparatorCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasUnitCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * unitCoding;                    //@synthesize unitCoding=_unitCoding - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)rawValue;
-(void)setRawValue:(NSString *)arg1 ;
-(HDCodableMedicalCoding *)comparatorCoding;
-(HDCodableMedicalCoding *)unitCoding;
-(void)setComparatorCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setUnitCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasRawValue;
-(BOOL)hasComparatorCoding;
-(BOOL)hasUnitCoding;
@end

