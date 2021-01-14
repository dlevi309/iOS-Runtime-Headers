/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INIntentSlotComposing.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INIntentExport.h>
#import <libobjc.A.dylib/INGenericIntent.h>
#import <libobjc.A.dylib/INRuntimeObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PBCodable, NSString, NSDictionary, NSMutableDictionary, NSArray, INParameterContexts, INIntentKeyParameter, NSUUID, INPerson, INImage, _INPBIntentMetadata, NSNumber, INIntentCodableDescription, NSOrderedSet;

@interface INIntent : NSObject <BSXPCCoding, INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _intentInstanceDescriptionMapping;
	NSArray* _parameterImages;
	BOOL _hasLoadedKeyParameter;
	os_unfair_lock_s _keyParameterLock;
	BOOL _shouldForwardToAppOnSucccess;
	NSDictionary* _parameterCombinations;
	NSDictionary* _configurableParameterCombinations;
	INParameterContexts* _parameterContexts;
	long long _indexingHash;
	INIntentKeyParameter* _keyParameter;
	NSString* _identifier;
	PBCodable* _backingStore;
	NSString* _recordRoute;
	NSUUID* _recordDeviceUID;
	NSString* _recordDeviceIdentifier;
	long long __preferredInteractionDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL cd_saveToKnowledgeStore; 
@property (readonly) BOOL cd_saveToPeopleStore; 
@property (readonly) NSArray * cd_recipients; 
@property (readonly) INPerson * cd_sender; 
@property (readonly) long long cd_interactionMechanism; 
@property (readonly) NSString * cd_groupName; 
@property (copy,readonly) NSString * cd_derivedIntentIdentifier; 
@property (readonly) long long _intents_toggleState; 
@property (nonatomic,readonly) BOOL _hasTitle; 
@property (nonatomic,copy,readonly) NSString * _title; 
@property (nonatomic,copy,readonly) NSString * _subtitle; 
@property (nonatomic,copy,readonly) NSString * _localizedVerb; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,readonly) SCD_Struct_IN4 _intents_preferredScaledImageSize; 
@property (getter=_intents_isExemptFromMulitWindowRequirementForInAppHandling,nonatomic,readonly) BOOL _intents_exemptFromMulitWindowRequirementForInAppHandling; 
@property (nonatomic,copy) PBCodable * backingStore;                                                                                                                           //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) NSString * utteranceString; 
@property (setter=_setLaunchId:,nonatomic,retain) NSString * launchId; 
@property (setter=_setNanoLaunchId:,nonatomic,retain) NSString * _nanoLaunchId; 
@property (nonatomic,copy) NSString * identifier;                                                                                                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * intentId; 
@property (setter=_setExtensionBundleId:,nonatomic,retain) NSString * extensionBundleId; 
@property (setter=_setUiExtensionBundleId:,nonatomic,retain) NSString * _uiExtensionBundleId; 
@property (setter=_setAirPlayRouteIds:,nonatomic,retain) NSArray * airPlayRouteIds; 
@property (setter=_setRecordRoute:,nonatomic,copy) NSString * recordRoute;                                                                                                     //@synthesize recordRoute=_recordRoute - In the implementation block
@property (setter=_setRecordDeviceUID:,nonatomic,retain) NSUUID * recordDeviceUID;                                                                                             //@synthesize recordDeviceUID=_recordDeviceUID - In the implementation block
@property (setter=_setRecordDeviceIdentifier:,nonatomic,retain) NSString * recordDeviceIdentifier;                                                                             //@synthesize recordDeviceIdentifier=_recordDeviceIdentifier - In the implementation block
@property (setter=_setMetadata:,nonatomic,retain) _INPBIntentMetadata * _metadata; 
@property (nonatomic,readonly) long long triggerMethod; 
@property (assign,setter=_setIdiom:,nonatomic) long long _idiom; 
@property (assign,setter=_setPrimaryDisplayDisabled:,getter=_isPrimaryDisplayDisabled,nonatomic) BOOL _primaryDisplayDisabled; 
@property (setter=_setOriginatingDeviceIdsIdentifier:,nonatomic,retain) NSString * _originatingDeviceIDSIdentifier; 
@property (setter=_setOriginatingDeviceRapportEffectiveIdentifier:,nonatomic,retain) NSString * _originatingDeviceRapportEffectiveIdentifier; 
@property (setter=_setOriginatingDeviceRapportMediaSystemIdentifier:,nonatomic,retain) NSString * _originatingDeviceRapportMediaSystemIdentifier; 
@property (setter=_setIsOwnedByCurrentUser:,nonatomic,retain) NSNumber * _isOwnedByCurrentUser; 
@property (nonatomic,readonly) long long _intentCategory; 
@property (nonatomic,readonly) NSString * _categoryVerb; 
@property (assign,setter=_setExecutionContext:,nonatomic) long long _executionContext; 
@property (setter=_setDefaultImage:,nonatomic,retain) INImage * _defaultImage; 
@property (nonatomic,readonly) INIntentKeyParameter * _keyParameter;                                                                                                           //@synthesize keyParameter=_keyParameter - In the implementation block
@property (nonatomic,readonly) NSString * typeName; 
@property (setter=_setParameterCombinations:,nonatomic,retain) NSDictionary * _parameterCombinations;                                                                          //@synthesize parameterCombinations=_parameterCombinations - In the implementation block
@property (setter=_setConfigurableParameterCombinations:,nonatomic,retain) NSDictionary * _configurableParameterCombinations;                                                  //@synthesize configurableParameterCombinations=_configurableParameterCombinations - In the implementation block
@property (nonatomic,readonly) NSDictionary * _resolvableParameterCombinations; 
@property (nonatomic,readonly) NSDictionary * _validParameterCombinations; 
@property (nonatomic,readonly) BOOL _supportsBackgroundExecution; 
@property (getter=_isConfigurable,nonatomic,readonly) BOOL _configurable; 
@property (getter=_isEligibleForSuggestions,nonatomic,readonly) BOOL _eligibleForSuggestions; 
@property (setter=_setParameterImages:,getter=_parameterImages,nonatomic,copy) NSArray * parameterImages; 
@property (getter=_sortedParameterImages,nonatomic,copy,readonly) NSArray * sortedParameterImages; 
@property (setter=_setParametersForcedToNeedsValue:,nonatomic,copy) NSArray * _parametersForcedToNeedsValue; 
@property (nonatomic,readonly) long long _type; 
@property (nonatomic,readonly) long long _indexingHash;                                                                                                                        //@synthesize indexingHash=_indexingHash - In the implementation block
@property (assign,setter=_setUserConfirmationRequired:,getter=_isUserConfirmationRequired,nonatomic) BOOL _userConfirmationRequired; 
@property (nonatomic,readonly) INIntentCodableDescription * _codableDescription; 
@property (nonatomic,readonly) NSDictionary * _JSONDictionaryRepresentation; 
@property (assign,setter=_setShouldForwardToAppOnSuccess:,nonatomic) BOOL _shouldForwardToAppOnSucccess;                                                                       //@synthesize shouldForwardToAppOnSucccess=_shouldForwardToAppOnSucccess - In the implementation block
@property (setter=_setParameterContexts:,nonatomic,retain) INParameterContexts * _parameterContexts;                                                                           //@synthesize parameterContexts=_parameterContexts - In the implementation block
@property (nonatomic,readonly) long long _preferredInteractionDirection;                                                                                                       //@synthesize _preferredInteractionDirection=__preferredInteractionDirection - In the implementation block
@property (nonatomic,readonly) NSArray * _codableAttributes; 
@property (nonatomic,readonly) NSOrderedSet * _displayOrderedAttributes; 
@property (nonatomic,copy,readonly) NSString * intentDescription; 
@property (nonatomic,copy) NSString * suggestedInvocationPhrase; 
@property (assign,nonatomic) unsigned long long shortcutAvailability; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
+(void)initialize;
+(id)intentDescription;
+(BOOL)supportsSecureCoding;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1 ;
+(void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2 ;
+(id)typeName;
+(id)_ignoredParameters;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)contextMetadata;
-(INPerson *)cd_sender;
-(NSString *)cd_groupName;
-(long long)cd_interactionMechanism;
-(NSArray *)cd_recipients;
-(BOOL)cd_saveToKnowledgeStore;
-(BOOL)cd_saveToPeopleStore;
-(NSString *)cd_derivedIntentIdentifier;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(long long)_type;
-(NSString *)extensionBundleId;
-(NSString *)_title;
-(NSString *)verb;
-(INIntentCodableDescription *)_codableDescription;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)intentDescription;
-(void)_setMetadata:(id)arg1 ;
-(NSArray *)airPlayRouteIds;
-(NSString *)recordRoute;
-(id)init;
-(_INPBIntentMetadata *)_metadata;
-(long long)_indexingHash;
-(PBCodable *)backingStore;
-(BOOL)_isValidKey:(id)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(NSString *)_uiExtensionBundleId;
-(NSNumber *)_isOwnedByCurrentUser;
-(BOOL)_isPrimaryDisplayDisabled;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)intentSlotDescriptions;
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(BOOL)_hasTitle;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)launchId;
-(NSString *)debugDescription;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_dictionaryRepresentation;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)setVerb:(NSString *)arg1 ;
-(id)_emptyCopy;
-(void)setDomain:(NSString *)arg1 ;
-(long long)_idiom;
-(id)_inCodable;
-(INIntentKeyParameter *)_keyParameter;
-(BOOL)isGenericIntent;
-(NSDictionary *)_parameterCombinations;
-(NSOrderedSet *)_displayOrderedAttributes;
-(BOOL)_shouldForwardToAppOnSucccess;
-(NSDictionary *)_configurableParameterCombinations;
-(INParameterContexts *)_parameterContexts;
-(NSString *)utteranceString;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN2)arg1 bundle:(id)arg2 ;
-(void)_setIntentCategory:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4 ;
-(void)_setCategoryVerb:(id)arg1 ;
-(INImage *)_defaultImage;
-(void)_setDefaultImage:(id)arg1 ;
-(void)_setLaunchId:(id)arg1 ;
-(void)_setExtensionBundleId:(id)arg1 ;
-(void)_setUiExtensionBundleId:(id)arg1 ;
-(void)_setNanoLaunchId:(id)arg1 ;
-(void)_setPrimaryDisplayDisabled:(BOOL)arg1 ;
-(NSString *)_originatingDeviceIDSIdentifier;
-(void)_setOriginatingDeviceIdsIdentifier:(id)arg1 ;
-(NSString *)_originatingDeviceRapportMediaSystemIdentifier;
-(void)_setOriginatingDeviceRapportMediaSystemIdentifier:(id)arg1 ;
-(NSString *)_originatingDeviceRapportEffectiveIdentifier;
-(void)_setOriginatingDeviceRapportEffectiveIdentifier:(id)arg1 ;
-(void)_setIsOwnedByCurrentUser:(id)arg1 ;
-(void)_setAirPlayRouteIds:(id)arg1 ;
-(void)setImage:(id)arg1 forParameterNamed:(id)arg2 ;
-(void)_setImage:(id)arg1 forParameter:(id)arg2 ;
-(id)_imageForParameter:(id)arg1 ;
-(id)_sortedParameterImages;
-(void)_setParameterImages:(id)arg1 ;
-(id)_querySchemaWithBlock:(/*^block*/id)arg1 contentOptions:(unsigned long long)arg2 ;
-(NSDictionary *)_resolvableParameterCombinations;
-(NSDictionary *)_validParameterCombinations;
-(BOOL)_supportsBackgroundExecution;
-(BOOL)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1 ;
-(BOOL)_isConfigurable;
-(BOOL)_isEligibleForSuggestions;
-(id)_nonNilParameters;
-(id)_displayOrderedNonNilParameters;
-(void)_setUserConfirmationRequired:(BOOL)arg1 ;
-(NSArray *)_codableAttributes;
-(NSUUID *)recordDeviceUID;
-(id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3 ;
-(void)_setParametersForcedToNeedsValue:(id)arg1 ;
-(NSArray *)_parametersForcedToNeedsValue;
-(id)_JSONDictionaryRepresentationWithConfiguration:(id)arg1 ;
-(NSDictionary *)_JSONDictionaryRepresentation;
-(void)_setParameterContexts:(id)arg1 ;
-(void)_updateWithJSONDictionary:(id)arg1 ;
-(id)_intentInstanceDescription;
-(BOOL)_isValueValidForKey:(id)arg1 unsupportedReason:(id*)arg2 ;
-(void)_setParameterCombinations:(id)arg1 ;
-(void)_setConfigurableParameterCombinations:(id)arg1 ;
-(void)_setShouldForwardToAppOnSuccess:(BOOL)arg1 ;
-(NSString *)recordDeviceIdentifier;
-(NSString *)domain;
-(void)setSuggestedInvocationPhrase:(NSString *)arg1 ;
-(void)_setExecutionContext:(long long)arg1 ;
-(void)setShortcutAvailability:(unsigned long long)arg1 ;
-(long long)_intents_toggleState;
-(NSString *)typeName;
-(id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)imageForParameterNamed:(id)arg1 ;
-(NSString *)description;
-(NSString *)intentId;
-(id)keyImage;
-(NSString *)_localizedVerb;
-(id)_titleForLanguage:(id)arg1 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 localizer:(id)arg5 ;
-(id)_subtitleForLanguage:(id)arg1 ;
-(id)_intents_bundleIdForLaunching;
-(id)_intents_launchIdForCurrentPlatform;
-(id)_intents_bestBundleIdentifier;
-(id)_defaultImageName;
-(id)_spotlightContentType;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setBackingStore:(PBCodable *)arg1 ;
-(INImage *)_keyImage;
-(unsigned long long)hash;
-(void)_injectProxiesForImagesUsingCustomCodableStrategy:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_injectProxiesForParameterImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_injectProxyForDefaultImage:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(NSString *)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_executionContext;
-(BOOL)_isUserConfirmationRequired;
-(id)valueForProperty:(id)arg1 ;
-(void)_setRecordRoute:(id)arg1 ;
-(void)_setRecordDeviceUID:(id)arg1 ;
-(void)_setRecordDeviceIdentifier:(id)arg1 ;
-(id)_parameterImages;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
-(id)_init;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)_className;
-(id)_keyImageWithIntentDescriptionStrategy;
-(NSString *)_subtitle;
-(SCD_Struct_IN4)_intents_preferredScaledImageSize;
-(long long)_preferredInteractionDirection;
-(id)_redactedDictionaryRepresentation;
-(id)_keyCodableAttributes;
-(NSString *)_nanoLaunchId;
-(NSString *)suggestedInvocationPhrase;
-(long long)triggerMethod;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_intents_bundleIdForDisplay;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)shortcutAvailability;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_enumerateWithValueProcessingBlock:(/*^block*/id)arg1 ;
-(void)_setIdiom:(long long)arg1 ;
@end

