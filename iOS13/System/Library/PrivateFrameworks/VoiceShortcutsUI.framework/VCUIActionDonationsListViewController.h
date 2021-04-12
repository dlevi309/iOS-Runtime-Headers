/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class UISegmentedControl, VCUIInteractionDonationDataSource, UITableView, VCUIUserActivityDonationDataSource, VCUIActionDonationCell, NSString;

@interface VCUIActionDonationsListViewController : UIViewController <UITableViewDelegate> {

	UISegmentedControl* _segmentedControl;
	VCUIInteractionDonationDataSource* _interactionDataSource;
	UITableView* _interactionTableView;
	VCUIUserActivityDonationDataSource* _activityDataSource;
	UITableView* _activityTableView;
	VCUIActionDonationCell* _prototypeCell;

}

@property (nonatomic,readonly) UISegmentedControl * segmentedControl;                                  //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) VCUIInteractionDonationDataSource * interactionDataSource;              //@synthesize interactionDataSource=_interactionDataSource - In the implementation block
@property (nonatomic,readonly) UITableView * interactionTableView;                                     //@synthesize interactionTableView=_interactionTableView - In the implementation block
@property (nonatomic,readonly) VCUIUserActivityDonationDataSource * activityDataSource;                //@synthesize activityDataSource=_activityDataSource - In the implementation block
@property (nonatomic,readonly) UITableView * activityTableView;                                        //@synthesize activityTableView=_activityTableView - In the implementation block
@property (nonatomic,retain) VCUIActionDonationCell * prototypeCell;                                   //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UISegmentedControl *)segmentedControl;
-(void)segmentedControlChanged:(id)arg1 ;
-(VCUIActionDonationCell *)prototypeCell;
-(VCUIInteractionDonationDataSource *)interactionDataSource;
-(UITableView *)interactionTableView;
-(VCUIUserActivityDonationDataSource *)activityDataSource;
-(UITableView *)activityTableView;
-(void)setPrototypeCell:(VCUIActionDonationCell *)arg1 ;
@end

