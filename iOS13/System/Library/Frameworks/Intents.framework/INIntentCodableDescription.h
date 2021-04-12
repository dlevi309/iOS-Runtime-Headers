/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INRootCodableDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, INCodableAttribute;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying> {

	BOOL _userConfirmationRequired;
	BOOL _configurable;
	BOOL _eligibleForSuggestions;
	NSString* _inputAttributeName;
	NSString* _keyAttributeName;
	NSString* _attributeKeyPrefix;
	NSString* _attributesKeyPrefix;
	NSString* _title;
	NSString* _titleLocID;
	NSString* _descriptiveText;
	NSString* _descriptiveTextLocID;
	NSString* _defaultImageName;
	long long _intentCategory;
	NSString* _verb;
	NSArray* _entityVerbs;

}

@property (setter=_setInputAttributeName:,nonatomic,copy) NSString * _inputAttributeName;              //@synthesize inputAttributeName=_inputAttributeName - In the implementation block
@property (setter=_setKeyAttributeName:,nonatomic,copy) NSString * _keyAttributeName;                  //@synthesize keyAttributeName=_keyAttributeName - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleLocID;                                                      //@synthesize titleLocID=_titleLocID - In the implementation block
@property (nonatomic,copy) NSString * descriptiveText;                                                 //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (nonatomic,copy) NSString * descriptiveTextLocID;                                            //@synthesize descriptiveTextLocID=_descriptiveTextLocID - In the implementation block
@property (nonatomic,copy) NSString * defaultImageName;                                                //@synthesize defaultImageName=_defaultImageName - In the implementation block
@property (assign,nonatomic) long long intentCategory;                                                 //@synthesize intentCategory=_intentCategory - In the implementation block
@property (nonatomic,copy) NSString * verb;                                                            //@synthesize verb=_verb - In the implementation block
@property (assign,nonatomic) BOOL userConfirmationRequired;                                            //@synthesize userConfirmationRequired=_userConfirmationRequired - In the implementation block
@property (assign,getter=isConfigurable,nonatomic) BOOL configurable;                                  //@synthesize configurable=_configurable - In the implementation block
@property (assign,getter=isEligibleForSuggestions,nonatomic) BOOL eligibleForSuggestions;              //@synthesize eligibleForSuggestions=_eligibleForSuggestions - In the implementation block
@property (nonatomic,readonly) INCodableAttribute * inputAttribute; 
@property (nonatomic,readonly) INCodableAttribute * keyAttribute; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedDescriptiveText; 
@property (nonatomic,copy) NSArray * entityVerbs;                                                      //@synthesize entityVerbs=_entityVerbs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributes;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)verb;
-(NSString *)localizedTitle;
-(void)setVerb:(NSString *)arg1 ;
-(id)keyPrefix;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(long long)intentCategory;
-(void)setIntentCategory:(long long)arg1 ;
-(BOOL)userConfirmationRequired;
-(void)setUserConfirmationRequired:(BOOL)arg1 ;
-(id)_attributeKeyPrefix;
-(id)_attributesKeyPrefix;
-(id)_ignoredAttributeTags;
-(NSString *)_inputAttributeName;
-(NSString *)_keyAttributeName;
-(id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1 ;
-(INCodableAttribute *)inputAttribute;
-(INCodableAttribute *)keyAttribute;
-(id)localizedTitleWithLocalizer:(id)arg1 ;
-(NSString *)localizedDescriptiveText;
-(id)localizedDescriptiveTextWithLocalizer:(id)arg1 ;
-(void)_updateWithIntentCodableDescription:(id)arg1 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2 ;
-(void)_setInputAttributeName:(id)arg1 ;
-(void)_setKeyAttributeName:(id)arg1 ;
-(NSString *)titleLocID;
-(void)setTitleLocID:(NSString *)arg1 ;
-(NSString *)descriptiveText;
-(void)setDescriptiveText:(NSString *)arg1 ;
-(NSString *)descriptiveTextLocID;
-(void)setDescriptiveTextLocID:(NSString *)arg1 ;
-(NSString *)defaultImageName;
-(void)setDefaultImageName:(NSString *)arg1 ;
-(BOOL)isConfigurable;
-(void)setConfigurable:(BOOL)arg1 ;
-(BOOL)isEligibleForSuggestions;
-(void)setEligibleForSuggestions:(BOOL)arg1 ;
-(NSArray *)entityVerbs;
-(void)setEntityVerbs:(NSArray *)arg1 ;
@end

