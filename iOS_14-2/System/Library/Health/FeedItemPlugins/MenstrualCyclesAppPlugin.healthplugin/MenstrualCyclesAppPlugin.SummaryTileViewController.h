/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface MenstrualCyclesAppPlugin.SummaryTileViewController : UIViewController {

	 valueLabel;
	 supplementaryValueLabel;
	 pillView;
	 valueLabelTopConstraint;
	 supplementaryValueLabelBottomConstraint;
	 pillViewHiddenConstraint;
	 calendarCache;
	 context;
	 viewModel;

}

@property (copy,nonatomic) NSString * title; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)significantTimeChangeDidOccur;
-(void)userPreferredUnitChanged;
@end

