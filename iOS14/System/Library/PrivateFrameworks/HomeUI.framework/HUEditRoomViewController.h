/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperEditingViewControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperThumbnailCellDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerInlineViewControllerDelegate.h>

@protocol HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate;
@class HFRoomBuilder, HUZoneModuleController, HUWallpaperPickerInlineViewController, HUEditRoomItemManager, HUEditableTextCell, UIBarButtonItem, NSString;

@interface HUEditRoomViewController : HUItemTableViewController <UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate> {

	HFRoomBuilder* _roomBuilder;
	id<HUEditRoomViewControllerPresentationDelegate> _presentationDelegate;
	id<HUEditRoomViewControllerAddRoomDelegate> _addRoomDelegate;
	HUZoneModuleController* _zoneModuleController;
	HUWallpaperPickerInlineViewController* _wallpaperPickerController;
	HUEditRoomItemManager* _roomItemManager;
	HUEditableTextCell* _nameCell;
	UIBarButtonItem* _savedButtonBarItem;

}

@property (nonatomic,retain) HUZoneModuleController * zoneModuleController;                                               //@synthesize zoneModuleController=_zoneModuleController - In the implementation block
@property (nonatomic,retain) HUWallpaperPickerInlineViewController * wallpaperPickerController;                           //@synthesize wallpaperPickerController=_wallpaperPickerController - In the implementation block
@property (assign,nonatomic,__weak) HUEditRoomItemManager * roomItemManager;                                              //@synthesize roomItemManager=_roomItemManager - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextCell * nameCell;                                                        //@synthesize nameCell=_nameCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedButtonBarItem;                                                        //@synthesize savedButtonBarItem=_savedButtonBarItem - In the implementation block
@property (nonatomic,readonly) HFRoomBuilder * roomBuilder;                                                               //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (nonatomic,__weak,readonly) id<HUEditRoomViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HUEditRoomViewControllerAddRoomDelegate> addRoomDelegate;                        //@synthesize addRoomDelegate=_addRoomDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)doneButtonPressed:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id<HUEditRoomViewControllerPresentationDelegate>)presentationDelegate;
-(HFRoomBuilder *)roomBuilder;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)updateTitle;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HUEditableTextCell *)nameCell;
-(void)cancelButtonPressed:(id)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3 ;
-(void)wallpaperEditingDidCancel:(id)arg1 ;
-(id)initWithRoomBuilder:(id)arg1 presentationDelegate:(id)arg2 addRoomDelegate:(id)arg3 ;
-(void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1 ;
-(void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3 ;
-(void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2 ;
-(id)itemModuleControllers;
-(void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3 ;
-(void)addButtonPressed:(id)arg1 ;
-(void)setSavedButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)savedButtonBarItem;
-(void)setNameCell:(HUEditableTextCell *)arg1 ;
-(void)updateWallpaper:(id)arg1 image:(id)arg2 ;
-(void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2 ;
-(id<HUEditRoomViewControllerAddRoomDelegate>)addRoomDelegate;
-(void)_resignTextFieldFirstResponder;
-(HUZoneModuleController *)zoneModuleController;
-(HUEditRoomItemManager *)roomItemManager;
-(void)nameFieldTextChanged:(id)arg1 ;
-(HUWallpaperPickerInlineViewController *)wallpaperPickerController;
-(void)presentWallpaperEditingViewControllerWithImage:(id)arg1 wallpaper:(id)arg2 ;
-(id)_allTextFields;
-(void)setZoneModuleController:(HUZoneModuleController *)arg1 ;
-(void)setWallpaperPickerController:(HUWallpaperPickerInlineViewController *)arg1 ;
-(void)setRoomItemManager:(HUEditRoomItemManager *)arg1 ;
@end

