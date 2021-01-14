/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUNearbyAccessoriesViewControllerDelegate, HUPresentationDelegate;
@class HMAccessory, _UIContentUnavailableView, UILabel, NSArray, HUNearbyAccessoriesItemManager, NSString;

@interface HUNearbyAccessoriesViewController : HUServiceGridViewController <HUPresentationDelegateHost> {

	BOOL _supportsQuickControls;
	id<HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;
	id<HUPresentationDelegate> _presentationDelegate;
	HMAccessory* _currentAccessory;
	_UIContentUnavailableView* _userInfoHeading;
	UILabel* _userInfoDescription;
	NSArray* _userInfoConstraints;

}

@property (nonatomic,retain) HMAccessory * currentAccessory;                                                              //@synthesize currentAccessory=_currentAccessory - In the implementation block
@property (nonatomic,readonly) HUNearbyAccessoriesItemManager * itemManager; 
@property (nonatomic,retain) _UIContentUnavailableView * userInfoHeading;                                                 //@synthesize userInfoHeading=_userInfoHeading - In the implementation block
@property (nonatomic,retain) UILabel * userInfoDescription;                                                               //@synthesize userInfoDescription=_userInfoDescription - In the implementation block
@property (nonatomic,retain) NSArray * userInfoConstraints;                                                               //@synthesize userInfoConstraints=_userInfoConstraints - In the implementation block
@property (assign,nonatomic) BOOL supportsQuickControls;                                                                  //@synthesize supportsQuickControls=_supportsQuickControls - In the implementation block
@property (assign,nonatomic,__weak) id<HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate;              //@synthesize nearbyAccessoriesDelegate=_nearbyAccessoriesDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate;                                      //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)doneButtonPressed:(id)arg1 ;
-(id<HUPresentationDelegate>)presentationDelegate;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(void)viewDidLoad;
-(void)setCurrentAccessory:(HMAccessory *)arg1 ;
-(HMAccessory *)currentAccessory;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1 ;
-(id)initWithSourceItem:(id)arg1 supportsQuickControls:(BOOL)arg2 ;
-(UILabel *)userInfoDescription;
-(void)displayEditor;
-(BOOL)supportsQuickControls;
-(void)_updateUserInfo;
-(_UIContentUnavailableView *)userInfoHeading;
-(NSArray *)userInfoConstraints;
-(void)setUserInfoConstraints:(NSArray *)arg1 ;
-(id<HUNearbyAccessoriesViewControllerDelegate>)nearbyAccessoriesDelegate;
-(void)setNearbyAccessoriesDelegate:(id<HUNearbyAccessoriesViewControllerDelegate>)arg1 ;
-(void)setUserInfoHeading:(_UIContentUnavailableView *)arg1 ;
-(void)setUserInfoDescription:(UILabel *)arg1 ;
-(void)setSupportsQuickControls:(BOOL)arg1 ;
@end

