/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_dispatch_source;
@class UILabel, UIView, CSHomeAffordanceView, SBUILegibilityLabel, SBUICallToActionLabel, NSObject, NSArray, _UILegibilitySettings, UIButton, NSString;

@interface SBDashBoardSetupView : UIView <CAAnimationDelegate> {

	UILabel* _titleLabel;
	UILabel* _storeRestrictedLabel;
	UIView* _homeAffordanceContainer;
	CSHomeAffordanceView* _homeAffordanceView;
	UIView* _homeAffordanceCallToActionContainer;
	SBUILegibilityLabel* _homeAffordanceCallToActionLabel;
	SBUICallToActionLabel* _homeButtonCallToActionLabel;
	NSObject*<OS_dispatch_source> _homeButtonCallToActionTimer;
	NSArray* _activationInfoViewConstraints;
	UIView* _activationInfoView;
	UIView* _regulatoryInfoView;
	_UILegibilitySettings* _legibilitySettings;
	UIButton* _infoButton;

}

@property (nonatomic,retain) UIView * activationInfoView;                             //@synthesize activationInfoView=_activationInfoView - In the implementation block
@property (nonatomic,retain) UIView * regulatoryInfoView;                             //@synthesize regulatoryInfoView=_regulatoryInfoView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                 //@synthesize infoButton=_infoButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UIButton *)infoButton;
-(void)_setupConstraints;
-(void)_updateLegibilitySettings;
-(void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 ;
-(void)_layoutHomeAffordance;
-(void)_addTitleLabel;
-(void)setInfoButtonVisible:(BOOL)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 usingHomeAffordance:(BOOL)arg2 isStoreRestricted:(BOOL)arg3 ;
-(void)animateComponents:(unsigned long long)arg1 toActive:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setTitleString:(id)arg1 forLanguage:(id)arg2 ;
-(void)setStoreRestrictedString:(id)arg1 forLanguage:(id)arg2 ;
-(void)setCallToActionString:(id)arg1 forLanguage:(id)arg2 ;
-(void)setActivationInfoView:(UIView *)arg1 ;
-(void)setRegulatoryInfoView:(UIView *)arg1 ;
-(void)_addInfoButton;
-(void)_addStoreRestrictedLabel;
-(void)_addHomeAffordanceCallToAction;
-(void)_addHomeAffordance;
-(void)_addHomeButtonCallToAction;
-(void)_adjustTitleVisibilityForInfoViews;
-(void)_setupActivationInfoConstraintsIfNeeded;
-(void)_animateView:(id)arg1 toActive:(BOOL)arg2 withDispatchGroup:(id)arg3 ;
-(void)_animateHomeButtonCallToActionToActive:(BOOL)arg1 withDispatchGroup:(id)arg2 ;
-(void)_animateHomeAffordanceCallToActionToActive:(BOOL)arg1 withDispatchGroup:(id)arg2 ;
-(void)_animateHomeAffordanceToActive:(BOOL)arg1 withDispatchGroup:(id)arg2 ;
-(void)_layoutRegulatoryInfo;
-(void)_layoutActivationInfoView;
-(void)_layoutHomeButtonCallToAction;
-(void)_layoutHomeAffordanceCallToAction;
-(void)_removeNormalAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 ;
-(void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 dispatchGroup:(id)arg3 ;
-(UIView *)activationInfoView;
-(UIView *)regulatoryInfoView;
@end

