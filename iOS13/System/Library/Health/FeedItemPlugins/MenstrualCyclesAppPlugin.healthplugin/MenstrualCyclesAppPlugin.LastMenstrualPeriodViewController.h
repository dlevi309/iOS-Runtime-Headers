/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HKMCViewModelProviderObserver.h>

@interface MenstrualCyclesAppPlugin.LastMenstrualPeriodViewController : UIViewController <HKMCViewModelProviderObserver> {

	 eventHandler;
	 viewModel;
	 dateRangeLabel;
	 cycleView;
	 detailsLabel;
	 confirmCycleButton;
	 logLastCycleButton;

}
-(void)viewModelProviderDidUpdate:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
-(void)logMenstrualCycle:(id)arg1 ;
-(void)confirmMenstrualCycle:(id)arg1 ;
@end

