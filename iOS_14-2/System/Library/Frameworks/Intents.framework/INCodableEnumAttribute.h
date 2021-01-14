/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INCodableEnum, NSString;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding> {

	INCodableEnum* _codableEnum;
	NSString* _enumNamespace;

}

@property (nonatomic,retain) INCodableEnum * codableEnum;              //@synthesize codableEnum=_codableEnum - In the implementation block
@property (nonatomic,copy) NSString * enumNamespace;                   //@synthesize enumNamespace=_enumNamespace - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)valueType;
-(void)updateWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)_relationshipValueTransformerClass;
-(INCodableEnum *)codableEnum;
-(id)valueForIndex:(unsigned long long)arg1 ;
-(id)valueWithName:(id)arg1 ;
-(void)setCodableEnum:(INCodableEnum *)arg1 ;
-(NSString *)enumNamespace;
-(void)setEnumNamespace:(NSString *)arg1 ;
-(id)__INCodableDescriptionEnumTypeKey;
-(id)__INCodableDescriptionEnumTypeNamespaceKey;
-(id)__INTypeCodableDescriptionEnumTypeNamespaceKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeKey;
-(id)__INTypeCodableDescriptionEnumTypeKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeNamespaceKey;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(Class)resolutionResultClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

