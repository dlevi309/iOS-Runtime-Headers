/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


#import <Intents/Intents-Structs.h>
@class NSString, NSMapTable, NSArray, NSLocale;

@interface INStringLocalizer : NSObject {

	os_unfair_lock_s _lock;
	NSString* _languageCode;
	NSMapTable* _bundlesByIdentifier;
	NSMapTable* _bundlesByURL;
	NSMapTable* _bundleLocalizations;
	NSMapTable* _preferredBundleLocalizations;
	NSArray* _preferredLanguages;

}

@property (nonatomic,readonly) os_unfair_lock_s lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMapTable * bundlesByIdentifier;                       //@synthesize bundlesByIdentifier=_bundlesByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMapTable * bundlesByURL;                              //@synthesize bundlesByURL=_bundlesByURL - In the implementation block
@property (nonatomic,readonly) NSMapTable * bundleLocalizations;                       //@synthesize bundleLocalizations=_bundleLocalizations - In the implementation block
@property (nonatomic,readonly) NSMapTable * preferredBundleLocalizations;              //@synthesize preferredBundleLocalizations=_preferredBundleLocalizations - In the implementation block
@property (nonatomic,readonly) NSArray * preferredLanguages;                           //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                           //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) NSLocale * locale; 
+(id)siriLocalizer;
+(id)localizerForLanguage:(id)arg1 ;
+(id)alternativeLocales;
-(NSLocale *)locale;
-(NSMapTable *)bundleLocalizations;
-(BOOL)matchesBundleLocalizations:(CFBundleRef)arg1 ;
-(id)init;
-(NSArray *)preferredLanguages;
-(NSString *)languageCode;
-(os_unfair_lock_s)lock;
-(CFBundleRef)bundleWithIdentifier:(id)arg1 fileURL:(id)arg2 ;
-(NSMapTable *)bundlesByURL;
-(id)preferredLocalizationsForBundle:(CFBundleRef)arg1 ;
-(id)localizationsForBundle:(CFBundleRef)arg1 ;
-(id)initWithLanguageCode:(id)arg1 ;
-(NSMapTable *)preferredBundleLocalizations;
-(NSMapTable *)bundlesByIdentifier;
@end

