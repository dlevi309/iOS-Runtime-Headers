/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)coreTypesLocalizer;
+(void)findKeysToLocalizeInInfoDictionary:(id)arg1 forArrayKey:(CFStringRef)arg2 stringKey:(CFStringRef)arg3 localizedKeys:(id)arg4 ;
+(id)localizedStringForCanonicalString:(id)arg1 preferredLocalizations:(id)arg2 context:(LSContext*)arg3 ;
+(id)preferredLocalizationsForXCTests;
+(id)IOQueue;
+(id)missingLocalizationPlaceholder;
+(void)setPreferredLocalizationsForXCTests:(id)arg1 ;
+(void)gatherLocalizedStringsForCFBundle:(CFBundleRef)arg1 infoDictionary:(id)arg2 nameOnly:(BOOL)arg3 ;
+(id)frameworkBundleLocalizer;
-(id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)init;
-(void)enumerateLocalizedStringsForKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)stringsFileContentInBundle:(CFBundleRef)arg1 withLocaleCode:(id)arg2 ;
-(id)debugDescription;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 localeCode:(id)arg3 ;
-(id)initWithDatabase:(id)arg1 bundleUnit:(unsigned)arg2 delegate:(unsigned)arg3 ;
-(id)initWithDatabase:(id)arg1 pluginUnit:(unsigned)arg2 ;
-(id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2 ;
-(id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)initWithCFBundle:(CFBundleRef)arg1 stringsFile:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 ;
-(void)enumerateLocalizedStringsUsingBlock:(/*^block*/id)arg1 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 preferredLocalizations:(id)arg3 ;
-(void)dealloc;
@end

