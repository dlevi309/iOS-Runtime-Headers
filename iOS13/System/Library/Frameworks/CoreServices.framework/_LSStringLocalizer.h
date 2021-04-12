/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSString, NSMutableDictionary, _LSLazyPropertyList, NSArray;

@interface _LSStringLocalizer : NSObject {

	CFBundleRef _bundle;
	NSString* _stringsFile;
	NSMutableDictionary* _stringsFileContent;
	_LSLazyPropertyList* _unlocalizedInfoPlistStrings;
	NSArray* _bundleLocalizations;
	NSArray* _bundleLocalizationsWithDefaultPrefLocs;

}
+(void)findKeysToLocalizeInInfoDictionary:(id)arg1 forArrayKey:(CFStringRef)arg2 stringKey:(CFStringRef)arg3 localizedKeys:(id)arg4 ;
+(id)missingLocalizationPlaceholder;
+(id)IOQueue;
+(id)frameworkBundleLocalizer;
+(id)coreTypesLocalizer;
+(void)gatherLocalizedStringsForCFBundle:(CFBundleRef)arg1 infoDictionary:(id)arg2 nameOnly:(BOOL)arg3 ;
+(void)setPreferredLocalizationsForXCTests:(id)arg1 ;
+(id)localizedStringForCanonicalString:(id)arg1 preferredLocalizations:(id)arg2 context:(LSContext*)arg3 ;
+(id)preferredLocalizationsForXCTests;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithCFBundle:(CFBundleRef)arg1 stringsFile:(id)arg2 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 preferredLocalizations:(id)arg3 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 localeCode:(id)arg3 ;
-(void)enumerateLocalizedStringsForKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)stringsFileContentInBundle:(CFBundleRef)arg1 withLocaleCode:(id)arg2 ;
-(id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2 ;
-(void)enumerateLocalizedStringsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDatabase:(id)arg1 bundleUnit:(unsigned)arg2 delegate:(unsigned)arg3 ;
-(id)initWithDatabase:(id)arg1 pluginUnit:(unsigned)arg2 ;
-(id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 ;
-(id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2 ;
@end

