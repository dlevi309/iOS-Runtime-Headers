/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>
#import <libobjc.A.dylib/HRFeatureRegulatoryReenableFeatureActionDelegate.h>

@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;
@class NSArray, HKHeartRhythmAvailability, UIViewController, UINavigationController, NSString;

@interface HRFeatureRegulatoryPanelViewController : HKTableViewController <HKHeartRhythmAvailabilityObserver, HRFeatureRegulatoryReenableFeatureActionDelegate> {

	NSArray* _displayableItems;
	HKHeartRhythmAvailability* _heartRhythmAvailability;
	UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate> _delegate;
	UINavigationController* _onboardingNavigationController;

}

@property (nonatomic,retain) HKHeartRhythmAvailability * heartRhythmAvailability;                                              //@synthesize heartRhythmAvailability=_heartRhythmAvailability - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UINavigationController * onboardingNavigationController;                                          //@synthesize onboardingNavigationController=_onboardingNavigationController - In the implementation block
@property (nonatomic,readonly) NSArray * displayableItems;                                                                     //@synthesize displayableItems=_displayableItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate>)delegate;
-(void)setDelegate:(UIViewController*<HRFeatureRegulatoryReenableFeatureActionDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(void)heartRhythmAvailabilityDidUpdate;
-(HKHeartRhythmAvailability *)heartRhythmAvailability;
-(UINavigationController *)onboardingNavigationController;
-(void)didSelectReenableFeatureForProductName:(id)arg1 ;
-(void)setHeartRhythmAvailability:(HKHeartRhythmAvailability *)arg1 ;
-(NSArray *)displayableItems;
-(void)receivedHeartRhythmAvailabilityNotification;
-(void)setOnboardingNavigationController:(UINavigationController *)arg1 ;
@end

