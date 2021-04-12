/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSMutableDictionary, INCodableLocalizationTable, NSString, INSchema, NSDictionary, NSOrderedSet, NSArray;

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding> {

	NSMutableDictionary* _attributesByName;
	INCodableLocalizationTable* _localizationTable;
	INCodableLocalizationTable* _customLocalizationTable;
	NSString* _attributeKeyPrefix;
	NSString* _attributesKeyPrefix;
	NSString* _attributeMetadataKeyPrefix;
	NSString* _attributePromptDialogKeyPrefix;
	NSString* _attributeRelationshipKeyPrefix;
	NSString* _attributeUnsupportedReasonKeyPrefix;
	NSMutableDictionary* _dictionaryKeysForCacheGroup;
	NSString* _attributeTagKey;
	NSString* _attributeDisplayPriorityKey;
	INSchema* _schema;
	NSString* _intentDefinitionNamespace;
	NSString* _className;
	NSString* _typeName;
	NSDictionary* _attributes;
	NSOrderedSet* _displayOrderedAttributes;
	NSString* _semanticRoot;

}

@property (nonatomic,retain) NSMutableDictionary * _dictionaryKeysForCacheGroup;                                                   //@synthesize dictionaryKeysForCacheGroup=_dictionaryKeysForCacheGroup - In the implementation block
@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;                          //@synthesize localizationTable=_localizationTable - In the implementation block
@property (setter=_setCustomLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _customLocalizationTable;              //@synthesize customLocalizationTable=_customLocalizationTable - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeKeyPrefix;                                                                //@synthesize attributeKeyPrefix=_attributeKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeMetadataKeyPrefix;                                                        //@synthesize attributeMetadataKeyPrefix=_attributeMetadataKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributePromptDialogKeyPrefix;                                                    //@synthesize attributePromptDialogKeyPrefix=_attributePromptDialogKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeRelationshipKeyPrefix;                                                    //@synthesize attributeRelationshipKeyPrefix=_attributeRelationshipKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeUnsupportedReasonKeyPrefix;                                               //@synthesize attributeUnsupportedReasonKeyPrefix=_attributeUnsupportedReasonKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributesKeyPrefix;                                                               //@synthesize attributesKeyPrefix=_attributesKeyPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeTagKey;                                                                   //@synthesize attributeTagKey=_attributeTagKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeDisplayPriorityKey;                                                       //@synthesize attributeDisplayPriorityKey=_attributeDisplayPriorityKey - In the implementation block
@property (assign,nonatomic,__weak) INSchema * schema;                                                                             //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy) NSString * intentDefinitionNamespace;                                                                   //@synthesize intentDefinitionNamespace=_intentDefinitionNamespace - In the implementation block
@property (nonatomic,copy) NSString * className;                                                                                   //@synthesize className=_className - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                                                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSOrderedSet * displayOrderedAttributes;                                                                //@synthesize displayOrderedAttributes=_displayOrderedAttributes - In the implementation block
@property (nonatomic,copy) NSString * semanticRoot;                                                                                //@synthesize semanticRoot=_semanticRoot - In the implementation block
@property (nonatomic,readonly) NSArray * referencedCodableEnums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 foundAttributes:(id)arg3 ;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 ;
+(id)_codableDescriptionForTypedObject:(id)arg1 inDictionary:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(INSchema *)schema;
-(NSString *)className;
-(INCodableLocalizationTable *)_localizationTable;
-(void)setSchema:(INSchema *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCodableLocalizationTable *)_customLocalizationTable;
-(NSString *)_attributeKeyPrefix;
-(NSString *)_attributesKeyPrefix;
-(NSString *)_attributeMetadataKeyPrefix;
-(NSString *)_attributePromptDialogKeyPrefix;
-(NSString *)_attributeRelationshipKeyPrefix;
-(NSString *)_attributeUnsupportedReasonKeyPrefix;
-(NSMutableDictionary *)_dictionaryKeysForCacheGroup;
-(NSString *)_attributeTagKey;
-(NSString *)_attributeDisplayPriorityKey;
-(id)_ignoredAttributeTags;
-(id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2 ;
-(void)_updateAttributesByName;
-(id)_nullable_schema;
-(id)attributeByKeyPath:(id)arg1 ;
-(id)attributeByName:(id)arg1 ;
-(unsigned long long)highestAttributeTag;
-(NSArray *)referencedCodableEnums;
-(void)_setLocalizationTable:(id)arg1 ;
-(void)_setCustomLocalizationTable:(id)arg1 ;
-(void)set_dictionaryKeysForCacheGroup:(NSMutableDictionary *)arg1 ;
-(NSString *)intentDefinitionNamespace;
-(void)setIntentDefinitionNamespace:(NSString *)arg1 ;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(NSOrderedSet *)displayOrderedAttributes;
-(void)setDisplayOrderedAttributes:(NSOrderedSet *)arg1 ;
-(NSString *)semanticRoot;
-(void)setSemanticRoot:(NSString *)arg1 ;
@end

