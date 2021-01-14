/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FUScrollWheelDataSource.h>
#import <libobjc.A.dylib/FUScrollWheelDelegate.h>

@protocol FUDatePickerDelegate;
@class NSArray, NSMutableArray, UILabel, NSDateFormatter, UIColor, NSDate, FUScrollWheel, NSString;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate> {

	unsigned long long _monthOffset;
	unsigned long long _dayOffset;
	long long _yearOrder;
	long long _monthOrder;
	long long _dayOrder;
	unsigned long long _numRowsMonth;
	unsigned long long _numRowsDate;
	unsigned long long _numRowsYear;
	NSArray* _monthNames;
	NSArray* _dayValues;
	NSMutableArray* _yearsWithNames;
	UILabel* _dayLabel;
	UILabel* _yearLabel;
	UILabel* _monthLabel;
	NSDateFormatter* _dateFormatter;
	BOOL _firstResponderShouldChange;
	BOOL _displayEra;
	UIColor* _tintColor;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	long long _initialWheelType;
	id<FUDatePickerDelegate> _delegate;
	NSDate* _date;
	FUScrollWheel* _monthWheel;
	FUScrollWheel* _dayWheel;
	FUScrollWheel* _yearWheel;

}

@property (nonatomic,retain) FUScrollWheel * monthWheel;                            //@synthesize monthWheel=_monthWheel - In the implementation block
@property (nonatomic,retain) FUScrollWheel * dayWheel;                              //@synthesize dayWheel=_dayWheel - In the implementation block
@property (nonatomic,retain) FUScrollWheel * yearWheel;                             //@synthesize yearWheel=_yearWheel - In the implementation block
@property (assign,nonatomic,__weak) id<FUDatePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<FUDatePickerDelegate>)delegate;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDelegate:(id<FUDatePickerDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setDate:(id)arg1 animated:(BOOL)arg2 ;
-(NSDate *)date;
-(id)initWithFrame:(CGRect)arg1 tintColor:(id)arg2 initialWheelType:(long long)arg3 shouldEnableCrown:(BOOL)arg4 minimumDate:(id)arg5 maximumDate:(id)arg6 ;
-(id)_enumerateDayValues;
-(id)_enumerateDayValuesFromFormatter:(id)arg1 ;
-(void)_updateDayRangeReloadingWheel:(BOOL)arg1 ;
-(void)_updateSpinnersAnimated:(BOOL)arg1 ;
-(id)_wheelOfType:(long long)arg1 ;
-(unsigned long long)numberOfRowsInScrollWheel:(id)arg1 ;
-(id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2 ;
-(void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2 ;
-(void)tappedScrollWheel:(id)arg1 ;
-(BOOL)scrollWheelShouldBecomeFirstResponder:(id)arg1 ;
-(id)dateWheel;
-(FUScrollWheel *)monthWheel;
-(void)setMonthWheel:(FUScrollWheel *)arg1 ;
-(FUScrollWheel *)dayWheel;
-(void)setDayWheel:(FUScrollWheel *)arg1 ;
-(FUScrollWheel *)yearWheel;
-(void)setYearWheel:(FUScrollWheel *)arg1 ;
@end

