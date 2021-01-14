/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol HUAlarmEditSettingViewControllerDelegate;
@class NSString, HMMediaProfile, UITableView, HUAlarmEditableTextCell, NSMutableArray, MTMutableAlarm;

@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<HUAlarmEditSettingViewControllerDelegate> _delegate;
	NSString* _loggedInAppleMusicAccountDSID;
	HMMediaProfile* _selectedMediaProfile;
	UITableView* _tableView;
	HUAlarmEditableTextCell* _editingCell;
	long long _setting;
	unsigned long long _firstWeekday;
	unsigned long long _repeatSchedule;
	NSMutableArray* _profileList;
	MTMutableAlarm* _alarm;

}

@property (nonatomic,retain) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) HUAlarmEditableTextCell * editingCell;                                     //@synthesize editingCell=_editingCell - In the implementation block
@property (assign,nonatomic) long long setting;                                                         //@synthesize setting=_setting - In the implementation block
@property (assign,nonatomic) unsigned long long firstWeekday;                                           //@synthesize firstWeekday=_firstWeekday - In the implementation block
@property (assign,nonatomic) unsigned long long repeatSchedule;                                         //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
@property (nonatomic,retain) NSMutableArray * profileList;                                              //@synthesize profileList=_profileList - In the implementation block
@property (nonatomic,retain) HMMediaProfile * selectedMediaProfile;                                     //@synthesize selectedMediaProfile=_selectedMediaProfile - In the implementation block
@property (nonatomic,copy) MTMutableAlarm * alarm;                                                      //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic,__weak) id<HUAlarmEditSettingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggedInAppleMusicAccountDSID;                           //@synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(unsigned long long)firstWeekday;
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
-(long long)setting;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_commonInitialization;
-(id<HUAlarmEditSettingViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setAlarm:(MTMutableAlarm *)arg1 ;
-(void)viewDidUnload;
-(void)_dismiss;
-(void)setEditingCell:(HUAlarmEditableTextCell *)arg1 ;
-(void)setDelegate:(id<HUAlarmEditSettingViewControllerDelegate>)arg1 ;
-(unsigned long long)repeatSchedule;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(HUAlarmEditableTextCell *)editingCell;
-(void)setSetting:(long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(MTMutableAlarm *)alarm;
-(HMMediaProfile *)selectedMediaProfile;
-(NSString *)loggedInAppleMusicAccountDSID;
-(id)initWithAlarm:(id)arg1 setting:(long long)arg2 mediaProfileContainer:(id)arg3 selectedMediaProfile:(id)arg4 loggedInAppleMusicAccountDSID:(id)arg5 ;
-(void)setSelectedMediaProfile:(HMMediaProfile *)arg1 ;
-(void)textValueChanged:(id)arg1 ;
-(NSMutableArray *)profileList;
-(unsigned)maskForRow:(long long)arg1 ;
-(void)setProfileList:(NSMutableArray *)arg1 ;
@end

