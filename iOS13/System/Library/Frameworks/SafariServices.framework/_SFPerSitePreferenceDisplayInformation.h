/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface _SFPerSitePreferenceDisplayInformation : NSObject {

	NSString* _localizedSiteSpecificSettingsTitle;
	NSString* _localizedAllWebsiteSettingsTitle;
	NSString* _localizedClearAllSettingsPrompt;
	unsigned long long _displayOption;

}

@property (nonatomic,copy,readonly) NSString * localizedSiteSpecificSettingsTitle;              //@synthesize localizedSiteSpecificSettingsTitle=_localizedSiteSpecificSettingsTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedAllWebsiteSettingsTitle;                //@synthesize localizedAllWebsiteSettingsTitle=_localizedAllWebsiteSettingsTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedClearAllSettingsPrompt;                 //@synthesize localizedClearAllSettingsPrompt=_localizedClearAllSettingsPrompt - In the implementation block
@property (nonatomic,readonly) unsigned long long displayOption;                                //@synthesize displayOption=_displayOption - In the implementation block
+(void)_buildMapIfNeeded;
+(id)displayInformationForPerSitePreference:(id)arg1 ;
-(id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg1 localizedAllWebsiteSettingsTitle:(id)arg2 localizedClearAllSettingsPrompt:(id)arg3 displayOption:(unsigned long long)arg4 ;
-(NSString *)localizedSiteSpecificSettingsTitle;
-(NSString *)localizedAllWebsiteSettingsTitle;
-(NSString *)localizedClearAllSettingsPrompt;
-(unsigned long long)displayOption;
@end

