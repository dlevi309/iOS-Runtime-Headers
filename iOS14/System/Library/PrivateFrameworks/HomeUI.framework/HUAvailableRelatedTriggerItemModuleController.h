/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUIconSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>
#import <libobjc.A.dylib/HFItemSectionAccessoryButtonHeaderDelegate.h>

@class UIViewController, NAFuture, UIActivityIndicatorView, HUAccessoryButtonTableViewHeaderView, HUAvailableRelatedTriggerItemModule, NSString;

@interface HUAvailableRelatedTriggerItemModuleController : HUItemTableModuleController <HUIconSwitchCellDelegate, HUTriggerEditorDelegate, HFItemSectionAccessoryButtonHeaderDelegate> {

	BOOL _editing;
	UIViewController* _addAutomationPresentedViewController;
	NAFuture* _addAutomationPresentingFuture;
	UIActivityIndicatorView* _addAutomationActivityIndicator;
	HUAccessoryButtonTableViewHeaderView* _sectionEditButtonHeader;

}

@property (nonatomic,retain) HUAvailableRelatedTriggerItemModule * module; 
@property (nonatomic,retain) UIViewController * addAutomationPresentedViewController;                            //@synthesize addAutomationPresentedViewController=_addAutomationPresentedViewController - In the implementation block
@property (nonatomic,retain) NAFuture * addAutomationPresentingFuture;                                           //@synthesize addAutomationPresentingFuture=_addAutomationPresentingFuture - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * addAutomationActivityIndicator;                           //@synthesize addAutomationActivityIndicator=_addAutomationActivityIndicator - In the implementation block
@property (assign,nonatomic,__weak) HUAccessoryButtonTableViewHeaderView * sectionEditButtonHeader;              //@synthesize sectionEditButtonHeader=_sectionEditButtonHeader - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                                       //@synthesize editing=_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)commitSelectedItems;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(BOOL)editing;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)_dismissViewController:(id)arg1 ;
-(void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2 ;
-(id)_activateItem:(id)arg1 active:(BOOL)arg2 ;
-(void)_updateUIAnimated:(BOOL)arg1 ;
-(id)_handleError:(id)arg1 retryBlock:(/*^block*/id)arg2 ;
-(UIActivityIndicatorView *)addAutomationActivityIndicator;
-(void)_presentTriggerSummaryForAvailableTriggerItem:(id)arg1 ;
-(void)_presentAddAutomationViewController;
-(void)_presentTriggerSummaryForTriggerBuilder:(id)arg1 flow:(id)arg2 ;
-(void)_enableItemPressed:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setSectionEditButtonHeader:(HUAccessoryButtonTableViewHeaderView *)arg1 ;
-(HUAccessoryButtonTableViewHeaderView *)sectionEditButtonHeader;
-(UIViewController *)addAutomationPresentedViewController;
-(void)setAddAutomationPresentedViewController:(UIViewController *)arg1 ;
-(NAFuture *)addAutomationPresentingFuture;
-(id)_createAddAutomationViewController;
-(void)_addAutomationCancelButtonPressed;
-(void)setAddAutomationPresentingFuture:(NAFuture *)arg1 ;
-(id)_addAutomationViewControllerWithAlarmCharacteristics:(id)arg1 ;
-(id)_addAutomationViewControllerWithActionFactories:(id)arg1 ;
-(void)setAddAutomationActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

