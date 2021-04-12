/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSApplicationClient : SBSServiceFacilityClient
+(id)serviceFacilityIdentifier;
-(id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)deleteSnapshotsForApplicationIdentifier:(id)arg1 ;
-(void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1 ;
@end

