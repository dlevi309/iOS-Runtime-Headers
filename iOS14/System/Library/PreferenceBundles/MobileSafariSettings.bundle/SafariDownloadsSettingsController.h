/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_itemManager;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_downloadSettings;
-(void)_updateSpecifiersWithProviderDomains:(id)arg1 ;
-(void)_updateSelectedFolder;
-(void)_updateFooterWithProviderDomain:(id)arg1 ;
-(void)_showFolderPicker;
-(void)_setDownloadsLocationForProviderDomain:(id)arg1 ;
-(void)_setDefaultDownloadsLocationItem:(id)arg1 ;
@end

