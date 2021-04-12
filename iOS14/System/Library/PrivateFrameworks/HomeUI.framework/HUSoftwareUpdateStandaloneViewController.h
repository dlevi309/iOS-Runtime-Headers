/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSoftwareUpdateItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HUSoftwareUpdateItemModuleController, NAFuture, HUSoftwareUpdateStandaloneItemManager, NSString;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate> {

	BOOL _showDoneButtonInNavBar;
	BOOL _allowRefresh;
	HUSoftwareUpdateItemModuleController* _softwareUpdateItemModuleController;
	NAFuture* _softwareUpdateFetchFuture;

}

@property (nonatomic,readonly) HUSoftwareUpdateStandaloneItemManager * itemManager; 
@property (nonatomic,retain) HUSoftwareUpdateItemModuleController * softwareUpdateItemModuleController;              //@synthesize softwareUpdateItemModuleController=_softwareUpdateItemModuleController - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;                                                   //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
@property (assign,nonatomic) BOOL allowRefresh;                                                                      //@synthesize allowRefresh=_allowRefresh - In the implementation block
@property (assign,nonatomic) BOOL showDoneButtonInNavBar;                                                            //@synthesize showDoneButtonInNavBar=_showDoneButtonInNavBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keyCommands;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)doneButtonPressed:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)itemModuleControllers;
-(HUSoftwareUpdateItemModuleController *)softwareUpdateItemModuleController;
-(void)setSoftwareUpdateItemModuleController:(HUSoftwareUpdateItemModuleController *)arg1 ;
-(id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2 ;
-(id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2 ;
-(id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2 ;
-(BOOL)showDoneButtonInNavBar;
-(void)_kickoffSoftwareUpdate;
-(void)setAllowRefresh:(BOOL)arg1 ;
-(void)_triggerRefresh:(id)arg1 ;
-(NAFuture *)softwareUpdateFetchFuture;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(void)_setupRefreshControl;
-(BOOL)allowRefresh;
-(void)setShowDoneButtonInNavBar:(BOOL)arg1 ;
@end

