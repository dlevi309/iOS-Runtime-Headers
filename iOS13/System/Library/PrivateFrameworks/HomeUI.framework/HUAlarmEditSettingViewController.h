/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol HUAlarmEditSettingViewControllerDelegate;
@class NSString, UITableView, HUAlarmEditableTextCell, MTMutableAlarm;

@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<HUAlarmEditSettingViewControllerDelegate> _delegate;
	NSString* _loggedInAppleMusicAccountDSID;
	UITableView* _tableView;
	HUAlarmEditableTextCell* _editingCell;
	long long _setting;
	unsigned long long _firstWeekday;
	unsigned long long _repeatSchedule;
	MTMutableAlarm* _alarm;

}

@property (nonatomic,retain) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) HUAlarmEditableTextCell * editingCell;                                     //@synthesize editingCell=_editingCell - In the implementation block
@property (assign,nonatomic) long long setting;                                                         //@synthesize setting=_setting - In the implementation block
@property (assign,nonatomic) unsigned long long firstWeekday;                                           //@synthesize firstWeekday=_firstWeekday - In the implementation block
@property (assign,nonatomic) unsigned long long repeatSchedule;                                         //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
@property (nonatomic,copy) MTMutableAlarm * alarm;                                                      //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmEditSettingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggedInAppleMusicAccountDSID;                           //@synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUAlarmEditSettingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUAlarmEditSettingViewControllerDelegate>)arg1 ;
-(unsigned long long)firstWeekday;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(void)_commonInitialization;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_dismiss;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidUnload;
-(long long)setting;
-(MTMutableAlarm *)alarm;
-(unsigned long long)repeatSchedule;
-(void)setAlarm:(MTMutableAlarm *)arg1 ;
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
-(void)setSetting:(long long)arg1 ;
-(HUAlarmEditableTextCell *)editingCell;
-(void)setEditingCell:(HUAlarmEditableTextCell *)arg1 ;
-(void)textValueChanged:(id)arg1 ;
-(NSString *)loggedInAppleMusicAccountDSID;
-(id)initWithAlarm:(id)arg1 setting:(long long)arg2 loggedInAppleMusicAccountDSID:(id)arg3 ;
-(unsigned)maskForRow:(long long)arg1 ;
@end

