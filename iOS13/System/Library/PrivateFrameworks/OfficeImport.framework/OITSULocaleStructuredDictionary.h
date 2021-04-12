/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSDictionary, NSMutableDictionary, NSLocale;

@interface OITSULocaleStructuredDictionary : NSObject {

	NSDictionary* _dictionary;
	NSMutableDictionary* _cldrLanguageScriptRegionForKey;
	NSMutableDictionary* _cldrLanguageScriptForKey;
	NSMutableDictionary* _workingDictionary;
	NSLocale* _workingLocale;
	BOOL _workingLocaleIsAutoUpdating;
	unsigned long long _autoUpdatingCount;

}
+(id)dictionaryWithContentsOfFileForLocale:(id)arg1 inDirectory:(id)arg2 inBundle:(id)arg3 ;
+(id)dateFormatterSymbolsFallbackDictionary;
+(id)numberFormatterSymbolsFallbackDictionary;
-(id)objectForKey:(id)arg1 locale:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 locale:(id)arg2 ;
-(void)p_remakeWorkingDictionaryWithLocale:(id)arg1 ;
-(BOOL)p_extractLanguage:(id*)arg1 script:(id*)arg2 region:(id*)arg3 fromString:(id)arg4 ;
-(id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3 ;
@end

