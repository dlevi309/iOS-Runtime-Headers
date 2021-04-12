/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableMedicalCodingList;

@interface HDCodableCoverageClassification : PBCodable <NSCopying> {

	NSString* _name;
	HDCodableMedicalCodingList* _typeCodings;
	NSString* _value;

}

@property (nonatomic,readonly) BOOL hasTypeCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * typeCodings;              //@synthesize typeCodings=_typeCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasName;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(HDCodableMedicalCodingList *)typeCodings;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTypeCodings:(HDCodableMedicalCodingList *)arg1 ;
-(BOOL)hasTypeCodings;
@end

