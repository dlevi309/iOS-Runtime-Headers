/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/LoggingCardTableViewObserver.h>

@interface MenstrualCyclesAppPlugin.LoggingCardViewController : UIViewController <LoggingCardTableViewObserver> {

	 displayType;
	 headerView;
	 tableView;
	 $__lazy_storage_$_footerView;
	 alphaValue;
	 configuration;
	 footerHeightConstraint;
	 editableDaySummarySection;
	 flashedScrollIndicatorOnLoad;

}
-(void)loggingCardTableViewContentSizeChanged:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)infoButtonTapped:(id)arg1 ;
@end

