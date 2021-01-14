/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)logMenstrualCycle:(id)arg1 ;
-(void)confirmMenstrualCycle:(id)arg1 ;
@end

