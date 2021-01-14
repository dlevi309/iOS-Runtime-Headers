/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDate;

@interface PLSingleQuery : PBCodable <NSCopying> {

	int _comparator;
	NSData* _firstValue;
	int _key;
	NSData* _secondValue;
	int _unit;
	int _valueType;
	SCD_Struct_PL14 _has;

}

@property (assign,nonatomic) double doubleValue; 
@property (assign,nonatomic) double secondDoubleValue; 
@property (assign,nonatomic) long long integerValue; 
@property (assign,nonatomic) long long secondIntegerValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (nonatomic,retain) NSString * secondStringValue; 
@property (nonatomic,retain) NSDate * dateValue; 
@property (nonatomic,retain) NSDate * secondDateValue; 
@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) int key;                                   //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValueType; 
@property (assign,nonatomic) int valueType;                             //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstValue; 
@property (nonatomic,retain) NSData * firstValue;                       //@synthesize firstValue=_firstValue - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondValue; 
@property (nonatomic,retain) NSData * secondValue;                      //@synthesize secondValue=_secondValue - In the implementation block
@property (assign,nonatomic) BOOL hasComparator; 
@property (assign,nonatomic) int comparator;                            //@synthesize comparator=_comparator - In the implementation block
@property (assign,nonatomic) BOOL hasUnit; 
@property (assign,nonatomic) int unit;                                  //@synthesize unit=_unit - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(int)valueType;
-(NSDate *)dateValue;
-(long long)integerValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(id)logDescription;
-(BOOL)hasUnit;
-(void)setComparator:(int)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasValueType:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)stringValue;
-(void)setBoolValue:(BOOL)arg1 ;
-(int)comparator;
-(void)setHasUnit:(BOOL)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setIntegerValue:(long long)arg1 ;
-(NSData *)firstValue;
-(int)unit;
-(double)secondDoubleValue;
-(void)setSecondDoubleValue:(double)arg1 ;
-(long long)secondIntegerValue;
-(void)setSecondIntegerValue:(long long)arg1 ;
-(NSString *)secondStringValue;
-(void)setSecondStringValue:(NSString *)arg1 ;
-(NSDate *)secondDateValue;
-(void)setSecondDateValue:(NSDate *)arg1 ;
-(int)key;
-(BOOL)hasFirstValue;
-(BOOL)hasSecondValue;
-(int)migratedComparator;
-(void)setValueAndType:(id)arg1 ;
-(NSData *)secondValue;
-(void)setSecondValue:(NSData *)arg1 ;
-(void)setFirstValue:(NSData *)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(void)setHasComparator:(BOOL)arg1 ;
-(BOOL)hasComparator;
-(BOOL)hasValueType;
-(void)setValueType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUnit:(int)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

