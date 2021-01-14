/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSearchableItemTableViewController.h>

@protocol HUFaceRecognitionAddPersonViewControllerDelegate;
@class HUFaceRecognitionAddPersonItemManager, UIBarButtonItem;

@interface HUFaceRecognitionAddPersonViewController : HUSearchableItemTableViewController {

	id<HUFaceRecognitionAddPersonViewControllerDelegate> _delegate;
	HUFaceRecognitionAddPersonItemManager* _addPersonItemManager;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,readonly) HUFaceRecognitionAddPersonItemManager * addPersonItemManager;                    //@synthesize addPersonItemManager=_addPersonItemManager - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * doneButton;                                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic,__weak) id<HUFaceRecognitionAddPersonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<HUFaceRecognitionAddPersonViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUFaceRecognitionAddPersonViewControllerDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithSignificantEvent:(id)arg1 home:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4 ;
-(void)_donePressed:(id)arg1 ;
-(HUFaceRecognitionAddPersonItemManager *)addPersonItemManager;
-(void)updateForSearch;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
@end

