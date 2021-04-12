/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView.h>

@protocol _UINavigationBarTitleViewDataSource;
@class NSLayoutConstraint, _UINavigationBarTitleViewOverlayRects, UINavigationItem, NSArray, UIMenu, NSString;

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView> {

	NSLayoutConstraint* _heightConstraint;
	_UINavigationBarTitleViewOverlayRects* _overlayRects;
	id<_UINavigationBarTitleViewDataSource> _dataSource;
	BOOL _underlayBarContent;
	BOOL _hideBackButton;
	BOOL _hideLeadingBarButtons;
	BOOL _hideStandardTitle;
	BOOL _hideTrailingBarButtons;
	UINavigationItem* _navigationItem;
	long long _titleLocation;
	double _height;
	double _backButtonMaximumWidth;
	double _backButtonAlpha;
	double _leadingBarAlpha;
	double _trailingBarAlpha;
	long long _preferredContentAlignment;

}

@property (nonatomic,__weak,readonly) UINavigationItem * navigationItem;                  //@synthesize navigationItem=_navigationItem - In the implementation block
@property (nonatomic,readonly) long long titleLocation;                                   //@synthesize titleLocation=_titleLocation - In the implementation block
@property (assign,nonatomic) BOOL underlayBarContent;                                     //@synthesize underlayBarContent=_underlayBarContent - In the implementation block
@property (assign,nonatomic) double height;                                               //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double backButtonMaximumWidth;                               //@synthesize backButtonMaximumWidth=_backButtonMaximumWidth - In the implementation block
@property (assign,nonatomic) BOOL hideBackButton;                                         //@synthesize hideBackButton=_hideBackButton - In the implementation block
@property (assign,nonatomic) BOOL hideLeadingBarButtons;                                  //@synthesize hideLeadingBarButtons=_hideLeadingBarButtons - In the implementation block
@property (assign,nonatomic) BOOL hideStandardTitle;                                      //@synthesize hideStandardTitle=_hideStandardTitle - In the implementation block
@property (assign,nonatomic) BOOL hideTrailingBarButtons;                                 //@synthesize hideTrailingBarButtons=_hideTrailingBarButtons - In the implementation block
@property (assign,nonatomic) double backButtonAlpha;                                      //@synthesize backButtonAlpha=_backButtonAlpha - In the implementation block
@property (assign,nonatomic) double leadingBarAlpha;                                      //@synthesize leadingBarAlpha=_leadingBarAlpha - In the implementation block
@property (assign,nonatomic) double trailingBarAlpha;                                     //@synthesize trailingBarAlpha=_trailingBarAlpha - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentOverlayRects; 
@property (nonatomic,readonly) long long leadingOverlayCount; 
@property (nonatomic,readonly) long long trailingOverlayCount; 
@property (nonatomic,readonly) double largeTitleHeight; 
@property (nonatomic,readonly) CGSize largeTitleHeightRange; 
@property (nonatomic,readonly) double contentBaselineOffsetFromTop; 
@property (nonatomic,readonly) double contentBaseHeight; 
@property (assign,nonatomic) long long preferredContentAlignment;                         //@synthesize preferredContentAlignment=_preferredContentAlignment - In the implementation block
@property (nonatomic,copy,readonly) UIMenu * backButtonMenu; 
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) double _navigationBarBackButtonAlpha; 
@property (nonatomic,readonly) double _navigationBarLeadingBarButtonsAlpha; 
@property (nonatomic,readonly) double _navigationBarTrailingBarButtonsAlpha; 
@property (nonatomic,readonly) long long _preferredAlignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIMenu *)backButtonMenu;
-(void)setHeight:(double)arg1 ;
-(long long)titleLocation;
-(long long)trailingOverlayCount;
-(double)_navigationBarLeadingBarButtonsAlpha;
-(BOOL)hideLeadingBarButtons;
-(NSArray *)contentOverlayRects;
-(void)setHideTrailingBarButtons:(BOOL)arg1 ;
-(long long)leadingOverlayCount;
-(void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)transitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_underlayNavigationBarContent;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2 ;
-(void)_contentDidChange;
-(BOOL)hideBackButton;
-(void)setLeadingBarAlpha:(double)arg1 ;
-(void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(double)largeTitleHeight;
-(double)_navigationBarContentHeight;
-(void)setHideStandardTitle:(BOOL)arg1 ;
-(long long)_preferredContentSizeForSize:(long long)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)setTrailingBarAlpha:(double)arg1 ;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(BOOL)_wantsTwoPartTransition;
-(BOOL)_hideNavigationBarStandardTitle;
-(double)contentBaselineOffsetFromTop;
-(void)performTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(CGSize)largeTitleHeightRange;
-(long long)preferredContentAlignment;
-(UINavigationItem *)navigationItem;
-(void)setHideLeadingBarButtons:(BOOL)arg1 ;
-(BOOL)hideTrailingBarButtons;
-(void)setBackButtonAlpha:(double)arg1 ;
-(void)contentDidChange;
-(void)preferredContentSizeDidChange;
-(void)setPreferredContentAlignment:(long long)arg1 ;
-(void)navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2 ;
-(void)setHideBackButton:(BOOL)arg1 ;
-(double)_navigationBarBackButtonAlpha;
-(long long)preferredContentSizeForSize:(long long)arg1 ;
-(void)transitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg1 ;
-(double)contentBaseHeight;
-(double)_navigationBarTrailingBarButtonsAlpha;
-(long long)_preferredAlignment;
-(double)backButtonAlpha;
-(double)leadingBarAlpha;
-(void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(double)trailingBarAlpha;
-(BOOL)underlayBarContent;
-(void)setBackButtonMaximumWidth:(double)arg1 ;
-(void)setUnderlayBarContent:(BOOL)arg1 ;
-(double)_navigationBarBackButtonMaximumWidth;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3 ;
-(BOOL)_hideNavigationBarBackButton;
-(BOOL)hideStandardTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)height;
-(NSString *)description;
-(double)backButtonMaximumWidth;
-(id)initWithCoder:(id)arg1 ;
@end

