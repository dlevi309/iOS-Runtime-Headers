/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>
#import <libobjc.A.dylib/HUQuickControlDetailsViewControllerVendor.h>
#import <libobjc.A.dylib/HFItemSectionAccessoryButtonHeaderDelegate.h>

@class HUAlarmTableViewController, NSArray, NSLayoutConstraint, NSString;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor, HFItemSectionAccessoryButtonHeaderDelegate> {

	HUAlarmTableViewController* _alarmTableViewController;
	NSArray* _alarmTableViewConstraints;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) HUAlarmTableViewController * alarmTableViewController;              //@synthesize alarmTableViewController=_alarmTableViewController - In the implementation block
@property (nonatomic,retain) NSArray * alarmTableViewConstraints;                                //@synthesize alarmTableViewConstraints=_alarmTableViewConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controlItemPredicate;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)_updateConstraints;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)mediaProfileContainer;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)controlItem;
-(HUAlarmTableViewController *)alarmTableViewController;
-(void)_addAlarmControlView;
-(id)createDetailsViewController;
-(void)setAlarmTableViewController:(HUAlarmTableViewController *)arg1 ;
-(NSArray *)alarmTableViewConstraints;
-(void)setAlarmTableViewConstraints:(NSArray *)arg1 ;
-(BOOL)isAccessoryControllable;
-(id)secondaryQuickControlPresentationStyle;
-(void)itemSection:(id)arg1 accessoryButtonPressedInHeader:(id)arg2 ;
@end

