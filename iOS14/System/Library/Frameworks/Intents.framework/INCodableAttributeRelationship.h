/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSDictionary, INCodableAttribute, NSArray, INCodableDescription, NSString;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding> {

	NSDictionary* _originalDictionary;
	INCodableAttribute* _parentCodableAttribute;
	unsigned long long _relation;
	NSArray* _values;
	INCodableAttribute* _codableAttribute;

}

@property (setter=_setOriginalDictionary:,nonatomic,retain) NSDictionary * _originalDictionary;              //@synthesize originalDictionary=_originalDictionary - In the implementation block
@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                                 //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,__weak,readonly) INCodableDescription * _codableDescription; 
@property (assign,nonatomic,__weak) INCodableAttribute * parentCodableAttribute;                             //@synthesize parentCodableAttribute=_parentCodableAttribute - In the implementation block
@property (assign,nonatomic) unsigned long long relation;                                                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,retain) NSArray * values;                                                               //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) Class valueClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)dictionaryRepresentation;
-(INCodableDescription *)_codableDescription;
-(void)updateWithDictionary:(id)arg1 ;
-(id)__INCodableDescriptionPredicateNameKey;
-(Class)valueClass;
-(void)_setOriginalDictionary:(id)arg1 ;
-(NSArray *)values;
-(id)__INIntentResponseCodableDescriptionPredicateValuesKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)__INTypeCodableDescriptionPredicateValuesKey;
-(id)__INTypeCodableDescriptionPredicateNameKey;
-(id)__INIntentResponseCodableDescriptionParentNameKey;
-(void)setValues:(NSArray *)arg1 ;
-(id)__INTypeCodableDescriptionPredicateValueKey;
-(NSString *)description;
-(void)setRelation:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)__INCodableDescriptionPredicateValuesKey;
-(id)__INIntentResponseCodableDescriptionPredicateValueKey;
-(id)__INTypeCodableDescriptionParentNameKey;
-(id)__INIntentResponseCodableDescriptionPredicateNameKey;
-(BOOL)compareValue:(id)arg1 ;
-(id)__INCodableDescriptionParentNameKey;
-(NSDictionary *)_originalDictionary;
-(unsigned long long)relation;
-(void)_establishRelationship;
-(id)__INCodableDescriptionPredicateValueKey;
-(id)initWithCodableAttribute:(id)arg1 ;
-(void)setParentCodableAttribute:(INCodableAttribute *)arg1 ;
-(INCodableAttribute *)parentCodableAttribute;
@end

