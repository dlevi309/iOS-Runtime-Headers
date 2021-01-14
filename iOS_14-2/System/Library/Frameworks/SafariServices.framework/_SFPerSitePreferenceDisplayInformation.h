/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localizedSiteSpecificSettingsTitle;
-(unsigned long long)displayOption;
-(id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg1 localizedAllWebsiteSettingsTitle:(id)arg2 localizedClearAllSettingsPrompt:(id)arg3 displayOption:(unsigned long long)arg4 ;
-(NSString *)localizedAllWebsiteSettingsTitle;
-(NSString *)localizedClearAllSettingsPrompt;
@end

