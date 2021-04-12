/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class UITableViewHeaderFooterView, UILabel, NSMutableArray, UISwitch;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {

	UITableViewHeaderFooterView* _footerView;
	UILabel* _descriptionLabel;
	BOOL _underlyingCalendarState;
	BOOL _switchState;
	BOOL _allowEventAlerts;
	NSMutableArray* _cells;
	UISwitch* _toggleSwitch;

}

@property (assign,nonatomic) BOOL allowEventAlerts;                     //@synthesize allowEventAlerts=_allowEventAlerts - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                    //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) UISwitch * toggleSwitch;                   //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (assign,nonatomic) BOOL underlyingCalendarState;              //@synthesize underlyingCalendarState=_underlyingCalendarState - In the implementation block
@property (assign,nonatomic) BOOL switchState;                          //@synthesize switchState=_switchState - In the implementation block
-(unsigned long long)numberOfSubitems;
-(id)cell;
-(id)footerView;
-(NSMutableArray *)cells;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(void)setSwitchState:(BOOL)arg1 ;
-(BOOL)underlyingCalendarState;
-(BOOL)cellWrapsLongText;
-(void)_switchStateChanged:(id)arg1 ;
-(BOOL)switchState;
-(id)descriptionLabelText;
-(void)setUnderlyingCalendarState:(BOOL)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(BOOL)allowEventAlerts;
-(void)setAllowEventAlerts:(BOOL)arg1 ;
-(UISwitch *)toggleSwitch;
-(void)setToggleSwitch:(UISwitch *)arg1 ;
-(void)reset;
-(id)cellText;
-(void)setCells:(NSMutableArray *)arg1 ;
@end

