/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface INSchema : NSObject <NSSecureCoding> {

	BOOL _system;
	NSMutableDictionary* _schemaDictionary;
	NSMutableDictionary* _parameterCombinationDictionary;
	NSMutableDictionary* _configurableParameterCombinationDictionary;
	NSDictionary* _typeForClassDictionary;
	NSDictionary* _typeForSemanticKeypathDictionary;
	NSMutableDictionary* _enums;
	NSMutableDictionary* _types;

}

@property (nonatomic,readonly) NSMutableDictionary * _schemaDictionary;                                        //@synthesize schemaDictionary=_schemaDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _parameterCombinationDictionary;                          //@synthesize parameterCombinationDictionary=_parameterCombinationDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _configurableParameterCombinationDictionary;              //@synthesize configurableParameterCombinationDictionary=_configurableParameterCombinationDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * _typeForClassDictionary;                                         //@synthesize typeForClassDictionary=_typeForClassDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * _typeForSemanticKeypathDictionary;                               //@synthesize typeForSemanticKeypathDictionary=_typeForSemanticKeypathDictionary - In the implementation block
@property (getter=isSystem,nonatomic,readonly) BOOL system;                                                    //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _enums;                                                   //@synthesize enums=_enums - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _types;                                                   //@synthesize types=_types - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_cache;
+(id)systemSchema;
+(BOOL)_defaultSchemaCanSupportIntent:(id)arg1 ;
+(id)defaultSchema;
+(id)_defaultSchemaForBundle:(id)arg1 contentOptions:(unsigned long long)arg2 ;
+(id)_schemaWithIntentDefinitionURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3 ;
+(id)_defaultSchemaForBundle:(id)arg1 ;
+(void)_resetCache;
+(id)_supportedTypesDictionary;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableDictionary *)_types;
-(id)_dictionaryRepresentation;
-(BOOL)isSystem;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSMutableDictionary *)_schemaDictionary;
-(NSMutableDictionary *)_parameterCombinationDictionary;
-(NSMutableDictionary *)_configurableParameterCombinationDictionary;
-(NSDictionary *)_typeForClassDictionary;
-(NSDictionary *)_typeForSemanticKeypathDictionary;
-(NSMutableDictionary *)_enums;
-(id)intentCodableDescriptionWithIntentClassName:(id)arg1 ;
-(id)intentResponseCodableDescriptionWithIntentClassName:(id)arg1 ;
-(id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)arg1 ;
-(id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3 ;
-(id)_initWithContentsOfURLs:(id)arg1 ;
-(id)intentWithName:(id)arg1 ;
-(id)_codableDescriptionWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 codableDescriptionClass:(Class)arg5 ;
-(id)_typesWithDictionary:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)_intentWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 ;
-(id)_intentResponseWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 className:(id)arg3 filename:(id)arg4 bundleIdentifier:(id)arg5 referencedCodableDescriptions:(id)arg6 ;
-(void)_loadIntentsFromArrayOfDictionaries:(id)arg1 intentDefinitionNamespace:(id)arg2 fromFile:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5 contentOptions:(unsigned long long)arg6 ;
-(void)_setObjectDescription:(id)arg1 forClass:(Class)arg2 identifier:(id)arg3 ;
-(id)_objectDescriptionForClass:(Class)arg1 identifier:(id)arg2 ;
-(id)_parameterCombinationsForClass:(Class)arg1 ;
-(id)_parameterCombinationsForClassName:(id)arg1 ;
-(id)_configurableParameterCombinationsForClassName:(id)arg1 ;
-(id)_classNamesForClass:(Class)arg1 ;
-(id)_codableDescriptionsForClass:(Class)arg1 ;
-(id)_objectDescriptionForTypeOfClass:(Class)arg1 ;
-(id)dictionaryRepresentationForIntent:(id)arg1 ;
-(id)dictionaryRepresentationForIntent:(id)arg1 localizer:(id)arg2 ;
-(id)_dictionaryRepresentationForIntentCodableDescription:(id)arg1 intentResponseCodableDescription:(id)arg2 appInfo:(id)arg3 localizer:(id)arg4 ;
-(id)_objectDescriptionWithSemanticKeypath:(id)arg1 ;
@end

