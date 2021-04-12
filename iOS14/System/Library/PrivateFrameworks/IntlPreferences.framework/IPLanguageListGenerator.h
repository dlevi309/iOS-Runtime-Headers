/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
*/


@class NSString, NSArray, NSLocale;

@interface IPLanguageListGenerator : NSObject {

	NSString* _systemDisplayLanguage;
	NSArray* _preferredLanguages;
	NSLocale* _preferredLocale;
	NSArray* _systemLanguages;

}

@property (nonatomic,readonly) NSArray * preferredLanguages;                  //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,readonly) NSLocale * preferredLocale;                    //@synthesize preferredLocale=_preferredLocale - In the implementation block
@property (nonatomic,readonly) NSArray * systemLanguages;                     //@synthesize systemLanguages=_systemLanguages - In the implementation block
@property (nonatomic,readonly) NSString * systemDisplayLanguage;              //@synthesize systemDisplayLanguage=_systemDisplayLanguage - In the implementation block
+(void)preheat;
+(id)generator;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)arg1 forPreferredLanguages:(id)arg2 ;
+(id)regionalVariantLanguagesForSystemLanguages;
+(id)regionalVariantLanguagesForBaseLanguage:(id)arg1 ;
+(void)sortByLocalizedLanguage:(id)arg1 ;
+(BOOL)canRemoveLanguages:(id)arg1 fromPreferredLanguages:(id)arg2 ;
-(NSArray *)preferredLanguages;
-(NSLocale *)preferredLocale;
-(NSArray *)systemLanguages;
-(id)initWithPreferredLanguages:(id)arg1 preferredLocale:(id)arg2 systemLanguages:(id)arg3 ;
-(NSString *)systemDisplayLanguage;
-(id)deviceLanguagesForChangingDeviceLanguage:(BOOL)arg1 ;
-(id)otherLanguages;
@end

