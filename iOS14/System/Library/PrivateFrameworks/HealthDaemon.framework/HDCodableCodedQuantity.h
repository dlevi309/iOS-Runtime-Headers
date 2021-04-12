/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)rawValue;
-(void)setRawValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCoding *)unitCoding;
-(HDCodableMedicalCoding *)comparatorCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setComparatorCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setUnitCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasRawValue;
-(BOOL)hasComparatorCoding;
-(BOOL)hasUnitCoding;
@end

