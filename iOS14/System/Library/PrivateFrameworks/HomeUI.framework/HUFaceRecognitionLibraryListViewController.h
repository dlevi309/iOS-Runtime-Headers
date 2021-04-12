/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUTappableTextViewDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUFaceRecognitionPersonEditorViewControllerDelegate.h>

@class HUFaceRecognitionLibraryListItemManager, NSString;

@interface HUFaceRecognitionLibraryListViewController : HUItemTableViewController <UITextViewDelegate, HUTappableTextViewDelegate, HUSwitchCellDelegate, HUFaceRecognitionPersonEditorViewControllerDelegate> {

	HUFaceRecognitionLibraryListItemManager* _listItemManager;

}

@property (nonatomic,retain) HUFaceRecognitionLibraryListItemManager * listItemManager;              //@synthesize listItemManager=_listItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(BOOL)arg2 ;
-(id)trailingSwipeActionsForItem:(id)arg1 ;
-(void)dismissTextViewController;
-(void)personEditorViewController:(id)arg1 didUpdateItem:(id)arg2 ;
-(HUFaceRecognitionLibraryListItemManager *)listItemManager;
-(void)setListItemManager:(HUFaceRecognitionLibraryListItemManager *)arg1 ;
@end

