/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding> {

	NSString* _originalTypeName;
	NSString* _typeName;

}

@property (setter=_setOriginalTypeName:,nonatomic,copy) NSString * _originalTypeName;              //@synthesize originalTypeName=_originalTypeName - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,readonly) NSValueTransformer * valueTransformer; 
@property (nonatomic,copy,readonly) NSString * className; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)valueType;
-(void)updateWithDictionary:(id)arg1 ;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(NSString *)className;
-(void)setTypeName:(NSString *)arg1 ;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(NSString *)typeName;
-(void)setClassName:(NSString *)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(id)__INTypeCodableDescriptionKey;
-(NSString *)_originalTypeName;
-(Class)_relationshipValueTransformerClass;
-(void)_setOriginalTypeName:(id)arg1 ;
-(unsigned long long)hash;
-(Class)objectClass;
-(id)initWithCoder:(id)arg1 ;
-(Class)resolutionResultClass;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

