/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAboutResidentDeviceViewControllerDelegate.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>
#import <libobjc.A.dylib/HUColoredButtonCellDelegate.h>
#import <libobjc.A.dylib/HUTriggerListSubheadlineCellDelegate.h>

@class HUDashboardNavigationButton, HUTriggerListItemManager, HUGridLayoutOptions, NSString;

@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUTriggerEditorDelegate, HUColoredButtonCellDelegate, HUTriggerListSubheadlineCellDelegate> {

	BOOL _isTransitioningSizes;
	HUDashboardNavigationButton* _navigationAddButton;
	HUTriggerListItemManager* _triggerItemManager;
	unsigned long long _editorPresentationMode;
	HUGridLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) HUDashboardNavigationButton * navigationAddButton;              //@synthesize navigationAddButton=_navigationAddButton - In the implementation block
@property (nonatomic,readonly) HUTriggerListItemManager * triggerItemManager;                  //@synthesize triggerItemManager=_triggerItemManager - In the implementation block
@property (assign,nonatomic) unsigned long long editorPresentationMode;                        //@synthesize editorPresentationMode=_editorPresentationMode - In the implementation block
@property (assign,nonatomic) BOOL isTransitioningSizes;                                        //@synthesize isTransitioningSizes=_isTransitioningSizes - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(void)viewDidLoad;
-(HUGridLayoutOptions *)layoutOptions;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(HUDashboardNavigationButton *)navigationAddButton;
-(void)_updateRightBarButtons;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)setIsTransitioningSizes:(BOOL)arg1 ;
-(BOOL)isTransitioningSizes;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)coloredButtonCellPressed:(id)arg1 ;
-(void)learnMoreLinkTapped:(id)arg1 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg1 ;
-(void)_addTrigger:(id)arg1 ;
-(void)setEditorPresentationMode:(unsigned long long)arg1 ;
-(void)_showSummaryForTriggerItem:(id)arg1 ;
-(unsigned long long)editorPresentationMode;
-(HUTriggerListItemManager *)triggerItemManager;
-(void)showAddTriggerView;
@end

