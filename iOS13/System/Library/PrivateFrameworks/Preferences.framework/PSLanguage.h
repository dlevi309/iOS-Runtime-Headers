/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString;

@interface PSLanguage : NSObject {

	NSString* _languageCode;
	NSString* _languageName;
	NSString* _localizedLanguageName;

}

@property (nonatomic,retain) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * languageName;                       //@synthesize languageName=_languageName - In the implementation block
@property (nonatomic,retain) NSString * localizedLanguageName;              //@synthesize localizedLanguageName=_localizedLanguageName - In the implementation block
+(id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3 ;
-(NSString *)languageCode;
-(NSString *)localizedLanguageName;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setLanguageName:(NSString *)arg1 ;
-(void)setLocalizedLanguageName:(NSString *)arg1 ;
-(NSString *)languageName;
-(BOOL)displayNamesAreEqual;
@end

