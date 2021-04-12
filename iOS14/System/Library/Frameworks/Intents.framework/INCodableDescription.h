/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSMutableDictionary, INCodableLocalizationTable, NSString, INSchema, NSDictionary, NSOrderedSet, NSArray;

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding> {

	NSMutableDictionary* _attributesByName;
	INCodableLocalizationTable* _localizationTable;
	INCodableLocalizationTable* _customLocalizationTable;
	NSString* _mainBundleIdentifier;
	INSchema* _schema;
	NSString* _intentDefinitionNamespace;
	NSString* _className;
	NSString* _typeName;
	NSDictionary* _attributes;
	NSOrderedSet* _displayOrderedAttributes;
	NSString* _semanticRoot;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;                          //@synthesize localizationTable=_localizationTable - In the implementation block
@property (setter=_setCustomLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _customLocalizationTable;              //@synthesize customLocalizationTable=_customLocalizationTable - In the implementation block
@property (nonatomic,copy,readonly) NSString * _attributeKey; 
@property (nonatomic,copy,readonly) NSString * _attributesKey; 
@property (assign,nonatomic,__weak) INSchema * schema;                                                                             //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy) NSString * intentDefinitionNamespace;                                                                   //@synthesize intentDefinitionNamespace=_intentDefinitionNamespace - In the implementation block
@property (nonatomic,copy) NSString * className;                                                                                   //@synthesize className=_className - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                                                                              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSOrderedSet * displayOrderedAttributes;                                                                //@synthesize displayOrderedAttributes=_displayOrderedAttributes - In the implementation block
@property (nonatomic,copy) NSString * semanticRoot;                                                                                //@synthesize semanticRoot=_semanticRoot - In the implementation block
@property (nonatomic,copy) NSString * mainBundleIdentifier;                                                                        //@synthesize mainBundleIdentifier=_mainBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * referencedCodableEnums; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 ;
+(id)__INCodableAttributeUnsupportedReasonFormatStringKey;
+(id)__INCodableTimeIntervalAttributeMetadataMaximumValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataMinimumUnitKey;
+(id)__INCodableStringAttributeMetadataDefaultValueKey;
+(id)__INCodableNumberAttributeMetadataDefaultValueKey;
+(id)__INCodableCustomObjectAttributeObjectTypeKey;
+(id)__INCodableAttributeDialogFormatStringDictionaryKey;
+(id)__INCodableAttributeUnsupportedReasonsKey;
+(BOOL)supportsSecureCoding;
+(id)__INIntentResponseCodableCodeConciseFormatStringDictionaryKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringKey;
+(id)__INCodableEnumAttributeMetadataDefaultValueKey;
+(id)__INCodableAttributePromptDialogFormatStringIDKey;
+(id)__INCodableDateComponentsAttributeMetadataTimeStyleKey;
+(id)__INCodableBooleanAttributeMetadataFalseDisplayNameIDKey;
+(id)__INIntentResponseCodableCodeFormatStringLanguageCodeKey;
+(id)__INCodablePersonAttributeMetadataTypeKey;
+(id)__INCodableStringAttributeMetadataDisableSmartDashesKey;
+(id)__INCodableScalarAttributeTypeKey;
+(id)__INCodableAttributePromptDialogFormatStringDictionaryKey;
+(id)__INCodableAttributeTagKey;
+(id)__INCodableAttributePromptDialogFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributeDisplayNameIDKey;
+(id)__INCodableBooleanAttributeMetadataFalseDisplayNameKey;
+(id)__INCodableAttributePromptDialogTypeKey;
+(id)__INCodableAttributeFixedSizeArrayKey;
+(id)__INCodableTimeIntervalAttributeMetadataUnitKey;
+(id)__INCodableAttributeSupportsDynamicEnumerationKey;
+(id)__INIntentCodablePhrasePronunciationHintIDKey;
+(id)__INCodableAttributeMetadataKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringIDKey;
+(id)__INCodableAttributeDefaultKey;
+(id)__INCodableNumberAttributeMetadataMaximumValueKey;
+(id)__INCodableAttributeEntityKeypathKey;
+(id)__INCodableStringAttributeMetadataDisableAutocorrectKey;
+(id)__INCodableBooleanAttributeMetadataDefaultValueKey;
+(id)__INIntentCodablePhrasePronunciationHintKey;
+(id)__INCodableAttributeRelationshipPredicateValuesKey;
+(id)__INCodableAttributePromptDialogFormatStringKey;
+(id)__INCodableAttributeDisplayPriorityKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryLanguageCodeKey;
+(id)__INIntentResponseCodableCodeSuccessKey;
+(id)__INCodableAttributeWindowSizeKey;
+(id)__INCodableAttributeRelationshipPredicateNameKey;
+(id)__INIntentResponseCodableCodeFormatStringIDKey;
+(id)__INCodableObjectAttributeKey;
+(id)__INCodableAttributeConfigurableKey;
+(id)__INCodableDateComponentsAttributeMetadataFormatKey;
+(id)__INCodablePersonAttributeMetadataKey;
+(id)__INCodableAttributeArraySizeSizeKey;
+(id)__INCodableURLAttributeMetadataKey;
+(id)__INCodableAttributeSupportsMultipleValuesKey;
+(id)__INCodableAttributeDialogFormatStringLanguageCodeKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryKey;
+(id)__INCodableMeasurementAttributeMetadataDefaultValueKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringLanguageCodeKey;
+(id)__INCodableAttributeSupportsResolutionKey;
+(id)__INCodableMeasurementAttributeMetadataSupportsNegativeNumbersKey;
+(id)__INCodableFileAttributeMetadataTypeKey;
+(id)__INCodableAttributeEnumTypeKey;
+(id)__INCodableMeasurementAttributeMetadataUnitKey;
+(id)__INCodableAttributeDialogFormatStringKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringIDKey;
+(id)__INCodableAttributeUnsupportedReasonCodeKey;
+(id)__INCodableCustomObjectAttributeObjectTypeNamespaceKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringLanguageCodeKey;
+(id)__INCodableBooleanAttributeMetadataTrueDisplayNameIDKey;
+(id)__INCodableDateComponentsAttributeMetadataTypeKey;
+(id)__INIntentResponseCodableCodeNameKey;
+(id)__INCodableAttributePromptDialogKey;
+(id)__INCodableMeasurementAttributeMetadataDefaultUnitKey;
+(id)__INCodableDateComponentsAttributeMetadataDateStyleKey;
+(id)__INCodableTimeIntervalAttributeMetadataDefaultValueKey;
+(id)__INIntentResponseCodableCodeFormatStringDictionaryKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributeMetadataPlaceholderKey;
+(id)__INIntentResponseCodableCodeFormatStringKey;
+(id)__INCodableAttributeTypeKey;
+(id)__INCodableNumberAttributeMetadataTypeKey;
+(id)__INCodableScalarAttributeKey;
+(id)__INCodableAttributeUnsupportedReasonKey;
+(id)__INCodableTimeIntervalAttributeMetadataMinimumValueKey;
+(id)__INCodableAttributeArraySizeSizeClassKey;
+(id)__INCodablePlacemarkAttributeMetadataKey;
+(id)__INCodableNumberAttributeMetadataMinimumValueKey;
+(id)__INCodableAttributeRelationshipKey;
+(id)__INCodableStringAttributeMetadataDefaultValueIDKey;
+(id)__INCodableAttributeRelationshipPredicateValueKey;
+(id)__INCodableAttributeDialogFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributePromptDialogsKey;
+(id)__INCodableAttributeArraySizesKey;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 foundAttributes:(id)arg3 ;
+(id)__INCodableTimeIntervalAttributeMetadataMaximumUnitKey;
+(id)__INCodableEnumAttributeEnumTypeNamespaceKey;
+(id)__INCodableAttributeDisplayNameKey;
+(id)__INCodableBooleanAttributeMetadataTrueDisplayNameKey;
+(id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodeKey;
+(id)__INCodableEnumAttributeEnumTypeKey;
+(id)__INIntentCodablePhrasePhraseIDKey;
+(id)__INCodableStringAttributeMetadataCapitalizationKey;
+(id)__INCodableAttributeSupportsSearchKey;
+(id)__INCodableDateComponentsAttributeMetadataTemplateKey;
+(id)__INIntentCodablePhrasePhraseKey;
+(id)__INCodableAttributeMetadataPlaceholderIDKey;
+(id)__INCodableAttributePromptDialogFormatStringLanguageCodeKey;
+(id)__INIntentResponseCodableCodeFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableNumberAttributeMetadataSupportsNegativeNumbersKey;
+(id)__INCodableAttributeDialogFormatStringIDKey;
+(id)__INCodableTimeIntervalAttributeMetadataDefaultUnitKey;
+(id)__INCodablePlacemarkAttributeMetadataTypeKey;
+(id)__INCodableEnumAttributeMetadataKey;
+(id)__INCodableDateComponentsAttributeMetadataTemplateIDKey;
+(id)__INCodableFileAttributeMetadataCustomUTIsKey;
+(id)__INCodableObjectAttributeTypeKey;
+(id)_codableDescriptionForTypedObject:(id)arg1 inDictionary:(id)arg2 ;
+(id)__INCodableURLAttributeMetadataDefaultValueKey;
+(id)__INCodableStringAttributeMetadataMultilineKey;
+(id)__INCodableAttributeRelationshipParentNameKey;
+(id)__INCodableAttributeNameKey;
+(id)__INCodableStringAttributeMetadataDisableSmartQuotesKey;
+(id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodesKey;
-(void)setSchema:(INSchema *)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(INSchema *)schema;
-(id)dictionaryRepresentation;
-(void)updateWithDictionary:(id)arg1 ;
-(id)init;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)_ignoredAttributeTags;
-(NSString *)_attributeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)className;
-(INCodableLocalizationTable *)_customLocalizationTable;
-(void)_updateAttributesByName;
-(id)_nullable_schema;
-(id)attributeByKeyPath:(id)arg1 ;
-(id)attributeByName:(id)arg1 ;
-(unsigned long long)highestAttributeTag;
-(NSArray *)referencedCodableEnums;
-(void)setTypeName:(NSString *)arg1 ;
-(void)_setCustomLocalizationTable:(id)arg1 ;
-(void)setMainBundleIdentifier:(NSString *)arg1 ;
-(NSString *)intentDefinitionNamespace;
-(void)setSemanticRoot:(NSString *)arg1 ;
-(void)setIntentDefinitionNamespace:(NSString *)arg1 ;
-(NSOrderedSet *)displayOrderedAttributes;
-(void)setDisplayOrderedAttributes:(NSOrderedSet *)arg1 ;
-(NSString *)semanticRoot;
-(NSDictionary *)attributes;
-(NSString *)typeName;
-(NSString *)description;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)mainBundleIdentifier;
-(void)_setLocalizationTable:(id)arg1 ;
-(INCodableLocalizationTable *)_localizationTable;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_attributesKey;
-(BOOL)isEqual:(id)arg1 ;
@end

