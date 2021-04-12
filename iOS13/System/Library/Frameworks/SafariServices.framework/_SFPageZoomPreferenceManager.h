/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSPageZoomPreferenceManager.h>

@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager
+(id)sharedManager;
-(void)dealloc;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_didRemoveHostnames:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

