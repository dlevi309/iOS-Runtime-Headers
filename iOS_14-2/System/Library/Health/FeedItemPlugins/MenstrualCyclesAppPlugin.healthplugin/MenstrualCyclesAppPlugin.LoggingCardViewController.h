/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)infoButtonTapped:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

