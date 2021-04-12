/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@interface SBHIconApplicationShortcutListComposer : NSObject
+(id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2 ;
+(BOOL)supportsMultiwindowShortcut;
+(id)composedShortcutsForApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 staticItems:(id)arg3 dynamicItems:(id)arg4 applicationItemID:(unsigned long long)arg5 numberOfDisplayItemsInSwitcher:(long long)arg6 supportsMultipleWindows:(BOOL)arg7 isSystemApplication:(BOOL)arg8 isInternalApplication:(BOOL)arg9 isApplicationInBeta:(BOOL)arg10 removeStyle:(long long)arg11 ;
+(id)composedShortcutsForBookmarkIcon:(id)arg1 withDisplayName:(id)arg2 removeStyle:(long long)arg3 ;
+(id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 prioritizationIsAvailable:(BOOL)arg3 downloadingInformationAgent:(id)arg4 canShare:(BOOL)arg5 ;
+(id)composedShortcutsForFolderIcon:(id)arg1 iconImageCache:(id)arg2 iconManagerAllowsEditing:(BOOL)arg3 badgeViewGenerator:(/*^block*/id)arg4 ;
@end

