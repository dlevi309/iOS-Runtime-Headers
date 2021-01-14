/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAlarmEditViewControllerDelegate.h>
#import <libobjc.A.dylib/HUHomePodAlarmItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <libobjc.A.dylib/HFAccessorySettingMobileTimerAdapterObserver.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HFMediaProfileContainer;
@class UIBarButtonItem, HUHomePodAlarmItemModuleController, MTAlarm, _UIContentUnavailableView, NSString;

@interface HUAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, UITableViewDelegatePrivate, HUPresentationDelegateHost> {

	BOOL _isAccessoryControllable;
	BOOL _isAlarmsSettingReady;
	id<HUPresentationDelegate> _presentationDelegate;
	UIBarButtonItem* _doneButtonItem;
	HUHomePodAlarmItemModuleController* _alarmModuleController;
	MTAlarm* _alarmToEdit;
	_UIContentUnavailableView* _noItemsView;
	UIBarButtonItem* _addButtonItem;
	UIBarButtonItem* _editDoneButtonItem;
	id<HFMediaProfileContainer> _mediaProfileContainer;

}

@property (nonatomic,retain) HUHomePodAlarmItemModuleController * alarmModuleController;              //@synthesize alarmModuleController=_alarmModuleController - In the implementation block
@property (nonatomic,retain) MTAlarm * alarmToEdit;                                                   //@synthesize alarmToEdit=_alarmToEdit - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * noItemsView;                                 //@synthesize noItemsView=_noItemsView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addButtonItem;                                         //@synthesize addButtonItem=_addButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editDoneButtonItem;                                    //@synthesize editDoneButtonItem=_editDoneButtonItem - In the implementation block
@property (nonatomic,readonly) BOOL isAccessoryControllable;                                          //@synthesize isAccessoryControllable=_isAccessoryControllable - In the implementation block
@property (nonatomic,readonly) BOOL isAlarmsSettingReady;                                             //@synthesize isAlarmsSettingReady=_isAlarmsSettingReady - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                     //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButtonItem;                                        //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                  //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(id)backgroundView;
-(void)alarmItemModuleController:(id)arg1 didSelectAlarmItem:(id)arg2 ;
-(UIBarButtonItem *)doneButtonItem;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)mobileTimerAdapterDidUpdateReadiness:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(CGSize)preferredContentSize;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(double)heightForFooterInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(void)presentAddNewAlarmViewController;
-(BOOL)isAccessoryControllable;
-(id)itemModuleControllers;
-(void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2 forMediaProfile:(id)arg3 ;
-(void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2 forMediaProfile:(id)arg3 ;
-(void)alarmEditController:(id)arg1 didMoveAlarm:(id)arg2 fromProfile:(id)arg3 toProfile:(id)arg4 ;
-(void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2 forMediaProfile:(id)arg3 ;
-(void)alarmEditControllerDidCancel:(id)arg1 ;
-(void)_showAddView:(id)arg1 ;
-(void)_editDoneAction:(id)arg1 ;
-(void)_discernReachabilityForAccessory:(id)arg1 ;
-(HUHomePodAlarmItemModuleController *)alarmModuleController;
-(void)_updateNavigationItems:(BOOL)arg1 ;
-(void)_numberOfItemsDidChangeAnimated:(BOOL)arg1 ;
-(_UIContentUnavailableView *)noItemsView;
-(void)_layoutNoItemsLabel;
-(id)editViewControllerForAlarmItem:(id)arg1 ;
-(id)alarmItemManager;
-(BOOL)isAlarmsSettingReady;
-(void)setNoItemsView:(_UIContentUnavailableView *)arg1 ;
-(UIBarButtonItem *)editDoneButtonItem;
-(UIBarButtonItem *)addButtonItem;
-(void)_updateAccessoryControllable:(BOOL)arg1 alarmsSettingReady:(BOOL)arg2 ;
-(BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
-(void)setAlarmModuleController:(HUHomePodAlarmItemModuleController *)arg1 ;
-(MTAlarm *)alarmToEdit;
-(void)setAlarmToEdit:(MTAlarm *)arg1 ;
-(void)setAddButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setEditDoneButtonItem:(UIBarButtonItem *)arg1 ;
@end

