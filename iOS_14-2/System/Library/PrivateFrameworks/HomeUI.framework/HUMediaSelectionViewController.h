/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUMediaSelectionViewControllerDelegate>)delegate;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2 ;
-(void)setDelegate:(id<HUMediaSelectionViewControllerDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(HUMediaSelectionItemManager *)mediaSelectionItemManager;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)_allowRowInteractionForIndexPath:(id)arg1 ;
-(void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2 ;
-(void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg1 pickingForExternalPlayer:(BOOL)arg2 ;
-(void)applyAccessory:(long long)arg1 toItem:(id)arg2 onTableView:(id)arg3 ;
-(void)setLastTargetOptions:(unsigned long long)arg1 ;
-(unsigned long long)lastTargetOptions;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(void)setMediaSelectionItemManager:(HUMediaSelectionItemManager *)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithActionSetBuilder:(id)arg1 ;
@end

