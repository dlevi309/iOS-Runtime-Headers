/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class OBBuddyPaneHeaderView, UIView, _UIBackdropView, NSMutableArray, UIColor, OBPrivacyLinkController, NSString, UIScrollView, NSArray, UIImage;

@interface OBSplashController : UIViewController <UIScrollViewDelegate> {

	OBBuddyPaneHeaderView* _headerView;
	UIView* _trayBackdropContainer;
	_UIBackdropView* _lightTrayBackdrop;
	_UIBackdropView* _ultraLightTrayBackdrop;
	NSMutableArray* _buttons;
	UIColor* _tint;
	UIView* _bleedView;
	OBPrivacyLinkController* _privacyLink;
	BOOL _disableIconTint;
	BOOL _scrollingDisabled;
	BOOL _darkMode;
	BOOL _fullWidthContent;
	BOOL _displayPrivacyLinkCaptionText;
	BOOL _usesTwoButtonLayout;
	NSString* _detailText;
	UIView* _contentView;
	long long _contentViewPosition;
	UIView* _buttonTray;
	UIScrollView* _scrollView;
	NSArray* _onBoardingBundleIdentifiers;
	long long _privacyLinkPosition;
	UIColor* _bleedColor;
	UIEdgeInsets _additionalInsets;

}

@property (nonatomic,retain) UIImage * icon; 
@property (assign,nonatomic) CGSize iconSize; 
@property (nonatomic,retain) NSString * iconAccessibilityLabel; 
@property (nonatomic,copy) NSString * detailText;                                            //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long contentViewPosition;                                  //@synthesize contentViewPosition=_contentViewPosition - In the implementation block
@property (nonatomic,readonly) UIView * buttonTray;                                          //@synthesize buttonTray=_buttonTray - In the implementation block
@property (assign,nonatomic) UIEdgeInsets additionalInsets;                                  //@synthesize additionalInsets=_additionalInsets - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL disableIconTint;                                           //@synthesize disableIconTint=_disableIconTint - In the implementation block
@property (assign,getter=isScrollingDisabled,nonatomic) BOOL scrollingDisabled;              //@synthesize scrollingDisabled=_scrollingDisabled - In the implementation block
@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;                                //@synthesize darkMode=_darkMode - In the implementation block
@property (assign,nonatomic) BOOL fullWidthContent;                                          //@synthesize fullWidthContent=_fullWidthContent - In the implementation block
@property (nonatomic,copy) NSString * onBoardingBundleIdentifier; 
@property (nonatomic,copy) NSArray * onBoardingBundleIdentifiers;                            //@synthesize onBoardingBundleIdentifiers=_onBoardingBundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL displayPrivacyLinkCaptionText;                             //@synthesize displayPrivacyLinkCaptionText=_displayPrivacyLinkCaptionText - In the implementation block
@property (assign,nonatomic) long long privacyLinkPosition;                                  //@synthesize privacyLinkPosition=_privacyLinkPosition - In the implementation block
@property (nonatomic,retain) UIColor * bleedColor;                                           //@synthesize bleedColor=_bleedColor - In the implementation block
@property (nonatomic,readonly) OBBuddyPaneHeaderView * headerView; 
@property (assign,nonatomic) BOOL usesTwoButtonLayout;                                       //@synthesize usesTwoButtonLayout=_usesTwoButtonLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)init;
-(void)setIconAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)iconAccessibilityLabel;
-(BOOL)isDarkMode;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setTitle:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setBleedColor:(UIColor *)arg1 ;
-(long long)privacyLinkPosition;
-(void)setDisplayPrivacyLinkCaptionText:(BOOL)arg1 ;
-(void)setPrivacyLinkPosition:(long long)arg1 ;
-(id)_createButtonWithTitle:(id)arg1 style:(long long)arg2 ;
-(void)addButtonWithTitle:(id)arg1 style:(long long)arg2 action:(/*^block*/id)arg3 ;
-(BOOL)displayPrivacyLinkCaptionText;
-(void)setOnBoardingBundleIdentifiers:(NSArray *)arg1 ;
-(void)_updateButtonFonts;
-(UIColor *)bleedColor;
-(BOOL)fullWidthContent;
-(void)updateBleedColor;
-(void)setDisableIconTint:(BOOL)arg1 ;
-(void)setContentViewPosition:(long long)arg1 ;
-(void)setAdditionalInsets:(UIEdgeInsets)arg1 ;
-(void)setTitle:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 action:(/*^block*/id)arg3 ;
-(void)setLinkText:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setScrollingDisabled:(BOOL)arg1 ;
-(NSString *)onBoardingBundleIdentifier;
-(void)setOnBoardingBundleIdentifier:(NSString *)arg1 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)setUsesTwoButtonLayout:(BOOL)arg1 ;
-(long long)contentViewPosition;
-(UIEdgeInsets)additionalInsets;
-(BOOL)disableIconTint;
-(BOOL)isScrollingDisabled;
-(void)setFullWidthContent:(BOOL)arg1 ;
-(NSArray *)onBoardingBundleIdentifiers;
-(BOOL)usesTwoButtonLayout;
-(CGSize)iconSize;
-(void)setDetailText:(NSString *)arg1 ;
-(UIView *)buttonTray;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)preferredUserInterfaceStyle;
-(id)buttonAtIndex:(unsigned long long)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(OBBuddyPaneHeaderView *)headerView;
-(void)loadView;
-(id)contentScrollView;
-(NSString *)detailText;
-(void)setIconSize:(CGSize)arg1 ;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)_updateTrayVisibility;
-(void)viewDidLayoutSubviews;
-(void)_buttonPressed:(id)arg1 ;
-(void)removeAllButtons;
-(void)setDarkMode:(BOOL)arg1 ;
@end

