/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class NSMutableDictionary, NSDictionary, INCodableDescription, NSString, INCodableAttributeMetadata, INCodableAttributeRelationship, NSArray, NSNumber;

@interface INCodableAttribute : NSObject <NSSecureCoding, NSCopying, INCodableCoding> {

	NSMutableDictionary* _promptDialogsByType;
	NSDictionary* _arraySizesBySizeClass;
	BOOL _fixedSizeArray;
	BOOL _defaultAttribute;
	BOOL _configurable;
	BOOL _supportsResolution;
	BOOL _supportsDynamicEnumeration;
	BOOL _supportsSearch;
	INCodableDescription* _internalCodableDescription;
	NSString* _typeString;
	long long _modifier;
	NSString* _propertyName;
	NSString* _displayName;
	NSString* _displayNameID;
	INCodableAttributeMetadata* _metadata;
	INCodableAttributeRelationship* _relationship;
	NSArray* _unsupportedReasons;
	NSString* _entityKeypath;
	NSArray* _promptDialogs;
	long long _windowSize;
	NSNumber* _displayPriorityRank;
	Class __relationshipValueTransformerClass;

}

@property (nonatomic,copy) NSNumber * displayPriorityRank;                                                                  //@synthesize displayPriorityRank=_displayPriorityRank - In the implementation block
@property (setter=_setPromptDialogs:,nonatomic,copy) NSArray * promptDialogs;                                               //@synthesize promptDialogs=_promptDialogs - In the implementation block
@property (setter=_setUnsupportedReasons:,nonatomic,copy) NSArray * unsupportedReasons;                                     //@synthesize unsupportedReasons=_unsupportedReasons - In the implementation block
@property (setter=_setTypeString:,nonatomic,copy) NSString * _typeString;                                                   //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) NSString * _attributeTagKey; 
@property (nonatomic,readonly) NSString * _attributeDisplayPriorityKey; 
@property (assign,setter=_setCodableDescription:,nonatomic,__weak) INCodableDescription * _codableDescription;              //@synthesize internalCodableDescription=_internalCodableDescription - In the implementation block
@property (nonatomic,readonly) Class _unsafeObjectClass; 
@property (nonatomic,readonly) Class _relationshipValueTransformerClass;                                                    //@synthesize _relationshipValueTransformerClass=__relationshipValueTransformerClass - In the implementation block
@property (assign,nonatomic) long long modifier;                                                                            //@synthesize modifier=_modifier - In the implementation block
@property (assign,getter=isFixedSizeArray,nonatomic) BOOL fixedSizeArray;                                                   //@synthesize fixedSizeArray=_fixedSizeArray - In the implementation block
@property (nonatomic,copy) NSString * propertyName;                                                                         //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * displayNameID;                                                                        //@synthesize displayNameID=_displayNameID - In the implementation block
@property (assign,getter=isDefaultAttribute,nonatomic) BOOL defaultAttribute;                                               //@synthesize defaultAttribute=_defaultAttribute - In the implementation block
@property (assign,getter=isConfigurable,nonatomic) BOOL configurable;                                                       //@synthesize configurable=_configurable - In the implementation block
@property (assign,nonatomic) BOOL supportsResolution;                                                                       //@synthesize supportsResolution=_supportsResolution - In the implementation block
@property (assign,nonatomic) BOOL supportsDynamicEnumeration;                                                               //@synthesize supportsDynamicEnumeration=_supportsDynamicEnumeration - In the implementation block
@property (assign,nonatomic) BOOL supportsSearch;                                                                           //@synthesize supportsSearch=_supportsSearch - In the implementation block
@property (nonatomic,retain) INCodableAttributeMetadata * metadata;                                                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) INCodableAttributeRelationship * relationship;                                                 //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) SEL getter; 
@property (nonatomic,readonly) SEL setter; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) Class objectClass; 
@property (nonatomic,readonly) Class resolutionResultClass; 
@property (nonatomic,copy) NSString * entityKeypath;                                                                        //@synthesize entityKeypath=_entityKeypath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (assign,nonatomic) long long windowSize;                                                                          //@synthesize windowSize=_windowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSString *)_typeString;
-(id)dictionaryRepresentation;
-(long long)valueType;
-(INCodableDescription *)_codableDescription;
-(void)updateWithDictionary:(id)arg1 ;
-(void)setPropertyName:(NSString *)arg1 ;
-(SEL)getter;
-(SEL)setter;
-(INCodableAttributeRelationship *)relationship;
-(long long)windowSize;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)modifier;
-(void)setMetadata:(INCodableAttributeMetadata *)arg1 ;
-(id)__INCodableDescriptionTypeKey;
-(void)setRelationship:(INCodableAttributeRelationship *)arg1 ;
-(void)_setCodableDescription:(id)arg1 ;
-(NSString *)description;
-(NSString *)localizedDisplayName;
-(id)localizedDisplayNameWithLocalizer:(id)arg1 ;
-(BOOL)isConfigurable;
-(void)setConfigurable:(BOOL)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(Class)_relationshipValueTransformerClass;
-(id)__INCodableDescriptionEnumTypeKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeKey;
-(id)__INTypeCodableDescriptionEnumTypeKey;
-(void)_setTypeString:(id)arg1 ;
-(Class)_unsafeObjectClass;
-(id)unsupportedReasonWithIndex:(unsigned long long)arg1 ;
-(NSString *)_attributeTagKey;
-(unsigned long long)indexForUnsupportedReason:(id)arg1 ;
-(long long)arraySizeForSizeClass:(id)arg1 ;
-(id)promptDialogWithType:(unsigned long long)arg1 ;
-(NSString *)_attributeDisplayPriorityKey;
-(BOOL)isFixedSizeArray;
-(void)setFixedSizeArray:(BOOL)arg1 ;
-(NSString *)displayNameID;
-(void)setDisplayNameID:(NSString *)arg1 ;
-(BOOL)isDefaultAttribute;
-(BOOL)supportsSearch;
-(void)setDefaultAttribute:(BOOL)arg1 ;
-(BOOL)supportsResolution;
-(void)setSupportsResolution:(BOOL)arg1 ;
-(BOOL)supportsDynamicEnumeration;
-(void)setSupportsDynamicEnumeration:(BOOL)arg1 ;
-(void)setSupportsSearch:(BOOL)arg1 ;
-(NSArray *)unsupportedReasons;
-(void)_setUnsupportedReasons:(id)arg1 ;
-(NSString *)entityKeypath;
-(void)setEntityKeypath:(NSString *)arg1 ;
-(NSArray *)promptDialogs;
-(void)_setPromptDialogs:(id)arg1 ;
-(void)setWindowSize:(long long)arg1 ;
-(NSNumber *)displayPriorityRank;
-(void)setDisplayPriorityRank:(NSNumber *)arg1 ;
-(id)__INCodableDescriptionWindowSizeKey;
-(id)__INCodableDescriptionEntityKeypathKey;
-(id)__INCodableDescriptionRelationshipKey;
-(id)__INCodableDescriptionMetadataKey;
-(id)__INCodableDescriptionTagKey;
-(id)__INCodableDescriptionUnsupportedReasonsKey;
-(id)__INCodableDescriptionPromptDialogsKey;
-(id)__INCodableDescriptionSupportsDynamicEnumerationKey;
-(id)__INCodableDescriptionConfigurableKey;
-(id)__INCodableDescriptionSupportsResolutionKey;
-(id)__INCodableDescriptionSupportsMultipleValuesKey;
-(id)__INCodableDescriptionDefaultKey;
-(id)__INCodableDescriptionDisplayPriorityKey;
-(id)__INCodableDescriptionDisplayNameIDKey;
-(id)__INCodableDescriptionDisplayNameKey;
-(id)__INCodableDescriptionArraySizeSizeKey;
-(id)__INCodableDescriptionArraySizeSizeClassKey;
-(id)__INCodableDescriptionArraySizesKey;
-(id)__INCodableDescriptionFixedSizeArrayKey;
-(id)__INCodableDescriptionSupportsSearchKey;
-(id)__INTypeCodableDescriptionDisplayPriorityKey;
-(id)__INIntentResponseCodableDescriptionDefaultKey;
-(id)__INTypeCodableDescriptionDefaultKey;
-(void)setModifier:(long long)arg1 ;
-(id)__INIntentResponseCodableDescriptionSupportsResolutionKey;
-(id)__INTypeCodableDescriptionSupportsSearchKey;
-(id)__INTypeCodableDescriptionSupportsResolutionKey;
-(id)__INIntentResponseCodableDescriptionSupportsSearchKey;
-(unsigned long long)hash;
-(id)__INIntentResponseCodableDescriptionSupportsDynamicEnumerationKey;
-(id)__INTypeCodableDescriptionTagKey;
-(id)__INTypeCodableDescriptionSupportsDynamicEnumerationKey;
-(id)__INTypeCodableDescriptionConfigurableKey;
-(id)__INIntentResponseCodableDescriptionConfigurableKey;
-(id)__INIntentResponseCodableDescriptionWindowSizeKey;
-(id)__INTypeCodableDescriptionWindowSizeKey;
-(id)__INIntentResponseCodableDescriptionSupportsMultipleValuesKey;
-(id)__INTypeCodableDescriptionSupportsMultipleValuesKey;
-(id)__INIntentResponseCodableDescriptionArraySizesKey;
-(id)__INIntentResponseCodableDescriptionFixedSizeArrayKey;
-(id)__INTypeCodableDescriptionFixedSizeArrayKey;
-(id)__INIntentResponseCodableDescriptionPromptDialogsKey;
-(id)__INTypeCodableDescriptionPromptDialogsKey;
-(id)__INTypeCodableDescriptionArraySizesKey;
-(id)__INIntentResponseCodableDescriptionArraySizeSizeKey;
-(id)__INTypeCodableDescriptionArraySizeSizeKey;
-(id)__INIntentResponseCodableDescriptionTagKey;
-(id)__INIntentResponseCodableDescriptionArraySizeSizeClassKey;
-(id)__INTypeCodableDescriptionMetadataKey;
-(id)__INTypeCodableDescriptionArraySizeSizeClassKey;
-(id)__INTypeCodableDescriptionUnsupportedReasonsKey;
-(Class)objectClass;
-(id)__INIntentResponseCodableDescriptionUnsupportedReasonsKey;
-(id)__INTypeCodableDescriptionRelationshipKey;
-(id)initWithCoder:(id)arg1 ;
-(id)__INIntentResponseCodableDescriptionMetadataKey;
-(id)__INIntentResponseCodableDescriptionRelationshipKey;
-(id)__INIntentResponseCodableDescriptionEntityKeypathKey;
-(id)__INTypeCodableDescriptionEntityKeypathKey;
-(id)__INIntentResponseCodableDescriptionNameKey;
-(id)__INTypeCodableDescriptionNameKey;
-(id)__INIntentResponseCodableDescriptionDisplayNameKey;
-(id)__INTypeCodableDescriptionDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionDisplayNameIDKey;
-(id)__INTypeCodableDescriptionDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionDisplayPriorityKey;
-(Class)resolutionResultClass;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)__INCodableDescriptionNameKey;
-(NSString *)propertyName;
-(INCodableAttributeMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

