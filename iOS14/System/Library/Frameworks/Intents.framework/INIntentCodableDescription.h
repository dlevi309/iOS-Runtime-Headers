/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INRootCodableDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, INCodableAttribute;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying> {

	BOOL _userConfirmationRequired;
	BOOL _deprecated;
	BOOL _configurable;
	BOOL _eligibleForSuggestions;
	BOOL _eligibleForWidgets;
	NSString* _inputAttributeName;
	NSString* _keyAttributeName;
	NSString* _title;
	NSString* _titleLocID;
	NSString* _descriptiveText;
	NSString* _descriptiveTextLocID;
	NSString* _defaultImageName;
	long long _intentCategory;
	NSString* _verb;
	NSArray* _phrases;
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
@property (assign,getter=isDeprecated,nonatomic) BOOL deprecated;                                      //@synthesize deprecated=_deprecated - In the implementation block
@property (assign,getter=isConfigurable,nonatomic) BOOL configurable;                                  //@synthesize configurable=_configurable - In the implementation block
@property (assign,getter=isEligibleForSuggestions,nonatomic) BOOL eligibleForSuggestions;              //@synthesize eligibleForSuggestions=_eligibleForSuggestions - In the implementation block
@property (assign,getter=isEligibleForWidgets,nonatomic) BOOL eligibleForWidgets;                      //@synthesize eligibleForWidgets=_eligibleForWidgets - In the implementation block
@property (nonatomic,readonly) INCodableAttribute * inputAttribute; 
@property (nonatomic,readonly) INCodableAttribute * keyAttribute; 
@property (nonatomic,retain) NSArray * phrases;                                                        //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedDescriptiveText; 
@property (nonatomic,copy) NSArray * entityVerbs;                                                      //@synthesize entityVerbs=_entityVerbs - In the implementation block
+(id)__ParametersKey;
+(BOOL)supportsSecureCoding;
+(id)__DeprecatedKey;
+(id)__NameKey;
+(id)__TitleKey;
+(id)__CategoryKey;
+(id)__VerbAssociationsKey;
+(id)__EligibleForWidgetsKey;
+(id)__ParameterKey;
+(id)__Key;
+(id)__EntityKey;
+(id)__TitleIDKey;
+(id)__PhrasesKey;
+(id)__DescriptionKey;
+(id)__ClassNameKey;
+(id)__InputKey;
+(id)__IneligibleForSuggestionsKey;
+(id)__SummaryKey;
+(id)__VerbKey;
+(id)__ConfigurableKey;
+(id)__KeyParameterKey;
+(id)__ClassPrefixKey;
+(id)__DefaultImageNameKey;
+(id)__UserConfirmationRequiredKey;
+(id)__DescriptionIDKey;
-(long long)intentCategory;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(void)setIntentCategory:(long long)arg1 ;
-(NSString *)verb;
-(void)updateWithDictionary:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSArray *)phrases;
-(id)_ignoredAttributeTags;
-(id)_attributeKey;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(id)attributes;
-(NSString *)_inputAttributeName;
-(NSString *)_keyAttributeName;
-(id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1 ;
-(INCodableAttribute *)keyAttribute;
-(INCodableAttribute *)inputAttribute;
-(id)localizedTitleWithLocalizer:(id)arg1 ;
-(NSString *)localizedDescriptiveText;
-(void)_setKeyAttributeName:(id)arg1 ;
-(NSString *)titleLocID;
-(id)localizedDescriptiveTextWithLocalizer:(id)arg1 ;
-(void)_updateWithIntentCodableDescription:(id)arg1 ;
-(void)_setInputAttributeName:(id)arg1 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2 ;
-(NSString *)descriptiveText;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2 ;
-(void)setTitleLocID:(NSString *)arg1 ;
-(void)setDescriptiveText:(NSString *)arg1 ;
-(NSString *)descriptiveTextLocID;
-(void)setDescriptiveTextLocID:(NSString *)arg1 ;
-(NSString *)defaultImageName;
-(void)setDeprecated:(BOOL)arg1 ;
-(void)setDefaultImageName:(NSString *)arg1 ;
-(BOOL)isConfigurable;
-(void)setConfigurable:(BOOL)arg1 ;
-(BOOL)isEligibleForSuggestions;
-(BOOL)isEligibleForWidgets;
-(void)setEligibleForSuggestions:(BOOL)arg1 ;
-(void)setEligibleForWidgets:(BOOL)arg1 ;
-(NSArray *)entityVerbs;
-(void)setEntityVerbs:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_attributesKey;
-(BOOL)isDeprecated;
-(BOOL)userConfirmationRequired;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserConfirmationRequired:(BOOL)arg1 ;
-(NSString *)title;
@end

