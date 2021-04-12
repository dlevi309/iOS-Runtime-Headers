/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSEditableListController.h>

@interface PSUsageBundleDetailController : PSEditableListController
+(id)mediaGroups;
+(void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2 ;
-(id)size:(id)arg1 ;
-(id)specifiers;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(id)sizeForSpecifier:(id)arg1 ;
-(void)updateSizesAfterDeletingSize:(float)arg1 shouldPop:(BOOL)arg2 ;
@end

