/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@class DOCDownloadSettings, FPItemManager, PSSpecifier, NSMutableArray, FPItem, NSString;

@interface SafariDownloadsSettingsController : SafariSettingsListController <UIDocumentPickerDelegate> {

	DOCDownloadSettings* _downloadSettings;
	FPItemManager* _itemManager;
	PSSpecifier* _downloadsFolderGroupSpecifier;
	PSSpecifier* _selectOtherFolderSpecifier;
	PSSpecifier* _defaultDownloadsLocationSpecifier;
	NSMutableArray* _providerSpecifiers;
	FPItem* _cachedDownloadsLocationItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)specifiers;
-(id)_itemManager;
-(id)_downloadSettings;
-(void)_updateSpecifiersWithProviderDomains:(id)arg1 ;
-(void)_updateSelectedFolder;
-(void)_updateFooterWithProviderDomain:(id)arg1 ;
-(void)_showFolderPicker;
-(void)_setDownloadsLocationForProviderDomain:(id)arg1 ;
-(void)_setDefaultDownloadsLocationItem:(id)arg1 ;
@end

