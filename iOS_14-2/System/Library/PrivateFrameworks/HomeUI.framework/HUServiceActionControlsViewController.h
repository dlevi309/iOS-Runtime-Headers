/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUServiceActionControlsItemManagerDelegate.h>
#import <libobjc.A.dylib/HUControlPanelControllerDelegate.h>
#import <libobjc.A.dylib/HUDetailsPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HUServiceActionControlsViewControllerDelegate;
@class HFServiceActionItem, HUControlPanelController, NSString;

@interface HUServiceActionControlsViewController : HUItemTableViewController <HUServiceActionControlsItemManagerDelegate, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost> {

	BOOL _requiresPresentingViewControllerDismissal;
	id<HUPresentationDelegate> _presentationDelegate;
	HFServiceActionItem* _serviceActionItem;
	unsigned long long _mode;
	id<HUServiceActionControlsViewControllerDelegate> _serviceActionControlsDelegate;
	HUControlPanelController* _controlPanelController;

}

@property (nonatomic,retain) HFServiceActionItem * serviceActionItem;                                                             //@synthesize serviceActionItem=_serviceActionItem - In the implementation block
@property (nonatomic,retain) HUControlPanelController * controlPanelController;                                                   //@synthesize controlPanelController=_controlPanelController - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceActionControlsViewControllerDelegate> serviceActionControlsDelegate;              //@synthesize serviceActionControlsDelegate=_serviceActionControlsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresPresentingViewControllerDismissal;                                                      //@synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal - In the implementation block
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(unsigned long long)mode;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)requiresPresentingViewControllerDismissal;
-(void)setRequiresPresentingViewControllerDismissal:(BOOL)arg1 ;
-(void)setServiceActionItem:(HFServiceActionItem *)arg1 ;
-(HFServiceActionItem *)serviceActionItem;
-(BOOL)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2 ;
-(BOOL)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2 ;
-(HUControlPanelController *)controlPanelController;
-(void)setControlPanelController:(HUControlPanelController *)arg1 ;
-(id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2 ;
-(id<HUServiceActionControlsViewControllerDelegate>)serviceActionControlsDelegate;
-(void)setServiceActionControlsDelegate:(id<HUServiceActionControlsViewControllerDelegate>)arg1 ;
@end

