/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <libobjc.A.dylib/HFOverrideCharacteristicValueProvider.h>
#import <libobjc.A.dylib/HUQuickControlViewControllerDelegate.h>

@protocol NSCopying, HUQuickControlViewControllerCoordinatorDelegate, HUQuickControlContentHosting, HFIconDescriptor;
@class HMHome, HFItem, HUQuickControlViewController, NSString, HFOverrideCharacteristicValueSource, HFSimpleItemManager, NSSet, HUQuickControlContentCharacteristicWritingUpdateAdapter;

@interface HUQuickControlViewControllerCoordinator : NSObject <HFItemManagerDelegate, HFOverrideCharacteristicValueProvider, HUQuickControlViewControllerDelegate> {

	BOOL _controlsVisible;
	BOOL _shouldIncludeRoomNameInHeaderTitle;
	BOOL _showIconOffState;
	BOOL _reachable;
	HMHome* _home;
	HFItem*<NSCopying> _item;
	id<HUQuickControlViewControllerCoordinatorDelegate> _delegate;
	id<HUQuickControlContentHosting> _controlHost;
	HUQuickControlViewController* _activeController;
	id<HFIconDescriptor> _iconDescriptor;
	NSString* _primaryStatusText;
	NSString* _secondaryStatusText;
	HFOverrideCharacteristicValueSource* _valueSource;
	HFSimpleItemManager* _itemManager;
	NSSet* _controlItems;
	HFItem* _reachabilityItem;
	HFSimpleItemManager* _reachabilityItemManager;
	HUQuickControlContentCharacteristicWritingUpdateAdapter* _characteristicWritingAdapter;

}

@property (nonatomic,retain) HUQuickControlViewController * activeController;                                                       //@synthesize activeController=_activeController - In the implementation block
@property (nonatomic,copy) NSString * primaryStatusText;                                                                            //@synthesize primaryStatusText=_primaryStatusText - In the implementation block
@property (nonatomic,copy) NSString * secondaryStatusText;                                                                          //@synthesize secondaryStatusText=_secondaryStatusText - In the implementation block
@property (nonatomic,readonly) HFOverrideCharacteristicValueSource * valueSource;                                                   //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HFSimpleItemManager * itemManager;                                                                   //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,readonly) NSSet * controlItems;                                                                                //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,readonly) HFItem * reachabilityItem;                                                                           //@synthesize reachabilityItem=_reachabilityItem - In the implementation block
@property (nonatomic,readonly) HFSimpleItemManager * reachabilityItemManager;                                                       //@synthesize reachabilityItemManager=_reachabilityItemManager - In the implementation block
@property (nonatomic,readonly) HUQuickControlContentCharacteristicWritingUpdateAdapter * characteristicWritingAdapter;              //@synthesize characteristicWritingAdapter=_characteristicWritingAdapter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFItem*<NSCopying> item;                                                                             //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewControllerCoordinatorDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlContentHosting> controlHost;                                                   //@synthesize controlHost=_controlHost - In the implementation block
@property (assign,getter=areControlsVisible,nonatomic) BOOL controlsVisible;                                                        //@synthesize controlsVisible=_controlsVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeRoomNameInHeaderTitle;                                                               //@synthesize shouldIncludeRoomNameInHeaderTitle=_shouldIncludeRoomNameInHeaderTitle - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;                                                                 //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL showIconOffState;                                                                               //@synthesize showIconOffState=_showIconOffState - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable;                                                                   //@synthesize reachable=_reachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isReachable;
-(id<HUQuickControlViewControllerCoordinatorDelegate>)delegate;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(HFItem*<NSCopying>)item;
-(BOOL)areControlsVisible;
-(void)setControlsVisible:(BOOL)arg1 ;
-(BOOL)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2 ;
-(id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2 ;
-(void)setDelegate:(id<HUQuickControlViewControllerCoordinatorDelegate>)arg1 ;
-(HFSimpleItemManager *)itemManager;
-(id<HFIconDescriptor>)iconDescriptor;
-(NSSet *)controlItems;
-(HFOverrideCharacteristicValueSource *)valueSource;
-(HMHome *)home;
-(void)quickControlViewControllerDidUpdateStatusOverrides:(id)arg1 ;
-(void)setShouldIncludeRoomNameInHeaderTitle:(BOOL)arg1 ;
-(HUQuickControlContentCharacteristicWritingUpdateAdapter *)characteristicWritingAdapter;
-(id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(BOOL)arg2 ;
-(id)_secondaryStatusTextForLatestResults:(id)arg1 ;
-(BOOL)shouldIncludeRoomNameInHeaderTitle;
-(void)_createControlViewControllersForControlItems:(id)arg1 ;
-(HFItem *)reachabilityItem;
-(void)_updateIconDescriptorNotifyingDelegate:(BOOL)arg1 ;
-(void)_updateStatusTextNotifyingDelegate:(BOOL)arg1 ;
-(void)_updateReachabilityStateNotifiyingDelegate:(BOOL)arg1 ;
-(HFSimpleItemManager *)reachabilityItemManager;
-(void)setActiveController:(HUQuickControlViewController *)arg1 ;
-(HUQuickControlViewController *)activeController;
-(id<HUQuickControlContentHosting>)controlHost;
-(id)_itemToUseForIconAndStatus;
-(BOOL)showIconOffState;
-(NSString *)primaryStatusText;
-(void)setPrimaryStatusText:(NSString *)arg1 ;
-(NSString *)secondaryStatusText;
-(void)setSecondaryStatusText:(NSString *)arg1 ;
-(id)_controllerForControllableCharacteristic:(id)arg1 ;
-(id)initWithItem:(id)arg1 controlItems:(id)arg2 home:(id)arg3 delegate:(id)arg4 ;
-(void)setControlHost:(id<HUQuickControlContentHosting>)arg1 ;
@end

