/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUControlPanelControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUServiceDetailsItemManagerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>
#import <libobjc.A.dylib/HUServiceGroupEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/HUContainedServiceGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUEditRoomViewControllerPresentationDelegate.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>
#import <libobjc.A.dylib/HUControlPanelControllerDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUAccessorySettingsItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUSoftwareUpdateItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HUMediaSystemEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/HUContainedMediaAccessoriesGridViewControllerDelegate.h>
#import <libobjc.A.dylib/HUChildServiceModuleControllerDelegate.h>
#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HUPickerCellDelegate.h>
#import <libobjc.A.dylib/HUHomeAssistantDeviceSplitAccountActionDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HUDetailsPresentationDelegateHost.h>
#import <libobjc.A.dylib/HUServiceLikeItemDetailsViewControllerProtocol.h>

@protocol HUPresentationDelegate;
@class HUNameItemModuleController, HUAccessorySettingsItemModuleController, HUSoftwareUpdateItemModuleController, HUAvailableRelatedTriggerItemModuleController, HUChildServiceItemModuleController, HUAssociatedSceneAndTriggerModuleController, HUTelevisionSettingsItemModuleController, HUServiceDetailsItemManager, HUControlPanelController, NSHashTable, HMHome, UILongPressGestureRecognizer, HUServiceDetailsTextViewDelegate, HFNamingComponents, HUQuickControlSummaryNavigationBarTitleView, UIButton, NAFuture, NSString;

@interface HUServiceDetailsViewController : HUItemTableViewController <HUControlPanelControllerDelegate, HUPresentationDelegate, HUServiceDetailsItemManagerDelegate, HUSwitchCellDelegate, HUServiceGroupEditorViewControllerDelegate, HUContainedServiceGridViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, HUTriggerEditorDelegate, HUControlPanelControllerDelegate, HFAccessoryObserver, UIGestureRecognizerDelegate, HUAccessorySettingsItemModuleControllerDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUMediaSystemEditorViewControllerDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate, HUChildServiceModuleControllerDelegate, HFHomeObserver, HUPickerCellDelegate, HUHomeAssistantDeviceSplitAccountActionDelegate, UINavigationControllerDelegate, HUDetailsPresentationDelegateHost, HUServiceLikeItemDetailsViewControllerProtocol> {

	BOOL _requiresPresentingViewControllerDismissal;
	BOOL _shouldIncludeRoomNameInHeaderTitle;
	BOOL _isMultiServiceAccessory;
	BOOL _isItemGroup;
	BOOL _supportsCustomIconEditing;
	BOOL _shouldTrackProgrammableSwitchActivations;
	BOOL _isPresentingRoomsList;
	id<HUPresentationDelegate> _presentationDelegate;
	HUNameItemModuleController* _nameItemModuleController;
	HUAccessorySettingsItemModuleController* _accessorySettingsItemModuleController;
	HUSoftwareUpdateItemModuleController* _softwareUpdateItemModuleController;
	HUAvailableRelatedTriggerItemModuleController* _associatedTriggerModuleController;
	HUChildServiceItemModuleController* _valveEditorItemModuleController;
	HUChildServiceItemModuleController* _accessoryServicesEditorItemModuleController;
	HUAssociatedSceneAndTriggerModuleController* _sceneAndTriggerModuleController;
	HUTelevisionSettingsItemModuleController* _televisionSettingsItemModuleController;
	HUChildServiceItemModuleController* _inputSourceItemModuleController;
	HUServiceDetailsItemManager* _detailsItemManager;
	HUControlPanelController* _controlPanelController;
	NSHashTable* _expandedControlPanelItems;
	HMHome* _home;
	UILongPressGestureRecognizer* _longPressRecognizer;
	HUServiceDetailsTextViewDelegate* _textViewDelegate;
	HFNamingComponents* _namingComponent;
	HUQuickControlSummaryNavigationBarTitleView* _navigationBarTitleView;
	UIButton* _closeButton;
	NAFuture* _accountFuture;

}

@property (nonatomic,retain) HUNameItemModuleController * nameItemModuleController;                                          //@synthesize nameItemModuleController=_nameItemModuleController - In the implementation block
@property (nonatomic,retain) HUAccessorySettingsItemModuleController * accessorySettingsItemModuleController;                //@synthesize accessorySettingsItemModuleController=_accessorySettingsItemModuleController - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateItemModuleController * softwareUpdateItemModuleController;                      //@synthesize softwareUpdateItemModuleController=_softwareUpdateItemModuleController - In the implementation block
@property (nonatomic,retain) HUAvailableRelatedTriggerItemModuleController * associatedTriggerModuleController;              //@synthesize associatedTriggerModuleController=_associatedTriggerModuleController - In the implementation block
@property (nonatomic,retain) HUChildServiceItemModuleController * valveEditorItemModuleController;                           //@synthesize valveEditorItemModuleController=_valveEditorItemModuleController - In the implementation block
@property (nonatomic,retain) HUChildServiceItemModuleController * accessoryServicesEditorItemModuleController;               //@synthesize accessoryServicesEditorItemModuleController=_accessoryServicesEditorItemModuleController - In the implementation block
@property (nonatomic,retain) HUAssociatedSceneAndTriggerModuleController * sceneAndTriggerModuleController;                  //@synthesize sceneAndTriggerModuleController=_sceneAndTriggerModuleController - In the implementation block
@property (nonatomic,retain) HUTelevisionSettingsItemModuleController * televisionSettingsItemModuleController;              //@synthesize televisionSettingsItemModuleController=_televisionSettingsItemModuleController - In the implementation block
@property (nonatomic,retain) HUChildServiceItemModuleController * inputSourceItemModuleController;                           //@synthesize inputSourceItemModuleController=_inputSourceItemModuleController - In the implementation block
@property (assign,nonatomic,__weak) HUServiceDetailsItemManager * detailsItemManager;                                        //@synthesize detailsItemManager=_detailsItemManager - In the implementation block
@property (nonatomic,readonly) HUControlPanelController * controlPanelController;                                            //@synthesize controlPanelController=_controlPanelController - In the implementation block
@property (nonatomic,readonly) NSHashTable * expandedControlPanelItems;                                                      //@synthesize expandedControlPanelItems=_expandedControlPanelItems - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) BOOL isMultiServiceAccessory;                                                                 //@synthesize isMultiServiceAccessory=_isMultiServiceAccessory - In the implementation block
@property (nonatomic,readonly) BOOL isItemGroup;                                                                             //@synthesize isItemGroup=_isItemGroup - In the implementation block
@property (nonatomic,readonly) BOOL supportsCustomIconEditing;                                                               //@synthesize supportsCustomIconEditing=_supportsCustomIconEditing - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;                                             //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) HUServiceDetailsTextViewDelegate * textViewDelegate;                                            //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
@property (nonatomic,retain) HFNamingComponents * namingComponent;                                                           //@synthesize namingComponent=_namingComponent - In the implementation block
@property (nonatomic,retain) HUQuickControlSummaryNavigationBarTitleView * navigationBarTitleView;                           //@synthesize navigationBarTitleView=_navigationBarTitleView - In the implementation block
@property (assign,nonatomic) BOOL shouldTrackProgrammableSwitchActivations;                                                  //@synthesize shouldTrackProgrammableSwitchActivations=_shouldTrackProgrammableSwitchActivations - In the implementation block
@property (assign,nonatomic) BOOL isPresentingRoomsList;                                                                     //@synthesize isPresentingRoomsList=_isPresentingRoomsList - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) NAFuture * accountFuture;                                                                       //@synthesize accountFuture=_accountFuture - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle;                                                        //@synthesize shouldIncludeRoomNameInHeaderTitle=_shouldIncludeRoomNameInHeaderTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresPresentingViewControllerDismissal;                                                 //@synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal - In the implementation block
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                         //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(id)acceptableItemClasses;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)commitChanges;
-(void)setTextViewDelegate:(HUServiceDetailsTextViewDelegate *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(void)setCloseButton:(UIButton *)arg1 ;
-(BOOL)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldTrackProgrammableSwitchActivations;
-(void)setAccountFuture:(NAFuture *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(HFItem*<HFServiceLikeItem>)item;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(NAFuture *)accountFuture;
-(void)home:(id)arg1 didRemoveMediaSystem:(id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(HFNamingComponents *)namingComponent;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)_longPressRecognized:(id)arg1 ;
-(id)initWithServiceLikeItem:(id)arg1 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isItemGroup;
-(NSString *)description;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)home:(id)arg1 didRemoveServiceGroup:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isCameraItem;
-(BOOL)supportsCustomIconEditing;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(HUServiceDetailsTextViewDelegate *)textViewDelegate;
-(HUQuickControlSummaryNavigationBarTitleView *)navigationBarTitleView;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3 ;
-(void)setNavigationBarTitleView:(HUQuickControlSummaryNavigationBarTitleView *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIButton *)closeButton;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)dealloc;
-(void)setShouldTrackProgrammableSwitchActivations:(BOOL)arg1 ;
-(HMHome *)home;
-(id)buildItemModuleControllerForModule:(id)arg1 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(BOOL)requiresPresentingViewControllerDismissal;
-(void)setRequiresPresentingViewControllerDismissal:(BOOL)arg1 ;
-(void)serviceGroupEditor:(id)arg1 didCreateServiceGroup:(id)arg2 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)setShouldIncludeRoomNameInHeaderTitle:(BOOL)arg1 ;
-(void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(id)_removeItem;
-(id)itemModuleControllers;
-(void)dismissPrivacyController;
-(void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2 ;
-(long long)numberOfValuesForPickerViewCell:(id)arg1 ;
-(id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2 ;
-(BOOL)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2 ;
-(BOOL)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2 ;
-(HUServiceDetailsItemManager *)detailsItemManager;
-(void)checkForAccessoriesNeedingReprovisioning;
-(void)_updateControlStatusText;
-(void)_updateIconDescriptorAnimated:(BOOL)arg1 ;
-(void)_executeSilentSoftwareUpdateCheck;
-(id)_commitBuilder;
-(HUNameItemModuleController *)nameItemModuleController;
-(id)_recoverItemBuilder:(id)arg1 fromError:(id)arg2 ;
-(id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(BOOL)arg2 ;
-(id)_secondaryStatusTextForLatestResults:(id)arg1 ;
-(BOOL)shouldIncludeRoomNameInHeaderTitle;
-(void)setNameItemModuleController:(HUNameItemModuleController *)arg1 ;
-(void)setSceneAndTriggerModuleController:(HUAssociatedSceneAndTriggerModuleController *)arg1 ;
-(HUAssociatedSceneAndTriggerModuleController *)sceneAndTriggerModuleController;
-(void)setAssociatedTriggerModuleController:(HUAvailableRelatedTriggerItemModuleController *)arg1 ;
-(HUAvailableRelatedTriggerItemModuleController *)associatedTriggerModuleController;
-(HUAccessorySettingsItemModuleController *)accessorySettingsItemModuleController;
-(void)setAccessorySettingsItemModuleController:(HUAccessorySettingsItemModuleController *)arg1 ;
-(HUSoftwareUpdateItemModuleController *)softwareUpdateItemModuleController;
-(void)setSoftwareUpdateItemModuleController:(HUSoftwareUpdateItemModuleController *)arg1 ;
-(HUChildServiceItemModuleController *)valveEditorItemModuleController;
-(void)setValveEditorItemModuleController:(HUChildServiceItemModuleController *)arg1 ;
-(HUChildServiceItemModuleController *)accessoryServicesEditorItemModuleController;
-(BOOL)isMultiServiceAccessory;
-(void)setAccessoryServicesEditorItemModuleController:(HUChildServiceItemModuleController *)arg1 ;
-(HUTelevisionSettingsItemModuleController *)televisionSettingsItemModuleController;
-(void)setTelevisionSettingsItemModuleController:(HUTelevisionSettingsItemModuleController *)arg1 ;
-(HUChildServiceItemModuleController *)inputSourceItemModuleController;
-(void)setInputSourceItemModuleController:(HUChildServiceItemModuleController *)arg1 ;
-(HUControlPanelController *)controlPanelController;
-(void)_setupProgrammableSwitchCell:(id)arg1 forItem:(id)arg2 ;
-(id)_createMenuWithValues:(id)arg1 cell:(id)arg2 currentItem:(id)arg3 ;
-(void)didSelectHeaderWarningAction:(id)arg1 ;
-(NSHashTable *)expandedControlPanelItems;
-(BOOL)_shouldShowDetailDisclosureForItem:(id)arg1 ;
-(void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2 ;
-(void)_didSelectRoomItem:(id)arg1 ;
-(void)_updateName:(id)arg1 ;
-(BOOL)_allowRowSelectionForItem:(id)arg1 ;
-(void)setIsPresentingRoomsList:(BOOL)arg1 ;
-(void)addRoomButtonPressed:(id)arg1 ;
-(void)_presentGroupPicker;
-(void)_separateOrUnifyTile;
-(void)_presentContainedItems;
-(void)_presentRemoveConfirmation:(id)arg1 ;
-(void)_presentResetHomePodConfirmation:(id)arg1 ;
-(void)_restartGroupedHomePodAccessory;
-(void)_updateAssociatedServiceTypeCells;
-(void)_presentTriggerEditorForProgrammableSwitchEventOptionItem:(id)arg1 ;
-(void)didSelectHomeAssistantDeviceSplitAccountAction:(unsigned long long)arg1 ;
-(id)_roomForItem:(id)arg1 ;
-(BOOL)isPresentingRoomsList;
-(id)_characteristicsAffectedByControlItem:(id)arg1 ;
-(id)_magicallyUpdateNavigationStackForNewRootItem:(id)arg1 topViewController:(id)arg2 ;
-(BOOL)_notifyOfHomeTheaterReconfigurationIfNecessary:(id)arg1 ;
-(BOOL)_shouldShowAddButtonForOptionItem:(id)arg1 ;
-(void)_restartHomePod;
-(BOOL)_shouldPresentRemoveRouterConfirmation;
-(void)_presentRemoveRouterConfirmation;
-(void)dismissTriggerActionEditorViewController:(id)arg1 ;
-(void)_notifyOfHomePodPairingIfNecessary:(id)arg1 ;
-(void)_offerToCreateHomeTheaterIfPossible:(id)arg1 ;
-(void)mediaSystemEditor:(id)arg1 didCreateMediaSystem:(id)arg2 ;
-(void)_didRemoveHomeKitObject:(id)arg1 ;
-(void)_setDismissedHomePodHasNonMemberMediaAccountWarning:(BOOL)arg1 ;
-(void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2 ;
-(void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2 ;
-(id)itemManager:(id)arg1 sectionTitleForControlPanelItem:(id)arg2 forServiceItem:(id)arg3 ;
-(id)itemManager:(id)arg1 sectionFooterForControlPanelItem:(id)arg2 forServiceItem:(id)arg3 ;
-(id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2 ;
-(id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2 ;
-(id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2 ;
-(void)mediaSystemEditor:(id)arg1 didAbortMediaSystemCreationDueToAccessoryNeedingUpdate:(id)arg2 ;
-(id)detailsViewControllerForContainedMediaAccessoryGridViewController:(id)arg1 item:(id)arg2 ;
-(id)childServiceEditorModuleController:(id)arg1 didSelectItem:(id)arg2 ;
-(BOOL)_allowRowHighlightForItem:(id)arg1 ;
-(void)setDetailsItemManager:(HUServiceDetailsItemManager *)arg1 ;
@end

