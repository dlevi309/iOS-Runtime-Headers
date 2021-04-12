/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/


@class NSArray, NSSet, NSMutableDictionary, NSString;

@interface BRLTTableEnumerator : NSObject {

	NSArray* _translatorBundles;
	NSSet* _supportedLocales;
	NSSet* _supportedLanguageLocales;
	NSMutableDictionary* _languageAgnosticIdentifiersToTables;
	NSString* _translatorBundlePath;

}

@property (nonatomic,copy) NSString * translatorBundlePath;                                          //@synthesize translatorBundlePath=_translatorBundlePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * languageAgnosticIdentifiersToTables;              //@synthesize languageAgnosticIdentifiersToTables=_languageAgnosticIdentifiersToTables - In the implementation block
@property (nonatomic,readonly) NSArray * translatorBundles;                                          //@synthesize translatorBundles=_translatorBundles - In the implementation block
@property (nonatomic,readonly) NSSet * supportedLocales;                                             //@synthesize supportedLocales=_supportedLocales - In the implementation block
@property (nonatomic,readonly) NSSet * supportedLanguageLocales;                                     //@synthesize supportedLanguageLocales=_supportedLanguageLocales - In the implementation block
@property (nonatomic,readonly) NSSet * languageAgnosticTableIdentifiers; 
+(id)tableEnumeratorWithSystemBundlePath;
+(id)systemTranslatorBundle;
+(id)localizedNameForServiceWithIdentifier:(id)arg1 ;
+(id)localizedNameForLanguageAgnosticTableIdentifier:(id)arg1 ;
+(id)localizedNameForLanguage:(id)arg1 ;
+(id)defaultTableForLocale:(id)arg1 ;
-(NSSet *)supportedLocales;
-(NSArray *)translatorBundles;
-(id)initWithTranslatorBundlesPath:(id)arg1 ;
-(NSString *)translatorBundlePath;
-(NSMutableDictionary *)languageAgnosticIdentifiersToTables;
-(id)languageAgnosticTablesInBundle:(id)arg1 ;
-(NSSet *)supportedLanguageLocales;
-(NSSet *)languageAgnosticTableIdentifiers;
-(id)languageAgnosticTablesForIdentifier:(id)arg1 inBundle:(id)arg2 ;
-(id)tablesForLocale:(id)arg1 inBundle:(id)arg2 ;
-(void)setLanguageAgnosticIdentifiersToTables:(NSMutableDictionary *)arg1 ;
-(void)setTranslatorBundlePath:(NSString *)arg1 ;
@end

