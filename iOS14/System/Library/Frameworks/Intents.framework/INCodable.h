/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <NSCopying> {

	INCodableDescription* _objectDescription;
	NSMutableDictionary* _customValueForKeyDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * customValueForKeyDictionary;                                    //@synthesize customValueForKeyDictionary=_customValueForKeyDictionary - In the implementation block
@property (setter=_setObjectDescription:,nonatomic,retain) INCodableDescription * _objectDescription;              //@synthesize objectDescription=_objectDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)_nonNilRepeatedAttributes;
-(void)_setUInt32Value:(unsigned)arg1 forAttribute:(id)arg2 ;
-(id)initWithCodableDescription:(id)arg1 data:(id)arg2 ;
-(void)_setInt64Value:(long long)arg1 forAttribute:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)_doubleValueForAttribute:(id)arg1 ;
-(id)_valueForAttribute:(id)arg1 ;
-(BOOL)_isStringAttribute:(id)arg1 equalTo:(id)arg2 ;
-(id)_dictionaryRepresentationWithNullValues:(BOOL)arg1 ;
-(void)_setObject:(id)arg1 forAttribute:(id)arg2 ;
-(long long)_int64ValueForAttribute:(id)arg1 ;
-(id)data;
-(void)setNilValueForAllKeys;
-(void)_setBoolValue:(BOOL)arg1 forAttribute:(id)arg2 ;
-(void)setCustomValueForKeyDictionary:(NSMutableDictionary *)arg1 ;
-(void)_setInt32Value:(int)arg1 forAttribute:(id)arg2 ;
-(BOOL)_writeTo:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(INCodableDescription *)_objectDescription;
-(void)_setValue:(void*)arg1 forAttribute:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isAttribute:(id)arg1 equalTo:(id)arg2 ;
-(unsigned)_UInt32ValueForAttribute:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)_setFloatValue:(float)arg1 forAttribute:(id)arg2 ;
-(unsigned long long)_UInt64ValueForAttribute:(id)arg1 ;
-(void)_setObjectDescription:(id)arg1 ;
-(BOOL)_boolValueForAttribute:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg1 ;
-(int)_int32ValueForAttribute:(id)arg1 ;
-(BOOL)_readFrom:(id)arg1 error:(id*)arg2 ;
-(BOOL)isValidKey:(id)arg1 ;
-(NSMutableDictionary *)customValueForKeyDictionary;
-(id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_nonNilAttributes;
-(id)_copyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
-(id)_dataWithError:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(float)_floatValueForAttribute:(id)arg1 ;
-(void)_setUInt64Value:(unsigned long long)arg1 forAttribute:(id)arg2 ;
-(void)_setDoubleValue:(double)arg1 forAttribute:(id)arg2 ;
@end

