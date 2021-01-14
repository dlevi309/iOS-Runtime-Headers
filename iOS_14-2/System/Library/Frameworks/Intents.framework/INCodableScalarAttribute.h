/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INCodableScalarAttribute : INCodableAttribute <NSSecureCoding> {

	long long _type;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)valueType;
-(void)updateWithDictionary:(id)arg1 ;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(void)setType:(long long)arg1 ;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionKey;
-(Class)_relationshipValueTransformerClass;
-(id)initWithPropertyName:(id)arg1 type:(long long)arg2 ;
-(long long)type;
-(unsigned long long)hash;
-(Class)objectClass;
-(id)initWithCoder:(id)arg1 ;
-(Class)resolutionResultClass;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

