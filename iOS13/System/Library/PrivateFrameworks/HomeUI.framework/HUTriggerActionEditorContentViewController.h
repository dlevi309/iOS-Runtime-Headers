/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class HFTriggerBuilder, HUTriggerActionFlow, UINavigationItem, NSString;

@interface HUTriggerActionEditorContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	HFTriggerBuilder* _triggerBuilder;
	HUTriggerActionFlow* _flow;
	UINavigationItem* _effectiveNavigationItem;
	unsigned long long _forceDisableReasonsForSecureCharacteristicControl;

}

@property (nonatomic,retain) HFTriggerBuilder * triggerBuilder;                                                 //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,retain) HUTriggerActionFlow * flow;                                                        //@synthesize flow=_flow - In the implementation block
@property (assign,nonatomic) unsigned long long forceDisableReasonsForSecureCharacteristicControl;              //@synthesize forceDisableReasonsForSecureCharacteristicControl=_forceDisableReasonsForSecureCharacteristicControl - In the implementation block
@property (nonatomic,readonly) UINavigationItem * effectiveNavigationItem;                                      //@synthesize effectiveNavigationItem=_effectiveNavigationItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerEditorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(HUTriggerActionFlow *)flow;
-(void)_cancel:(id)arg1 ;
-(void)setFlow:(HUTriggerActionFlow *)arg1 ;
-(void)_next:(id)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(HFTriggerBuilder *)triggerBuilder;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(void)_validateDoneButton;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(BOOL)_canSelectMediaAccessoryItem:(id)arg1 ;
-(void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setTriggerBuilder:(HFTriggerBuilder *)arg1 ;
-(UINavigationItem *)effectiveNavigationItem;
-(void)didChangeSelection;
-(id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 effectiveNavigationItem:(id)arg3 delegate:(id)arg4 ;
-(id)triggerBuilderFutureWithLatestUIChanges;
-(void)goToSummaryScreen;
-(void)_setUpNavButtons;
-(void)_updateSelectedServicesAndActionSets;
-(id)_triggerBuilderFuture;
-(void)_goToSummaryScreen:(id)arg1 ;
-(unsigned long long)_triggerForceDisableReasonsForActionItem:(id)arg1 ;
-(unsigned long long)forceDisableReasonsForSecureCharacteristicControl;
-(void)setForceDisableReasonsForSecureCharacteristicControl:(unsigned long long)arg1 ;
-(void)_popAlertWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 actions:(id)arg3 ;
-(id)_updateTriggerBuilderActionSets;
-(id)_updateTriggerBuilderAnonymousActions;
-(void)_removeDeletedActionSetsItems:(id)arg1 fromTriggerBuilder:(id)arg2 ;
-(void)_addActionSetItems:(id)arg1 toTriggerBuilder:(id)arg2 inHome:(id)arg3 ;
-(void)_removeDeletedServiceItems:(id)arg1 fromTriggerBuilder:(id)arg2 ;
-(void)_updateOrRemoveDeletedMediaItems:(id)arg1 fromTriggerBuilder:(id)arg2 ;
@end

