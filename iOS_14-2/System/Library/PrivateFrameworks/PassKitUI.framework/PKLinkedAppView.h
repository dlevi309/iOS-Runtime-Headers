/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>
#import <libobjc.A.dylib/PKLinkedApplicationObserver.h>

@class UIImageView, UILabel, PKContinuousButton, PKLinkedAppUserRatingView, UIActivityIndicatorView, PKLinkedApplication, UIColor, NSArray, NSURL, NSString;

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver> {

	UIImageView* _iconView;
	UILabel* _appName;
	PKContinuousButton* _viewButton;
	UILabel* _appPublisher;
	PKLinkedAppUserRatingView* _userRatingView;
	UILabel* _price;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _loadingLabel;
	PKLinkedApplication* _linkedApplication;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;
	UIColor* _buttonBackgroundColor;
	UIColor* _buttonTintColor;

}

@property (nonatomic,readonly) PKLinkedApplication * linkedApplication;              //@synthesize linkedApplication=_linkedApplication - In the implementation block
@property (nonatomic,copy) NSArray * storeIDs; 
@property (nonatomic,copy) NSURL * appLaunchURL; 
@property (nonatomic,retain) UIColor * mainLabelColor;                               //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * subTextLabelColor;                            //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonBackgroundColor;                        //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTintColor;                              //@synthesize buttonTintColor=_buttonTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutLoadingView;
-(void)reloadApplicationStateIfNecessary;
-(void)linkedApplicationDidChangeState:(id)arg1 ;
-(NSArray *)storeIDs;
-(id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3 ;
-(PKLinkedApplication *)linkedApplication;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrice:(id)arg1 ;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(UIColor *)mainLabelColor;
-(UIColor *)subTextLabelColor;
-(NSURL *)appLaunchURL;
-(void)setLoadingText:(id)arg1 ;
-(void)setApplicationName:(id)arg1 ;
-(void)setButtonTintColor:(UIColor *)arg1 ;
-(void)setApplicationIcon:(id)arg1 ;
-(void)_layoutLockupView;
-(void)_layoutNotAvailableView;
-(void)_cleanupViews;
-(UIColor *)buttonTintColor;
-(UIColor *)buttonBackgroundColor;
-(void)_buttonPressed:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

