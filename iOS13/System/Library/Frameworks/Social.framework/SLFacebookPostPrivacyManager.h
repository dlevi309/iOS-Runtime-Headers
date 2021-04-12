/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject {

	ACAccount* _account;
	NSArray* _privacySettings;

}

@property (retain) SLFacebookPostPrivacySetting * privacySetting; 
-(id)initWithAccount:(id)arg1 ;
-(id)_userDefaultsDict;
-(id)defaultPrivacySetting;
-(id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1 ;
-(void)_setPrivacySettings:(id)arg1 ;
-(void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
-(SLFacebookPostPrivacySetting *)privacySetting;
-(id)privacySettings;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(void)updatePrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

