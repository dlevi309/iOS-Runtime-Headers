/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKCalendarScrollViewControllerDelegate.h>

@protocol HKMonthViewControllerDelegate;
@class NSDateComponents, NSDate, HKCalendarScrollViewController, UILabel, HKDateCache, NSString;

@interface HKMonthViewController : HKViewController <HKCalendarScrollViewControllerDelegate> {

	NSDateComponents* _cachedDateComponents;
	BOOL _wantsShortTitleDate;
	id<HKMonthViewControllerDelegate> _delegate;
	NSDate* _currentDate;
	long long _titleAlignment;
	HKCalendarScrollViewController* _calendarScrollViewController;
	UILabel* _titleLabel;
	HKDateCache* _dateCache;

}

@property (nonatomic,retain) HKCalendarScrollViewController * calendarScrollViewController;              //@synthesize calendarScrollViewController=_calendarScrollViewController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                                  //@synthesize dateCache=_dateCache - In the implementation block
@property (assign,nonatomic,__weak) id<HKMonthViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate;                                                     //@synthesize currentDate=_currentDate - In the implementation block
@property (assign,nonatomic) BOOL wantsShortTitleDate;                                                   //@synthesize wantsShortTitleDate=_wantsShortTitleDate - In the implementation block
@property (assign,nonatomic) long long titleAlignment;                                                   //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<HKMonthViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HKMonthViewControllerDelegate>)arg1 ;
-(HKDateCache *)dateCache;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSDate *)currentDate;
-(void)_updateBackButton;
-(void)createCalendarScrollViewController;
-(void)setCalendarScrollViewController:(HKCalendarScrollViewController *)arg1 ;
-(HKCalendarScrollViewController *)calendarScrollViewController;
-(void)createTitleLabel;
-(id)_titleStringForDate:(id)arg1 ;
-(void)_setCurrentDate:(id)arg1 ;
-(void)_updateCurrentMonthBarButtonItemWithDate:(id)arg1 ;
-(void)_didTapBackButton;
-(void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2 ;
-(void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2 ;
-(id)initWithDateCache:(id)arg1 date:(id)arg2 ;
-(void)setCurrentDate:(id)arg1 animateIfPossible:(BOOL)arg2 ;
-(BOOL)wantsShortTitleDate;
-(void)setWantsShortTitleDate:(BOOL)arg1 ;
@end

