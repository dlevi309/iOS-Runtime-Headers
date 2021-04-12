/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/


@class NSSet, NSString, AFVoiceInfo;

@interface AssistantVoiceViewModel : NSObject {

	BOOL _spinningOnLanguage;
	BOOL _shouldShowGenderGroup;
	NSSet* _languageOptions;
	NSString* _selectedLanguage;
	NSString* _languageGroupFooterText;
	long long _genderToSpin;
	long long _genderToCheckmark;
	NSString* _genderGroupFooterText;
	AFVoiceInfo* _inProgressVoice;
	AFVoiceInfo* _currentVoice;

}

@property (assign,nonatomic) BOOL spinningOnLanguage;                       //@synthesize spinningOnLanguage=_spinningOnLanguage - In the implementation block
@property (nonatomic,copy) NSSet * languageOptions;                         //@synthesize languageOptions=_languageOptions - In the implementation block
@property (nonatomic,copy) NSString * selectedLanguage;                     //@synthesize selectedLanguage=_selectedLanguage - In the implementation block
@property (nonatomic,copy) NSString * languageGroupFooterText;              //@synthesize languageGroupFooterText=_languageGroupFooterText - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGenderGroup;                    //@synthesize shouldShowGenderGroup=_shouldShowGenderGroup - In the implementation block
@property (assign,nonatomic) long long genderToSpin;                        //@synthesize genderToSpin=_genderToSpin - In the implementation block
@property (assign,nonatomic) long long genderToCheckmark;                   //@synthesize genderToCheckmark=_genderToCheckmark - In the implementation block
@property (nonatomic,copy) NSString * genderGroupFooterText;                //@synthesize genderGroupFooterText=_genderGroupFooterText - In the implementation block
@property (nonatomic,retain) AFVoiceInfo * inProgressVoice;                 //@synthesize inProgressVoice=_inProgressVoice - In the implementation block
@property (nonatomic,retain) AFVoiceInfo * currentVoice;                    //@synthesize currentVoice=_currentVoice - In the implementation block
-(NSSet *)languageOptions;
-(void)setLanguageOptions:(NSSet *)arg1 ;
-(BOOL)spinningOnLanguage;
-(void)setSpinningOnLanguage:(BOOL)arg1 ;
-(NSString *)selectedLanguage;
-(void)setSelectedLanguage:(NSString *)arg1 ;
-(NSString *)languageGroupFooterText;
-(void)setLanguageGroupFooterText:(NSString *)arg1 ;
-(BOOL)shouldShowGenderGroup;
-(void)setShouldShowGenderGroup:(BOOL)arg1 ;
-(long long)genderToSpin;
-(void)setGenderToSpin:(long long)arg1 ;
-(long long)genderToCheckmark;
-(void)setGenderToCheckmark:(long long)arg1 ;
-(NSString *)genderGroupFooterText;
-(void)setGenderGroupFooterText:(NSString *)arg1 ;
-(AFVoiceInfo *)inProgressVoice;
-(void)setInProgressVoice:(AFVoiceInfo *)arg1 ;
-(AFVoiceInfo *)currentVoice;
-(void)setCurrentVoice:(AFVoiceInfo *)arg1 ;
@end

