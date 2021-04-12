/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_PL16 _has;

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
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)key;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(long long)integerValue;
-(int)unit;
-(id)dictionaryRepresentation;
-(int)comparator;
-(void)setKey:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(int)valueType;
-(BOOL)hasKey;
-(void)setBoolValue:(BOOL)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(void)setValueType:(int)arg1 ;
-(BOOL)hasValueType;
-(void)setComparator:(int)arg1 ;
-(id)logDescription;
-(BOOL)hasFirstValue;
-(NSData *)firstValue;
-(BOOL)hasSecondValue;
-(NSData *)secondValue;
-(BOOL)hasUnit;
-(void)setUnit:(int)arg1 ;
-(void)setSecondValue:(NSData *)arg1 ;
-(void)setFirstValue:(NSData *)arg1 ;
-(void)setHasUnit:(BOOL)arg1 ;
-(void)setHasValueType:(BOOL)arg1 ;
-(double)secondDoubleValue;
-(void)setSecondDoubleValue:(double)arg1 ;
-(long long)secondIntegerValue;
-(void)setSecondIntegerValue:(long long)arg1 ;
-(NSString *)secondStringValue;
-(void)setSecondStringValue:(NSString *)arg1 ;
-(NSDate *)secondDateValue;
-(void)setSecondDateValue:(NSDate *)arg1 ;
-(int)migratedComparator;
-(void)setValueAndType:(id)arg1 ;
-(void)setHasComparator:(BOOL)arg1 ;
-(BOOL)hasComparator;
@end

