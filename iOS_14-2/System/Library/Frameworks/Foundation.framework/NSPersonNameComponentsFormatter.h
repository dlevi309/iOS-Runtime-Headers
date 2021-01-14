/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSLocale;

@interface NSPersonNameComponentsFormatter : NSFormatter <NSObservable, NSObserver, NSSecureCoding, NSCopying> {

	id _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL _forceFamilyNameFirst; 
@property (assign) BOOL _forceGivenNameFirst; 
@property (assign) NSLocale * _locale; 
@property (assign) BOOL _ignoresFallbacks; 
@property (assign) long long style; 
@property (getter=isPhonetic) BOOL phonetic; 
+(BOOL)supportsSecureCoding;
+(BOOL)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+(BOOL)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+(unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ignoreUndeterminedComponents:(BOOL)arg2 ;
+(id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3 ;
+(id)__stringByStrippingNonInitialPunctuationFromString:(id)arg1 ;
+(id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3 ;
+(void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(/*^block*/id)arg2 ;
+(BOOL)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2 ;
+(long long)__nameOrderForLocale:(id)arg1 usingNativeOrdering:(BOOL)arg2 ;
+(id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2 ;
+(id)__supportedScriptDefaultsFromScriptName:(id)arg1 ;
+(long long)__abbreviatedNameFormatForPersonNameComponents:(id)arg1 ;
+(long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2 ;
+(unsigned long long)__inferredScriptIndexFromString:(id)arg1 ;
+(id)__supportedNameDefaultsFromLocale:(id)arg1 ;
+(id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2 ;
+(id)__naiveDelimiterForCombinedNameString:(id)arg1 ;
+(unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ;
+(BOOL)__shortStyle:(long long)arg1 isRestrictedForLocale:(id)arg2 ;
+(BOOL)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2 ;
+(BOOL)__contents:(id)arg1 exclusivelyInCharacterSet:(USetRef)arg2 ;
+(long long)__abbreviatedNameFormatForString:(id)arg1 ;
+(id)__longestComponentFromComponents:(id)arg1 ;
+(BOOL)isKatakana:(id)arg1 ;
+(BOOL)__style:(long long)arg1 isRestrictedForLocale:(id)arg2 ;
+(BOOL)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2 ;
+(USetRef)__getCharacterSetWithPattern:(id)arg1 ;
+(BOOL)_isCJKScript:(id)arg1 ;
+(id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2 ;
+(id)__scriptIdentifierFromIndex:(unsigned long long)arg1 ;
+(BOOL)_isMixedScript:(id)arg1 ;
+(id)__currentLocale;
+(id)__givenNameFirstOrdering;
+(long long)_defaultDisplayNameOrder;
+(long long)__shortNameFormatForLocale:(id)arg1 ;
+(SEL)__initialsCreatorForScript:(unsigned long long)arg1 ;
+(id)__stringValueForShortStyle:(long long)arg1 ;
+(id)_cjkLanguagesSet;
+(id)__familyNameFirstOrdering;
+(id)__characterSetWithPattern:(id)arg1 ;
+(id)__initialsForString:(id)arg1 ;
+(id)__preferredLanguages;
+(id)_cjkLocaleIdentifiers;
+(/*^block*/id)arabicInitialsCreator;
+(BOOL)_shouldPreferNicknames;
+(id)__stringValueForStyle:(long long)arg1 ;
+(/*^block*/id)westernInitialsCreator;
+(/*^block*/id)tibetanInitialsCreator;
+(BOOL)_shortNameIsEnabled;
+(BOOL)_currentLocaleIsCJK;
+(/*^block*/id)thaiInitialsCreator;
+(void)__registerDefaults;
+(id)__thaiConsonantSet;
+(long long)_defaultShortNameFormat;
+(id)__localizedNameDefaults;
-(void)receiveObservedValue:(id)arg1 ;
-(NSLocale *)_locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringFromPersonNameComponents:(id)arg1 ;
-(BOOL)__localizedRestrictionExistsForComponents:(id)arg1 ignoreUndeterminedComponents:(BOOL)arg2 ;
-(id)init;
-(void)setPhonetic:(BOOL)arg1 ;
-(id)annotatedStringFromPersonNameComponents:(id)arg1 ;
-(long long)__localizedNameOrderUsingNativeOrdering:(BOOL)arg1 ;
-(BOOL)__localizedRestrictionExistsForShortStyle:(long long)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)__localizedRestrictionExistsForStyle:(long long)arg1 ;
-(long long)_nameOrderWithOverridesForComponents:(id)arg1 ;
-(BOOL)isPhonetic;
-(long long)__computedNameOrderForComponents:(id)arg1 ;
-(void)set_locale:(NSLocale *)arg1 ;
-(void)set_forceGivenNameFirst:(BOOL)arg1 ;
-(long long)__computedShortNameFormat;
-(long long)__localizedShortNameFormat;
-(void)set_forceFamilyNameFirst:(BOOL)arg1 ;
-(BOOL)_forceGivenNameFirst;
-(BOOL)_ignoresFallbacks;
-(BOOL)_forceFamilyNameFirst;
-(void)set_ignoresFallbacks:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToFormatter:(id)arg1 ;
-(id)personNameComponentsFromString:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

