/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationShortcutService : SBSAbstractApplicationService
-(void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

