/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class WebBookmarkCollection, _SFFolderPickerTableViewCellLayoutManager;

@interface SafariFavoritesFolderPickerContoller : SafariSettingsListController {

	WebBookmarkCollection* _bookmarkCollection;
	_SFFolderPickerTableViewCellLayoutManager* _cellLayoutManager;

}
-(void)willBecomeActive;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(void)_showBookmarksBeingSyncedAlert;
@end

