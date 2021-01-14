/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary, NSString, NSArray;

@interface INSchema : NSObject <NSSecureCoding> {

	BOOL _system;
	NSMutableDictionary* _schemaDictionary;
	NSMutableDictionary* _parameterCombinationDictionary;
	NSMutableDictionary* _configurableParameterCombinationDictionary;
	NSDictionary* _typeForClassDictionary;
	NSDictionary* _typeForSemanticKeypathDictionary;
	NSMutableDictionary* _enums;
	NSMutableDictionary* _types;
	NSString* _mainBundleIdentifier;
	NSArray* _definitionFileURLs;

}

@property (nonatomic,readonly) NSMutableDictionary * _schemaDictionary;                                        //@synthesize schemaDictionary=_schemaDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _parameterCombinationDictionary;                          //@synthesize parameterCombinationDictionary=_parameterCombinationDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _configurableParameterCombinationDictionary;              //@synthesize configurableParameterCombinationDictionary=_configurableParameterCombinationDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * _typeForClassDictionary;                                         //@synthesize typeForClassDictionary=_typeForClassDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * _typeForSemanticKeypathDictionary;                               //@synthesize typeForSemanticKeypathDictionary=_typeForSemanticKeypathDictionary - In the implementation block
@property (getter=isSystem,nonatomic,readonly) BOOL system;                                                    //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enums;                                                   //@synthesize enums=_enums - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _types;                                                   //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSString * _mainBundleIdentifier;                                               //@synthesize mainBundleIdentifier=_mainBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * _definitionFileURLs;                                                  //@synthesize definitionFileURLs=_definitionFileURLs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultSchema;
+(id)_supportedTypesDictionary;
+(id)_defaultSchemaForBundle:(id)arg1 ;
+(id)_applicationBundleIdentifierFromBundleIdentifier:(id)arg1 ;
+(BOOL)_defaultSchemaCanSupportIntent:(id)arg1 ;
+(id)_cache;
+(id)schemaWithBundleRecord:(id)arg1 fallbackToSystemSchema:(BOOL)arg2 ;
+(id)systemSchema;
+(void)_resetCache;
+(id)_defaultSchemaForBundle:(id)arg1 contentOptions:(unsigned long long)arg2 ;
+(id)_schemaWithIntentDefinitionURLs:(id)arg1 bundleIdentifier:(id)arg2 mainBundleIdentifier:(id)arg3 contentOptions:(unsigned long long)arg4 ;
+(id)_supportedClasses;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSMutableDictionary *)_types;
-(BOOL)isSystem;
-(id)_codableDescriptionWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 codableDescriptionClass:(Class)arg5 ;
-(id)_dictionaryRepresentationForIntentCodableDescription:(id)arg1 intentResponseCodableDescription:(id)arg2 appInfo:(id)arg3 localizer:(id)arg4 ;
-(void)_loadIntentsFromArrayOfDictionaries:(id)arg1 intentDefinitionNamespace:(id)arg2 fromFile:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5 contentOptions:(unsigned long long)arg6 ;
-(id)init;
-(NSMutableDictionary *)_enums;
-(id)_intentResponseWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 className:(id)arg3 filename:(id)arg4 bundleIdentifier:(id)arg5 referencedCodableDescriptions:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSMutableDictionary *)_schemaDictionary;
-(NSMutableDictionary *)_parameterCombinationDictionary;
-(NSDictionary *)_typeForClassDictionary;
-(NSMutableDictionary *)_configurableParameterCombinationDictionary;
-(NSDictionary *)_typeForSemanticKeypathDictionary;
-(NSString *)_mainBundleIdentifier;
-(NSArray *)_definitionFileURLs;
-(id)intentCodableDescriptionWithIntentClassName:(id)arg1 ;
-(id)_initWithContentsOfURLs:(id)arg1 ;
-(id)intentResponseCodableDescriptionWithIntentClassName:(id)arg1 ;
-(id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)arg1 ;
-(id)_parameterCombinationsForClass:(Class)arg1 ;
-(id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 mainBundleIdentifier:(id)arg3 ;
-(id)_objectDescriptionForClass:(Class)arg1 identifier:(id)arg2 ;
-(id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 mainBundleIdentifier:(id)arg3 contentOptions:(unsigned long long)arg4 ;
-(id)intentWithName:(id)arg1 ;
-(id)_typesWithDictionary:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)_setObjectDescription:(id)arg1 forClass:(Class)arg2 identifier:(id)arg3 ;
-(id)_intentWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 ;
-(id)_classNamesForClass:(Class)arg1 ;
-(id)_parameterCombinationsForClassName:(id)arg1 ;
-(id)_configurableParameterCombinationsForClassName:(id)arg1 ;
-(id)_codableDescriptionsForClass:(Class)arg1 ;
-(id)_objectDescriptionForTypeOfClass:(Class)arg1 ;
-(id)dictionaryRepresentationForIntent:(id)arg1 ;
-(id)dictionaryRepresentationForIntent:(id)arg1 localizer:(id)arg2 ;
-(id)_objectDescriptionWithSemanticKeypath:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

