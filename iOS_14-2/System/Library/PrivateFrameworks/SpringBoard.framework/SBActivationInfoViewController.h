/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/STTelephonyStateObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, NSArray, UIView, UITableView, NSLayoutConstraint, UIButton;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate> {

	NSString* _meid;
	NSString* _serial;
	NSArray* _mobileEquipmentInfo;
	NSArray* _mobileSubscriptionInfo;
	UIView* _containerView;
	UITableView* _activationInfoTableView;
	NSLayoutConstraint* _activationInfoTableViewHeight;
	UIButton* _regulatoryInfoButton;

}

@property (nonatomic,readonly) UIButton * regulatoryInfoButton;              //@synthesize regulatoryInfoButton=_regulatoryInfoButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(BOOL)_canShowWhileLocked;
-(id)_titleForHeaderInSection:(long long)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIButton *)regulatoryInfoButton;
-(void)_updateMobileEquipmentInfo;
-(void)_telephonyStateChanged;
-(id)_activationInfoCell;
-(id)_backgroundViewForHeaderView:(id)arg1 ;
-(id)_processMobileEquipmentInfo:(id)arg1 ;
-(id)_processMobileSubscriptionInfo;
-(id)_processDeviceInfo;
-(id)_formattedIMEI:(id)arg1 ;
-(id)_formattedCSN:(id)arg1 ;
-(id)_formattedICCID:(id)arg1 ;
-(id)_formattedString:(id)arg1 withSpaceAfterDigits:(unsigned long long)arg2 ;
@end

