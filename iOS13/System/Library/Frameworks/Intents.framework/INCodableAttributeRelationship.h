/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSDictionary, INCodableAttribute, NSArray, NSString;

@interface INCodableAttributeRelationship : NSObject <NSSecureCoding, INCodableCoding> {

	NSDictionary* _originalDictionary;
	INCodableAttribute* _parentCodableAttribute;
	unsigned long long _relation;
	NSArray* _values;
	INCodableAttribute* _codableAttribute;

}

@property (setter=_setOriginalDictionary:,nonatomic,retain) NSDictionary * _originalDictionary;              //@synthesize originalDictionary=_originalDictionary - In the implementation block
@property (nonatomic,__weak,readonly) INCodableAttribute * codableAttribute;                                 //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (assign,nonatomic,__weak) INCodableAttribute * parentCodableAttribute;                             //@synthesize parentCodableAttribute=_parentCodableAttribute - In the implementation block
@property (assign,nonatomic) unsigned long long relation;                                                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,retain) NSArray * values;                                                               //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) Class valueClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)dictionaryRepresentation;
-(unsigned long long)relation;
-(void)setRelation:(unsigned long long)arg1 ;
-(BOOL)compareValue:(id)arg1 ;
-(Class)valueClass;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(id)initWithCodableAttribute:(id)arg1 ;
-(NSDictionary *)_originalDictionary;
-(void)_establishRelationship;
-(void)_setOriginalDictionary:(id)arg1 ;
-(INCodableAttribute *)parentCodableAttribute;
-(void)setParentCodableAttribute:(INCodableAttribute *)arg1 ;
@end

