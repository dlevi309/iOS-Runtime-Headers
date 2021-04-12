/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, EKAlarmsViewModel;

@interface EKEventAlarmDetailItem : EKEventDetailItem {

	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	EKAlarmsViewModel* _alarmsViewModel;

}

@property (nonatomic,retain) EKAlarmsViewModel * alarmsViewModel;              //@synthesize alarmsViewModel=_alarmsViewModel - In the implementation block
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(EKAlarmsViewModel *)alarmsViewModel;
-(void)setAlarmsViewModel:(EKAlarmsViewModel *)arg1 ;
-(void)_updateAlarms;
-(BOOL)_alarmsAreEditable;
-(BOOL)_alarmsAreCreatable;
@end

