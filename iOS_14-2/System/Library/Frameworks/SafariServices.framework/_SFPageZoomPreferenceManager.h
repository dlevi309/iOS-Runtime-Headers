/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSPageZoomPreferenceManager.h>

@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager
+(id)sharedManager;
-(void)_historyWasCleared:(id)arg1 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)_didRemoveHostnames:(id)arg1 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

