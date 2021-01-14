/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKMonthViewController.h>

@class HKSampleType, UIColor, NSPredicate, _UINavigationControllerPalette, HKWeekdayHeaderPaletteView, HKHealthStore;

@interface HKInteractiveChartsMonthViewController : HKMonthViewController {

	HKSampleType* _sampleType;
	UIColor* _sampleColor;
	NSPredicate* _additionalSamplePredicate;
	_UINavigationControllerPalette* _containingPalette;
	HKWeekdayHeaderPaletteView* _weekdayHeaderPaletteView;
	HKHealthStore* _healthStore;

}

@property (nonatomic,retain) _UINavigationControllerPalette * containingPalette;                 //@synthesize containingPalette=_containingPalette - In the implementation block
@property (nonatomic,retain) HKWeekdayHeaderPaletteView * weekdayHeaderPaletteView;              //@synthesize weekdayHeaderPaletteView=_weekdayHeaderPaletteView - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                        //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSampleType * sampleType;                                          //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,retain) UIColor * sampleColor;                                              //@synthesize sampleColor=_sampleColor - In the implementation block
@property (nonatomic,retain) NSPredicate * additionalSamplePredicate;                            //@synthesize additionalSamplePredicate=_additionalSamplePredicate - In the implementation block
-(HKHealthStore *)healthStore;
-(void)viewWillLayoutSubviews;
-(void)dismissViewController:(id)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)viewDidLoad;
-(HKSampleType *)sampleType;
-(void)didTapTodayButton;
-(void)setWeekdayHeaderPaletteView:(HKWeekdayHeaderPaletteView *)arg1 ;
-(void)setContainingPalette:(_UINavigationControllerPalette *)arg1 ;
-(_UINavigationControllerPalette *)containingPalette;
-(HKWeekdayHeaderPaletteView *)weekdayHeaderPaletteView;
-(NSPredicate *)additionalSamplePredicate;
-(UIColor *)sampleColor;
-(id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 date:(id)arg3 ;
-(void)calendarScrollViewController:(id)arg1 accessoryViewForDate:(id)arg2 accessoryViewCompletion:(/*^block*/id)arg3 ;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)setSampleColor:(UIColor *)arg1 ;
-(void)setAdditionalSamplePredicate:(NSPredicate *)arg1 ;
@end

