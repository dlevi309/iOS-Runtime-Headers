/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
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

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding> {

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
	NSArray* _airPlayRouteIds;
	NSString* _recordRoute;
	NSUUID* _recordDeviceUID;
	NSString* _recordDeviceIdentifier;
	long long __preferredInteractionDirection;

}

@property (readonly) BOOL cd_saveToKnowledgeStore; 
@property (readonly) BOOL cd_saveToPeopleStore; 
@property (readonly) NSArray * cd_recipients; 
@property (readonly) INPerson * cd_sender; 
@property (readonly) long long cd_interactionMechanism; 
@property (readonly) NSString * cd_groupName; 
@property (copy,readonly) NSString * cd_derivedIntentIdentifier; 
@property (readonly) long long _intents_toggleState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL _hasTitle; 
@property (nonatomic,copy,readonly) NSString * _title; 
@property (nonatomic,copy,readonly) NSString * _subtitle; 
@property (nonatomic,copy,readonly) NSString * _localizedVerb; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy) PBCodable * backingStore;                                                                                                           //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) NSString * utteranceString; 
@property (setter=_setLaunchId:,nonatomic,retain) NSString * launchId; 
@property (setter=_setNanoLaunchId:,nonatomic,retain) NSString * _nanoLaunchId; 
@property (nonatomic,copy) NSString * identifier;                                                                                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * intentId; 
@property (setter=_setExtensionBundleId:,nonatomic,retain) NSString * extensionBundleId; 
@property (setter=_setUiExtensionBundleId:,nonatomic,retain) NSString * _uiExtensionBundleId; 
@property (setter=_setAirPlayRouteIds:,nonatomic,retain) NSArray * airPlayRouteIds;                                                                            //@synthesize airPlayRouteIds=_airPlayRouteIds - In the implementation block
@property (setter=_setRecordRoute:,nonatomic,copy) NSString * recordRoute;                                                                                     //@synthesize recordRoute=_recordRoute - In the implementation block
@property (setter=_setRecordDeviceUID:,nonatomic,retain) NSUUID * recordDeviceUID;                                                                             //@synthesize recordDeviceUID=_recordDeviceUID - In the implementation block
@property (setter=_setRecordDeviceIdentifier:,nonatomic,retain) NSString * recordDeviceIdentifier;                                                             //@synthesize recordDeviceIdentifier=_recordDeviceIdentifier - In the implementation block
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
@property (nonatomic,readonly) INIntentKeyParameter * _keyParameter;                                                                                           //@synthesize keyParameter=_keyParameter - In the implementation block
@property (nonatomic,readonly) NSString * typeName; 
@property (setter=_setParameterCombinations:,nonatomic,retain) NSDictionary * _parameterCombinations;                                                          //@synthesize parameterCombinations=_parameterCombinations - In the implementation block
@property (setter=_setConfigurableParameterCombinations:,nonatomic,retain) NSDictionary * _configurableParameterCombinations;                                  //@synthesize configurableParameterCombinations=_configurableParameterCombinations - In the implementation block
@property (nonatomic,readonly) NSDictionary * _resolvableParameterCombinations; 
@property (nonatomic,readonly) NSDictionary * _validParameterCombinations; 
@property (nonatomic,readonly) BOOL _supportsBackgroundExecution; 
@property (getter=_isConfigurable,nonatomic,readonly) BOOL _configurable; 
@property (getter=_isEligibleForSuggestions,nonatomic,readonly) BOOL _eligibleForSuggestions; 
@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData; 
@property (setter=_setParameterImages:,getter=_parameterImages,nonatomic,copy) NSArray * parameterImages; 
@property (getter=_sortedParameterImages,nonatomic,copy,readonly) NSArray * sortedParameterImages; 
@property (setter=_setParametersForcedToNeedsValue:,nonatomic,copy) NSArray * _parametersForcedToNeedsValue; 
@property (nonatomic,readonly) long long _type; 
@property (nonatomic,readonly) long long _indexingHash;                                                                                                        //@synthesize indexingHash=_indexingHash - In the implementation block
@property (assign,setter=_setUserConfirmationRequired:,getter=_isUserConfirmationRequired,nonatomic) BOOL _userConfirmationRequired; 
@property (nonatomic,readonly) INIntentCodableDescription * _codableDescription; 
@property (nonatomic,readonly) NSDictionary * _JSONDictionaryRepresentation; 
@property (assign,setter=_setShouldForwardToAppOnSuccess:,nonatomic) BOOL _shouldForwardToAppOnSucccess;                                                       //@synthesize shouldForwardToAppOnSucccess=_shouldForwardToAppOnSucccess - In the implementation block
@property (setter=_setParameterContexts:,nonatomic,retain) INParameterContexts * _parameterContexts;                                                           //@synthesize parameterContexts=_parameterContexts - In the implementation block
@property (nonatomic,readonly) long long _preferredInteractionDirection;                                                                                       //@synthesize _preferredInteractionDirection=__preferredInteractionDirection - In the implementation block
@property (nonatomic,readonly) NSArray * _codableAttributes; 
@property (nonatomic,readonly) NSOrderedSet * _displayOrderedAttributes; 
@property (nonatomic,copy,readonly) NSString * intentDescription; 
@property (nonatomic,copy) NSString * suggestedInvocationPhrase; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
+(void)initialize;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
+(id)typeName;
+(id)_ignoredParameters;
+(id)_sharedExtensionContextUUIDForIntentClassName:(id)arg1 ;
+(void)_setSharedExtensionContextUUID:(id)arg1 forIntentClassName:(id)arg2 ;
-(id)contextMetadata;
-(BOOL)cd_saveToKnowledgeStore;
-(BOOL)cd_saveToPeopleStore;
-(NSString *)cd_derivedIntentIdentifier;
-(long long)cd_interactionMechanism;
-(NSString *)cd_groupName;
-(INPerson *)cd_sender;
-(NSArray *)cd_recipients;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(long long)_type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)identifier;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(_INPBIntentMetadata *)_metadata;
-(NSString *)_subtitle;
-(id)_className;
-(NSString *)suggestedInvocationPhrase;
-(id)keyImage;
-(NSString *)_title;
-(long long)_indexingHash;
-(id)_intents_bundleIdForDisplay;
-(NSString *)verb;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)_dictionaryRepresentation;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)_hasTitle;
-(long long)_idiom;
-(long long)_executionContext;
-(void)_setIdiom:(long long)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(PBCodable *)backingStore;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(void)_injectProxiesForImagesUsingCustomCodableStrategy:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_injectProxiesForParameterImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_injectProxyForDefaultImage:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(NSString *)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(NSString *)arg1 ;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(NSDictionary *)arg1 ;
-(BOOL)_isUserConfirmationRequired;
-(void)_setRecordRoute:(id)arg1 ;
-(void)_setRecordDeviceUID:(id)arg1 ;
-(void)_setRecordDeviceIdentifier:(id)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSNumber *)_isOwnedByCurrentUser;
-(BOOL)_isPrimaryDisplayDisabled;
-(NSString *)_nanoLaunchId;
-(id)_parameterImages;
-(NSString *)launchId;
-(NSString *)intentDescription;
-(NSString *)intentId;
-(void)setSuggestedInvocationPhrase:(NSString *)arg1 ;
-(long long)triggerMethod;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)_spotlightContentType;
-(id)intentSlotDescriptions;
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(NSOrderedSet *)_displayOrderedAttributes;
-(NSString *)typeName;
-(void)_setExecutionContext:(long long)arg1 ;
-(long long)_intents_toggleState;
-(id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(NSString *)_localizedVerb;
-(id)_titleForLanguage:(id)arg1 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 localizationTable:(id)arg3 bundleURL:(id)arg4 localizer:(id)arg5 ;
-(id)_subtitleForLanguage:(id)arg1 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_intents_bundleIdForLaunching;
-(id)_intents_launchIdForCurrentPlatform;
-(id)_intents_bestBundleIdentifier;
-(id)_defaultImageName;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_isValidKey:(id)arg1 ;
-(INIntentCodableDescription *)_codableDescription;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(BOOL)_supportsBackgroundExecution;
-(id)_keyImageWithIntentDescriptionStrategy;
-(long long)_preferredInteractionDirection;
-(id)_redactedDictionaryRepresentation;
-(BOOL)_shouldForwardToAppOnSucccess;
-(NSDictionary *)_parameterCombinations;
-(NSDictionary *)_configurableParameterCombinations;
-(INParameterContexts *)_parameterContexts;
-(INIntentKeyParameter *)_keyParameter;
-(BOOL)isGenericIntent;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN2)arg1 bundle:(id)arg2 ;
-(void)setBackingStore:(PBCodable *)arg1 ;
-(NSString *)utteranceString;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4 ;
-(void)_setIntentCategory:(long long)arg1 ;
-(void)_setCategoryVerb:(id)arg1 ;
-(void)_setDefaultImage:(id)arg1 ;
-(INImage *)_defaultImage;
-(void)_setLaunchId:(id)arg1 ;
-(NSString *)extensionBundleId;
-(void)_setExtensionBundleId:(id)arg1 ;
-(NSString *)_uiExtensionBundleId;
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
-(void)setImage:(id)arg1 forParameterNamed:(id)arg2 ;
-(id)imageForParameterNamed:(id)arg1 ;
-(id)_keyCodableAttributes;
-(void)_setImage:(id)arg1 forParameter:(id)arg2 ;
-(id)_imageForParameter:(id)arg1 ;
-(id)_sortedParameterImages;
-(void)_setParameterImages:(id)arg1 ;
-(id)_querySchemaWithBlock:(/*^block*/id)arg1 contentOptions:(unsigned long long)arg2 ;
-(NSDictionary *)_resolvableParameterCombinations;
-(NSDictionary *)_validParameterCombinations;
-(BOOL)_supportsBackgroundExecutionWithOptions:(unsigned long long)arg1 ;
-(BOOL)_isConfigurable;
-(BOOL)_isEligibleForSuggestions;
-(id)_nonNilParameters;
-(id)_displayOrderedNonNilParameters;
-(void)_setUserConfirmationRequired:(BOOL)arg1 ;
-(id)_emptyCopy;
-(NSArray *)_codableAttributes;
-(id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3 ;
-(void)_setParametersForcedToNeedsValue:(id)arg1 ;
-(NSArray *)_parametersForcedToNeedsValue;
-(NSDictionary *)_JSONDictionaryRepresentation;
-(void)_updateWithJSONDictionary:(id)arg1 ;
-(id)_intentInstanceDescription;
-(BOOL)_isValueValidForKey:(id)arg1 unsupportedReason:(id*)arg2 ;
-(id)_inCodable;
-(void)_setParameterCombinations:(id)arg1 ;
-(void)_setConfigurableParameterCombinations:(id)arg1 ;
-(void)_setParameterContexts:(id)arg1 ;
-(void)_setShouldForwardToAppOnSuccess:(BOOL)arg1 ;
-(NSArray *)airPlayRouteIds;
-(void)_setAirPlayRouteIds:(id)arg1 ;
-(NSString *)recordRoute;
-(NSUUID *)recordDeviceUID;
-(NSString *)recordDeviceIdentifier;
-(BOOL)_enumerateWithValueProcessingBlock:(/*^block*/id)arg1 ;
@end

