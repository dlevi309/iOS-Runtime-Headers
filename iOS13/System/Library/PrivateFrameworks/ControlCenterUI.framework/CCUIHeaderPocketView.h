/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCUIStatusBarDelegate;
@class MTMaterialView, UIView, SBUIChevronView, CCUIStatusBar;

@interface CCUIHeaderPocketView : UIView {

	MTMaterialView* _headerBackgroundView;
	UIView* _headerLineView;
	SBUIChevronView* _headerChevronView;
	CCUIStatusBar* _statusBar;
	id<CCUIStatusBarDelegate> _statusBarDelegate;
	unsigned long long _mode;
	double _backgroundAlpha;
	double _chevronAlpha;
	double _statusBarAlpha;
	double _contentAlphaMultiplier;
	UIEdgeInsets _edgeInsets;
	CGAffineTransform _contentTransform;

}

@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) CCUIStatusBar * statusBar;                                     //@synthesize statusBar=_statusBar - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIStatusBarDelegate> statusBarDelegate;              //@synthesize statusBarDelegate=_statusBarDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                         //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                         //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                                          //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) double chevronAlpha;                                             //@synthesize chevronAlpha=_chevronAlpha - In the implementation block
@property (assign,nonatomic) double statusBarAlpha;                                           //@synthesize statusBarAlpha=_statusBarAlpha - In the implementation block
@property (assign,nonatomic) double contentAlphaMultiplier;                                   //@synthesize contentAlphaMultiplier=_contentAlphaMultiplier - In the implementation block
@property (assign,nonatomic) CGAffineTransform contentTransform;                              //@synthesize contentTransform=_contentTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform compactScaleTransform; 
@property (assign,nonatomic) unsigned long long chevronState; 
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(double)backgroundAlpha;
-(void)setBackgroundAlpha:(double)arg1 ;
-(CCUIStatusBar *)statusBar;
-(double)statusBarAlpha;
-(void)_updateAlpha;
-(void)setStatusBarAlpha:(double)arg1 ;
-(CGRect)contentBounds;
-(void)setContentTransform:(CGAffineTransform)arg1 ;
-(void)setCompactScaleTransform:(CGAffineTransform)arg1 ;
-(void)setChevronAlpha:(double)arg1 ;
-(void)setContentAlphaMultiplier:(double)arg1 ;
-(void)_updateContentTransform;
-(id<CCUIStatusBarDelegate>)statusBarDelegate;
-(CGAffineTransform)compactScaleTransform;
-(void)setStatusBarDelegate:(id<CCUIStatusBarDelegate>)arg1 ;
-(unsigned long long)chevronState;
-(void)setChevronState:(unsigned long long)arg1 ;
-(double)chevronAlpha;
-(double)contentAlphaMultiplier;
-(CGAffineTransform)contentTransform;
@end

