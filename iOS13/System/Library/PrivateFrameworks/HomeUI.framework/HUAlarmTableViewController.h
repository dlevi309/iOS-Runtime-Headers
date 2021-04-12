/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAlarmEditViewControllerDelegate.h>
#import <libobjc.A.dylib/HUHomePodAlarmItemModuleControllerDelegate.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <libobjc.A.dylib/HFAccessorySettingMobileTimerAdapterObserver.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, HFMediaProfileContainer;
@class UIBarButtonItem, HUHomePodAlarmItemModuleController, MTAlarm, _UIContentUnavailableView, NSString;

@interface HUAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, HUPresentationDelegateHost> {

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
-(id)backgroundView;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)accessoryDidUpdateReachableTransports:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)setDoneButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)mobileTimerAdapterDidUpdateReadiness:(id)arg1 ;
-(UIBarButtonItem *)addButtonItem;
-(void)setAddButtonItem:(UIBarButtonItem *)arg1 ;
-(void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(id)itemModuleControllers;
-(void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2 ;
-(void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2 ;
-(void)alarmEditControllerDidCancel:(id)arg1 ;
-(void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2 ;
-(void)_showAddView:(id)arg1 ;
-(void)_editDoneAction:(id)arg1 ;
-(void)_discernReachabilityForAccessory:(id)arg1 ;
-(HUHomePodAlarmItemModuleController *)alarmModuleController;
-(void)_updateNavigationItems:(BOOL)arg1 ;
-(void)_numberOfItemsDidChangeAnimated:(BOOL)arg1 ;
-(_UIContentUnavailableView *)noItemsView;
-(void)_layoutNoItemsLabel;
-(id)editViewControllerForAlarm:(id)arg1 ;
-(id)alarmItemManager;
-(BOOL)isAccessoryControllable;
-(BOOL)isAlarmsSettingReady;
-(void)setNoItemsView:(_UIContentUnavailableView *)arg1 ;
-(UIBarButtonItem *)editDoneButtonItem;
-(void)_updateAccessoryControllable:(BOOL)arg1 alarmsSettingReady:(BOOL)arg2 ;
-(BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
-(void)setAlarmModuleController:(HUHomePodAlarmItemModuleController *)arg1 ;
-(MTAlarm *)alarmToEdit;
-(void)setAlarmToEdit:(MTAlarm *)arg1 ;
-(void)setEditDoneButtonItem:(UIBarButtonItem *)arg1 ;
@end

