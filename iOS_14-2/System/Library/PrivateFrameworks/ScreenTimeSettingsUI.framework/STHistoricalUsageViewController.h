/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>

@protocol STUsageDetailsViewModelCoordinator;
@class NSObject, STUsageSummaryTitleView, STUsageGraphViewController, UIPageViewController, UIView, NSLayoutConstraint, NSString;

@interface STHistoricalUsageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {

	NSObject*<STUsageDetailsViewModelCoordinator> _coordinator;
	STUsageSummaryTitleView* _titleView;
	long long _currentViewMode;
	unsigned long long _type;
	double _graphHeight;
	STUsageGraphViewController* _selectedWeekGraphViewController;
	STUsageGraphViewController* _selectedDayGraphViewController;
	UIPageViewController* _weekGraphPageViewController;
	UIPageViewController* _dayGraphPageViewController;
	UIView* _weekGraphContainerView;
	UIView* _dayGraphContainerView;
	NSLayoutConstraint* _weekGraphContainerHeightConstraint;
	NSLayoutConstraint* _dayGraphContainerHeightConstraint;
	double _maximumYAxisLabelWidth;

}

@property (readonly) unsigned long long type;                                                           //@synthesize type=_type - In the implementation block
@property (readonly) double graphHeight;                                                                //@synthesize graphHeight=_graphHeight - In the implementation block
@property (nonatomic,retain) STUsageGraphViewController * selectedWeekGraphViewController;              //@synthesize selectedWeekGraphViewController=_selectedWeekGraphViewController - In the implementation block
@property (retain) STUsageGraphViewController * selectedDayGraphViewController;                         //@synthesize selectedDayGraphViewController=_selectedDayGraphViewController - In the implementation block
@property (retain) UIPageViewController * weekGraphPageViewController;                                  //@synthesize weekGraphPageViewController=_weekGraphPageViewController - In the implementation block
@property (retain) UIPageViewController * dayGraphPageViewController;                                   //@synthesize dayGraphPageViewController=_dayGraphPageViewController - In the implementation block
@property (retain) STUsageSummaryTitleView * titleView;                                                 //@synthesize titleView=_titleView - In the implementation block
@property (retain) UIView * weekGraphContainerView;                                                     //@synthesize weekGraphContainerView=_weekGraphContainerView - In the implementation block
@property (retain) UIView * dayGraphContainerView;                                                      //@synthesize dayGraphContainerView=_dayGraphContainerView - In the implementation block
@property (retain) NSLayoutConstraint * weekGraphContainerHeightConstraint;                             //@synthesize weekGraphContainerHeightConstraint=_weekGraphContainerHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dayGraphContainerHeightConstraint;                              //@synthesize dayGraphContainerHeightConstraint=_dayGraphContainerHeightConstraint - In the implementation block
@property (assign,nonatomic) double maximumYAxisLabelWidth;                                             //@synthesize maximumYAxisLabelWidth=_maximumYAxisLabelWidth - In the implementation block
@property (assign) long long currentViewMode;                                                           //@synthesize currentViewMode=_currentViewMode - In the implementation block
@property (nonatomic,retain) NSObject*<STUsageDetailsViewModelCoordinator> coordinator;                 //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)historicalUsageViewControllerOfType:(unsigned long long)arg1 graphHeight:(double)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(STUsageSummaryTitleView *)titleView;
-(void)setCoordinator:(NSObject*<STUsageDetailsViewModelCoordinator>)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)setTitleView:(STUsageSummaryTitleView *)arg1 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(double)graphHeight;
-(void)viewDidLoad;
-(unsigned long long)type;
-(double)maximumYAxisLabelWidth;
-(void)dealloc;
-(NSObject*<STUsageDetailsViewModelCoordinator>)coordinator;
-(long long)currentViewMode;
-(void)_selectedWeekUsageReportDidChange:(id)arg1 ;
-(void)_selectedDayUsageReportDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(void)setWeekGraphPageViewController:(UIPageViewController *)arg1 ;
-(void)setDayGraphPageViewController:(UIPageViewController *)arg1 ;
-(STUsageGraphViewController *)selectedWeekGraphViewController;
-(STUsageGraphViewController *)selectedDayGraphViewController;
-(void)_selectedBarViewDidChangeFrom:(id)arg1 to:(id)arg2 ;
-(id)_weekGraphViewControllerForWeek:(unsigned long long)arg1 usageReport:(id)arg2 ;
-(void)setSelectedWeekGraphViewController:(STUsageGraphViewController *)arg1 ;
-(UIPageViewController *)weekGraphPageViewController;
-(id)_dataSetFromUsageReport:(id)arg1 ;
-(id)_dayGraphViewControllerForDay:(unsigned long long)arg1 week:(unsigned long long)arg2 usageReport:(id)arg3 ;
-(UIPageViewController *)dayGraphPageViewController;
-(UIView *)dayGraphContainerView;
-(void)setCurrentViewMode:(long long)arg1 ;
-(void)setSelectedDayGraphViewController:(STUsageGraphViewController *)arg1 ;
-(id)_nextGraphViewControllerForPageViewController:(id)arg1 currentGraphViewController:(id)arg2 direction:(long long)arg3 ;
-(NSLayoutConstraint *)weekGraphContainerHeightConstraint;
-(UIView *)weekGraphContainerView;
-(void)setWeekGraphContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMaximumYAxisLabelWidth:(double)arg1 ;
-(NSLayoutConstraint *)dayGraphContainerHeightConstraint;
-(void)setDayGraphContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWeekGraphContainerView:(UIView *)arg1 ;
-(void)setDayGraphContainerView:(UIView *)arg1 ;
@end
