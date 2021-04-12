/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)valueType;
-(Class)objectClass;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(Class)resolutionResultClass;
-(id)valueTransformer;
-(INCodableDescription *)codableDescription;
-(Class)_unsafeObjectClass;
-(NSString *)objectTypeName;
-(void)setObjectTypeName:(NSString *)arg1 ;
-(NSString *)objectTypeNamespace;
-(void)setObjectTypeNamespace:(NSString *)arg1 ;
-(void)setCodableDescription:(INCodableDescription *)arg1 ;
@end

