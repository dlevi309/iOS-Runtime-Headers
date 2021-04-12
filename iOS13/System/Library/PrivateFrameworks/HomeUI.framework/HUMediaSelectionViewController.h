/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegatePrivate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUSliderValueTableViewCellDelegate.h>

@protocol HUMediaSelectionViewControllerDelegate;
@class HUMediaSelectionItemManager, NSString;

@interface HUMediaSelectionViewController : HUItemTableViewController <MPMediaPickerControllerDelegatePrivate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate> {

	id<HUMediaSelectionViewControllerDelegate> _delegate;
	HUMediaSelectionItemManager* _mediaSelectionItemManager;
	unsigned long long _lastTargetOptions;

}

@property (nonatomic,retain) HUMediaSelectionItemManager * mediaSelectionItemManager;                 //@synthesize mediaSelectionItemManager=_mediaSelectionItemManager - In the implementation block
@property (assign,nonatomic) unsigned long long lastTargetOptions;                                    //@synthesize lastTargetOptions=_lastTargetOptions - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUMediaSelectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUMediaSelectionViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(HUMediaSelectionItemManager *)mediaSelectionItemManager;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)_allowRowInteractionForIndexPath:(id)arg1 ;
-(void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2 ;
-(void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg1 pickingForExternalPlayer:(BOOL)arg2 ;
-(void)applyAccessory:(long long)arg1 toItem:(id)arg2 onTableView:(id)arg3 ;
-(void)setLastTargetOptions:(unsigned long long)arg1 ;
-(id)_musicAppURL;
-(unsigned long long)lastTargetOptions;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(void)setMediaSelectionItemManager:(HUMediaSelectionItemManager *)arg1 ;
@end

