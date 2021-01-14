/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableObjectAttribute.h>

@class NSString, INCodableDescription;

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute {

	NSString* _objectTypeName;
	NSString* _objectTypeNamespace;
	INCodableDescription* _codableDescription;

}

@property (nonatomic,copy) NSString * objectTypeName;                                       //@synthesize objectTypeName=_objectTypeName - In the implementation block
@property (nonatomic,copy) NSString * objectTypeNamespace;                                  //@synthesize objectTypeNamespace=_objectTypeNamespace - In the implementation block
@property (assign,nonatomic,__weak) INCodableDescription * codableDescription;              //@synthesize codableDescription=_codableDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)valueType;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)objectTypeName;
-(void)setObjectTypeName:(NSString *)arg1 ;
-(NSString *)objectTypeNamespace;
-(void)setObjectTypeNamespace:(NSString *)arg1 ;
-(void)setCodableDescription:(INCodableDescription *)arg1 ;
-(id)__INCodableDescriptionObjectTypeKey;
-(id)__INCodableDescriptionObjectTypeNamespaceKey;
-(id)__INTypeCodableDescriptionObjectTypeKey;
-(id)__INIntentResponseCodableDescriptionObjectTypeNamespaceKey;
-(id)__INTypeCodableDescriptionObjectTypeNamespaceKey;
-(id)__INIntentResponseCodableDescriptionObjectTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueTransformer;
-(Class)_unsafeObjectClass;
-(INCodableDescription *)codableDescription;
-(unsigned long long)hash;
-(Class)objectClass;
-(id)initWithCoder:(id)arg1 ;
-(Class)resolutionResultClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

