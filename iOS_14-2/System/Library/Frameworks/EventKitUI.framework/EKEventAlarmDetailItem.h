/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, EKAlarmEditItemViewController, EKAlarmsViewModel;

@interface EKEventAlarmDetailItem : EKEventDetailItem {

	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	EKAlarmEditItemViewController* _currentEditViewController;
	EKAlarmsViewModel* _alarmsViewModel;

}

@property (nonatomic,retain) EKAlarmsViewModel * alarmsViewModel;              //@synthesize alarmsViewModel=_alarmsViewModel - In the implementation block
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)ttlLocationStatusChanged:(id)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)_alarmsAreCreatable;
-(void)_updateAlarms;
-(void)reset;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(EKAlarmsViewModel *)alarmsViewModel;
-(BOOL)_alarmsAreEditable;
-(void)setAlarmsViewModel:(EKAlarmsViewModel *)arg1 ;
@end

