/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceGridViewController.h>

@protocol HUNearbyAccessoriesViewControllerDelegate;
@class HMAccessory, UILabel, NSArray, HUNearbyAccessoriesItemManager;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController {

	BOOL _supportsQuickControls;
	id<HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;
	HMAccessory* _currentAccessory;
	UILabel* _userInfoHeading;
	UILabel* _userInfoDescription;
	NSArray* _userInfoConstraints;

}

@property (nonatomic,retain) HMAccessory * currentAccessory;                                                              //@synthesize currentAccessory=_currentAccessory - In the implementation block
@property (nonatomic,readonly) HUNearbyAccessoriesItemManager * itemManager; 
@property (nonatomic,retain) UILabel * userInfoHeading;                                                                   //@synthesize userInfoHeading=_userInfoHeading - In the implementation block
@property (nonatomic,retain) UILabel * userInfoDescription;                                                               //@synthesize userInfoDescription=_userInfoDescription - In the implementation block
@property (nonatomic,retain) NSArray * userInfoConstraints;                                                               //@synthesize userInfoConstraints=_userInfoConstraints - In the implementation block
@property (assign,nonatomic) BOOL supportsQuickControls;                                                                  //@synthesize supportsQuickControls=_supportsQuickControls - In the implementation block
@property (assign,nonatomic,__weak) id<HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate;              //@synthesize nearbyAccessoriesDelegate=_nearbyAccessoriesDelegate - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(HMAccessory *)currentAccessory;
-(void)setCurrentAccessory:(HMAccessory *)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1 ;
-(id)initWithSourceItem:(id)arg1 supportsQuickControls:(BOOL)arg2 ;
-(UILabel *)userInfoHeading;
-(UILabel *)userInfoDescription;
-(NSArray *)userInfoConstraints;
-(void)setUserInfoConstraints:(NSArray *)arg1 ;
-(id<HUNearbyAccessoriesViewControllerDelegate>)nearbyAccessoriesDelegate;
-(BOOL)supportsQuickControls;
-(void)setNearbyAccessoriesDelegate:(id<HUNearbyAccessoriesViewControllerDelegate>)arg1 ;
-(void)setUserInfoHeading:(UILabel *)arg1 ;
-(void)setUserInfoDescription:(UILabel *)arg1 ;
-(void)setSupportsQuickControls:(BOOL)arg1 ;
@end

