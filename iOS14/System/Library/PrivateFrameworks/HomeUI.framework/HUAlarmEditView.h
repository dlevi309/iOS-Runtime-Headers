/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView, UIDatePicker;

@interface HUAlarmEditView : UIView {

	BOOL _accessorySupportsMusicAlarm;
	UITableView* _settingsTable;
	UIDatePicker* _timePicker;

}

@property (assign,nonatomic) BOOL accessorySupportsMusicAlarm;              //@synthesize accessorySupportsMusicAlarm=_accessorySupportsMusicAlarm - In the implementation block
@property (nonatomic,readonly) UITableView * settingsTable;                 //@synthesize settingsTable=_settingsTable - In the implementation block
@property (nonatomic,readonly) UIDatePicker * timePicker;                   //@synthesize timePicker=_timePicker - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)accessorySupportsMusicAlarm;
-(UIDatePicker *)timePicker;
-(id)initWithFrame:(CGRect)arg1 supportsMusicAlarm:(BOOL)arg2 ;
-(UITableView *)settingsTable;
-(void)setAccessorySupportsMusicAlarm:(BOOL)arg1 ;
@end

