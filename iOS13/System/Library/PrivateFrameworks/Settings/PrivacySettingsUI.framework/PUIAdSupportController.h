/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/UserTransparencyViewControllerDelegate.h>

@class UITableViewCell, UIView, UserTransparencyViewController, NSString;

@interface PUIAdSupportController : PSListController <UserTransparencyViewControllerDelegate> {

	id _restrictionsChangedObserver;
	id _effectiveSettingsChangedObserver;
	UITableViewCell* _limitAdTrackingCell;
	UIView* _originalAccessoryView;
	long long _optInStatus;
	UserTransparencyViewController* _userTransparencyController;

}

@property (nonatomic,retain) id restrictionsChangedObserver;                                           //@synthesize restrictionsChangedObserver=_restrictionsChangedObserver - In the implementation block
@property (nonatomic,retain) id effectiveSettingsChangedObserver;                                      //@synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver - In the implementation block
@property (nonatomic,retain) UITableViewCell * limitAdTrackingCell;                                    //@synthesize limitAdTrackingCell=_limitAdTrackingCell - In the implementation block
@property (nonatomic,retain) UIView * originalAccessoryView;                                           //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (assign,nonatomic) long long optInStatus;                                                    //@synthesize optInStatus=_optInStatus - In the implementation block
@property (nonatomic,retain) UserTransparencyViewController * userTransparencyController;              //@synthesize userTransparencyController=_userTransparencyController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(id)specifiers;
-(id)effectiveSettingsChangedObserver;
-(id)restrictionsChangedObserver;
-(void)setEffectiveSettingsChangedObserver:(id)arg1 ;
-(void)setRestrictionsChangedObserver:(id)arg1 ;
-(void)reloadLimitAdTrackingSpecifier;
-(void)setOptInStatus:(long long)arg1 ;
-(long long)optInStatus;
-(void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)limitAdTrackingEnabled:(id)arg1 ;
-(BOOL)canChangeLimitAdTracking;
-(void)resetAdID;
-(void)userDidTapAdPreferences:(id)arg1 ;
-(void)refreshOptInStatus;
-(void)setUserTransparencyController:(UserTransparencyViewController *)arg1 ;
-(UserTransparencyViewController *)userTransparencyController;
-(void)userTransparencyViewControllerDidLoad:(id)arg1 ;
-(void)userTransparencyViewControllerDidDismiss:(id)arg1 ;
-(void)userTransparencyViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userDidTapDoneButton:(id)arg1 ;
-(void)userDidTapLearnMoreLink:(id)arg1 ;
-(UITableViewCell *)limitAdTrackingCell;
-(void)setLimitAdTrackingCell:(UITableViewCell *)arg1 ;
-(UIView *)originalAccessoryView;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
@end

