/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class CNContact, NSArray, _UILegibilitySettings, UIImageView, NSLayoutConstraint, UILabel, UIView, UIActivityIndicatorView, SBAppStatusBarSettingsAssertion;

@interface SBLogoutProgressView : UIView {

	CNContact* _userContact;
	NSArray* _pendingApplications;
	_UILegibilitySettings* _legibilitySettings;
	UIImageView* _userAvatarView;
	NSLayoutConstraint* _userAvatarVerticalConstraint;
	UILabel* _goodbyeLabel;
	NSLayoutConstraint* _goodbyeLabelConstraint;
	UIView* _savingDocumentsActivityAndLabelContainerView;
	UIActivityIndicatorView* _savingDocumentsActivityIndicator;
	UILabel* _savingDocumentsLabel;
	UILabel* _savingDocumentsMoreLabel;
	NSLayoutConstraint* _savingDocumentsMoreLabelConstraint;
	UIView* _blameContainerView;
	UIImageView* _blameAppIconView;
	UILabel* _blameAppNameLabel;
	SBAppStatusBarSettingsAssertion* _statusBarSettingsAssertion;

}

@property (nonatomic,retain) CNContact * userContact;                                    //@synthesize userContact=_userContact - In the implementation block
@property (nonatomic,copy) NSArray * pendingApplications;                                //@synthesize pendingApplications=_pendingApplications - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,getter=isProgressVisible,nonatomic) BOOL progressVisible; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_updateLegibility;
-(double)_goodbyeLabelBaselineOffset;
-(double)_userAvatarVerticalOffsetFromCenter;
-(double)_moreDocumentsLabelBaselineOffset;
-(void)_updateViewData;
-(void)_updateUserAvatar;
-(void)_updateUserAvatarLegibility;
-(void)_updateGoodbye;
-(void)_updateBlame;
-(BOOL)isProgressVisible;
-(void)setProgressVisible:(BOOL)arg1 ;
-(void)setUserContact:(CNContact *)arg1 ;
-(void)setPendingApplications:(NSArray *)arg1 ;
-(CNContact *)userContact;
-(NSArray *)pendingApplications;
@end

