/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ACProtobufVariableValueList, NSData, ACProtobufDate, ACProtobufVariableValueDictionary, NSString, ACProtobufURL, ACProtobufUUID;

@interface ACProtobufVariableValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	unsigned long long _unsignedIntegerValue;
	ACProtobufVariableValueList* _arrayValue;
	NSData* _dataValue;
	ACProtobufDate* _dateValue;
	ACProtobufVariableValueDictionary* _dictionaryValue;
	ACProtobufVariableValueList* _setValue;
	NSString* _stringValue;
	ACProtobufURL* _urlValue;
	ACProtobufUUID* _uuidValue;
	SCD_Struct_AC1 _has;

}

@property (nonatomic,retain) id object; 
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                           //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                                           //@synthesize integerValue=_integerValue - In the implementation block
@property (assign,nonatomic) BOOL hasUnsignedIntegerValue; 
@property (assign,nonatomic) unsigned long long unsignedIntegerValue;                          //@synthesize unsignedIntegerValue=_unsignedIntegerValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                               //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                                               //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidValue; 
@property (nonatomic,retain) ACProtobufUUID * uuidValue;                                       //@synthesize uuidValue=_uuidValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) ACProtobufDate * dateValue;                                       //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlValue; 
@property (nonatomic,retain) ACProtobufURL * urlValue;                                         //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) BOOL hasArrayValue; 
@property (nonatomic,retain) ACProtobufVariableValueList * arrayValue;                         //@synthesize arrayValue=_arrayValue - In the implementation block
@property (nonatomic,readonly) BOOL hasSetValue; 
@property (nonatomic,retain) ACProtobufVariableValueList * setValue;                           //@synthesize setValue=_setValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDictionaryValue; 
@property (nonatomic,retain) ACProtobufVariableValueDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
-(id)dictionaryRepresentation;
-(ACProtobufDate *)dateValue;
-(long long)integerValue;
-(ACProtobufURL *)urlValue;
-(ACProtobufVariableValueList *)setValue;
-(ACProtobufUUID *)uuidValue;
-(double)doubleValue;
-(NSData *)dataValue;
-(void)setDataValue:(NSData *)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)hasUrlValue;
-(BOOL)hasSetValue;
-(ACProtobufVariableValueList *)arrayValue;
-(BOOL)_setObject:(id)arg1 ;
-(BOOL)hasDataValue;
-(void)setUrlValue:(ACProtobufURL *)arg1 ;
-(void)setSetValue:(ACProtobufVariableValueList *)arg1 ;
-(BOOL)hasUuidValue;
-(void)setUuidValue:(ACProtobufUUID *)arg1 ;
-(BOOL)hasArrayValue;
-(void)mergeFrom:(id)arg1 ;
-(id)object;
-(BOOL)hasIntegerValue;
-(void)setHasUnsignedIntegerValue:(BOOL)arg1 ;
-(NSString *)stringValue;
-(void)setArrayValue:(ACProtobufVariableValueList *)arg1 ;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 ;
-(id)initWithObjectValue:(id)arg1 ;
-(void)setDictionaryValue:(ACProtobufVariableValueDictionary *)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(BOOL)hasDictionaryValue;
-(BOOL)hasUnsignedIntegerValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setIntegerValue:(long long)arg1 ;
-(unsigned long long)unsignedIntegerValue;
-(void)setDateValue:(ACProtobufDate *)arg1 ;
-(unsigned long long)hash;
-(ACProtobufVariableValueDictionary *)dictionaryValue;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDateValue;
@end

