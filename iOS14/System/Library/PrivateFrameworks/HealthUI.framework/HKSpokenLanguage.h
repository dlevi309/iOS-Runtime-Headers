/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString;

@interface HKSpokenLanguage : NSObject {

	NSString* _identifier;
	NSString* _languageInCurrentLocale;
	NSString* _languageInLanguageLocale;
	unsigned long long _languageCategoryType;

}

@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * languageInCurrentLocale;               //@synthesize languageInCurrentLocale=_languageInCurrentLocale - In the implementation block
@property (nonatomic,retain) NSString * languageInLanguageLocale;              //@synthesize languageInLanguageLocale=_languageInLanguageLocale - In the implementation block
@property (assign) unsigned long long languageCategoryType;                    //@synthesize languageCategoryType=_languageCategoryType - In the implementation block
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)languageCategoryType;
-(NSString *)languageInCurrentLocale;
-(NSString *)languageInLanguageLocale;
-(id)initWithLanguageIdentifier:(id)arg1 forCategory:(unsigned long long)arg2 ;
-(id)localizedStringForDisplay;
-(void)setLanguageInCurrentLocale:(NSString *)arg1 ;
-(void)setLanguageInLanguageLocale:(NSString *)arg1 ;
-(void)setLanguageCategoryType:(unsigned long long)arg1 ;
@end

