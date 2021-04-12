/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <NSCopying> {

	BOOL __encodeLegacyGloryData;
	INCodableDescription* _objectDescription;
	NSMutableDictionary* _customValueForKeyDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * customValueForKeyDictionary;                                    //@synthesize customValueForKeyDictionary=_customValueForKeyDictionary - In the implementation block
@property (setter=_setObjectDescription:,nonatomic,retain) INCodableDescription * _objectDescription;              //@synthesize objectDescription=_objectDescription - In the implementation block
@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;                        //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)_valueForAttribute:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(INCodableDescription *)_objectDescription;
-(id)initWithCodableDescription:(id)arg1 data:(id)arg2 ;
-(id)_initWithCodableDescription:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setNilValueForAllKeys;
-(BOOL)isValidKey:(id)arg1 ;
-(id)_dictionaryRepresentationWithNullValues:(BOOL)arg1 ;
-(BOOL)_isAttribute:(id)arg1 equalTo:(id)arg2 ;
-(BOOL)_isStringAttribute:(id)arg1 equalTo:(id)arg2 ;
-(id)_nonNilAttributes;
-(id)_nonNilRepeatedAttributes;
-(BOOL)_readFrom:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeTo:(id)arg1 error:(id*)arg2 ;
-(id)_dataWithError:(id*)arg1 ;
-(void)_setEmptyArrayForNonNilRepeatedAttributes:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 error:(id*)arg2 ;
-(void)_setObject:(id)arg1 forAttribute:(id)arg2 ;
-(void)_setValue:(void*)arg1 forAttribute:(id)arg2 ;
-(void)_setDoubleValue:(double)arg1 forAttribute:(id)arg2 ;
-(void)_setFloatValue:(float)arg1 forAttribute:(id)arg2 ;
-(void)_setInt32Value:(int)arg1 forAttribute:(id)arg2 ;
-(void)_setInt64Value:(long long)arg1 forAttribute:(id)arg2 ;
-(void)_setUInt32Value:(unsigned)arg1 forAttribute:(id)arg2 ;
-(void)_setUInt64Value:(unsigned long long)arg1 forAttribute:(id)arg2 ;
-(void)_setBoolValue:(BOOL)arg1 forAttribute:(id)arg2 ;
-(double)_doubleValueForAttribute:(id)arg1 ;
-(float)_floatValueForAttribute:(id)arg1 ;
-(int)_int32ValueForAttribute:(id)arg1 ;
-(long long)_int64ValueForAttribute:(id)arg1 ;
-(unsigned)_UInt32ValueForAttribute:(id)arg1 ;
-(unsigned long long)_UInt64ValueForAttribute:(id)arg1 ;
-(BOOL)_boolValueForAttribute:(id)arg1 ;
-(id)_valueForAttribute:(id)arg1 ofClass:(Class)arg2 ;
-(void)_setObjectDescription:(id)arg1 ;
-(NSMutableDictionary *)customValueForKeyDictionary;
-(void)setCustomValueForKeyDictionary:(NSMutableDictionary *)arg1 ;
@end

