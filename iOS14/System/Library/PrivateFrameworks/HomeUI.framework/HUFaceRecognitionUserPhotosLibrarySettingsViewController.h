/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUTappableTextViewDelegate.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>

@class HUFaceRecognitionUserPhotosLibrarySettingsItemManager, HUFaceRecognitionUserPhotosLibrarySettingsModuleController, NSString;

@interface HUFaceRecognitionUserPhotosLibrarySettingsViewController : HUItemTableViewController <HUTappableTextViewDelegate, HUItemTableModuleControllerHosting> {

	HUFaceRecognitionUserPhotosLibrarySettingsItemManager* _photosLibrarySettingsItemManager;
	HUFaceRecognitionUserPhotosLibrarySettingsModuleController* _photosLibrarySettingsModuleController;

}

@property (nonatomic,retain) HUFaceRecognitionUserPhotosLibrarySettingsItemManager * photosLibrarySettingsItemManager;                        //@synthesize photosLibrarySettingsItemManager=_photosLibrarySettingsItemManager - In the implementation block
@property (nonatomic,retain) HUFaceRecognitionUserPhotosLibrarySettingsModuleController * photosLibrarySettingsModuleController;              //@synthesize photosLibrarySettingsModuleController=_photosLibrarySettingsModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(void)tappableTextView:(id)arg1 tappedAtIndex:(unsigned long long)arg2 withAttributes:(id)arg3 ;
-(id)itemModuleControllers;
-(void)setPhotosLibrarySettingsModuleController:(HUFaceRecognitionUserPhotosLibrarySettingsModuleController *)arg1 ;
-(HUFaceRecognitionUserPhotosLibrarySettingsModuleController *)photosLibrarySettingsModuleController;
-(HUFaceRecognitionUserPhotosLibrarySettingsItemManager *)photosLibrarySettingsItemManager;
-(id)initWithUserPhotosLibraryItem:(id)arg1 ;
-(void)setPhotosLibrarySettingsItemManager:(HUFaceRecognitionUserPhotosLibrarySettingsItemManager *)arg1 ;
@end

