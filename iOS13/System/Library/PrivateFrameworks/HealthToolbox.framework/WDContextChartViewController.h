/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKViewController.h>

@class HKInteractiveChartViewController, HKDisplayTypeContextView;

@interface WDContextChartViewController : HKViewController {

	HKInteractiveChartViewController* _interactiveChartViewController;
	HKDisplayTypeContextView* _contextView;

}

@property (nonatomic,readonly) HKInteractiveChartViewController * interactiveChartViewController;              //@synthesize interactiveChartViewController=_interactiveChartViewController - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeContextView * contextView;                                         //@synthesize contextView=_contextView - In the implementation block
-(void)viewDidLoad;
-(double)preferredHeight;
-(HKInteractiveChartViewController *)interactiveChartViewController;
-(HKDisplayTypeContextView *)contextView;
-(id)initWithInteractiveChartViewController:(id)arg1 ;
@end

