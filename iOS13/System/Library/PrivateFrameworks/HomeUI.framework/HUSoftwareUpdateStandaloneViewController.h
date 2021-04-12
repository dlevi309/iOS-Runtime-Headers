/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSoftwareUpdateItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HUSoftwareUpdateItemModuleController, NAFuture, HUSoftwareUpdateStandaloneItemManager, NSString;

@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate> {

	HUSoftwareUpdateItemModuleController* _softwareUpdateModule;
	NAFuture* _softwareUpdateFetchFuture;

}

@property (nonatomic,readonly) HUSoftwareUpdateStandaloneItemManager * itemManager; 
@property (nonatomic,retain) HUSoftwareUpdateItemModuleController * softwareUpdateModule;              //@synthesize softwareUpdateModule=_softwareUpdateModule - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;                                     //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)itemModuleControllers;
-(id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2 ;
-(id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2 ;
-(id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2 ;
-(void)_kickoffSoftwareUpdate;
-(HUSoftwareUpdateItemModuleController *)softwareUpdateModule;
-(void)setSoftwareUpdateModule:(HUSoftwareUpdateItemModuleController *)arg1 ;
-(void)_setupRefreshControl;
-(void)_triggerRefresh:(id)arg1 ;
-(NAFuture *)softwareUpdateFetchFuture;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
@end

