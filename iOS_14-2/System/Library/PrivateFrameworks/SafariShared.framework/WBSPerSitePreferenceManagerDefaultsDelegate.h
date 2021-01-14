/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

@class WBSPerSitePreferencesSQLiteStore;


@protocol WBSPerSitePreferenceManagerDefaultsDelegate <NSObject>
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
@optional
-(void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg1 domain:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;

@end

