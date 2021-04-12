/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UITableView, UIDatePicker;

@interface HUAlarmEditView : UIView {

	UITableView* _settingsTable;
	UIDatePicker* _timePicker;

}

@property (nonatomic,readonly) UITableView * settingsTable;              //@synthesize settingsTable=_settingsTable - In the implementation block
@property (nonatomic,readonly) UIDatePicker * timePicker;                //@synthesize timePicker=_timePicker - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIDatePicker *)timePicker;
-(UITableView *)settingsTable;
@end

