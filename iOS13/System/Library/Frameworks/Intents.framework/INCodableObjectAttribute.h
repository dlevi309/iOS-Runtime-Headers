/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
-(long long)valueType;
-(Class)objectClass;
-(void)setClassName:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)_originalTypeName;
-(Class)resolutionResultClass;
-(NSValueTransformer *)valueTransformer;
-(Class)_relationshipValueTransformerClass;
-(void)_setOriginalTypeName:(id)arg1 ;
@end

