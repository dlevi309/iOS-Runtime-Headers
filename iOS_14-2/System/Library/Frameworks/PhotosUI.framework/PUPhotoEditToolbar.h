/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutStaticAdaptable.h>

@protocol PUPhotoEditToolbarDelegate;
@class UIView, CAGradientLayer, NSArray, UILongPressGestureRecognizer, UIButton, NSString;

@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable> {

	UIView* _gradientBackgroundView;
	CAGradientLayer* _gradientLayer;
	UIView* _underlineView;
	NSArray* _basicViewsConstraints;
	NSArray* _mainActionButtonConstraints;
	NSArray* _secondaryActionButtonConstraints;
	NSArray* _toolButtonsConstraints;
	NSArray* _toolButtonLayoutGuides;
	UILongPressGestureRecognizer* _accessibilityLongPressGestureRecognizer;
	BOOL _useLargeShortSideHeight;
	BOOL _useTabBarHeight;
	long long _layoutOrientation;
	NSArray* _toolButtons;
	long long _buttonSpacing;
	UIButton* _mainActionButton;
	UIButton* _secondaryActionButton;
	UIView* _stretchableView;
	long long _backgroundStyle;
	long long _layoutDirection;
	double _longSideMargin;
	id<PUPhotoEditToolbarDelegate> _delegate;
	UIView* _mainToolbarContainer;
	UIEdgeInsets _contentPadding;

}

@property (nonatomic,retain) UIView * mainToolbarContainer;                               //@synthesize mainToolbarContainer=_mainToolbarContainer - In the implementation block
@property (assign,nonatomic) BOOL useLargeShortSideHeight;                                //@synthesize useLargeShortSideHeight=_useLargeShortSideHeight - In the implementation block
@property (assign,nonatomic) BOOL useTabBarHeight;                                        //@synthesize useTabBarHeight=_useTabBarHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentPadding;                                 //@synthesize contentPadding=_contentPadding - In the implementation block
@property (nonatomic,copy,readonly) NSArray * toolButtons;                                //@synthesize toolButtons=_toolButtons - In the implementation block
@property (nonatomic,readonly) long long buttonSpacing;                                   //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (nonatomic,readonly) UIButton * mainActionButton;                               //@synthesize mainActionButton=_mainActionButton - In the implementation block
@property (nonatomic,readonly) UIButton * secondaryActionButton;                          //@synthesize secondaryActionButton=_secondaryActionButton - In the implementation block
@property (nonatomic,readonly) UIView * stretchableView;                                  //@synthesize stretchableView=_stretchableView - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                   //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                   //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (assign,nonatomic) double longSideMargin;                                       //@synthesize longSideMargin=_longSideMargin - In the implementation block
@property (nonatomic,readonly) double shortSideSize; 
@property (assign,nonatomic,__weak) id<PUPhotoEditToolbarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long layoutOrientation;                               //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)layoutOrientation;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PUPhotoEditToolbarDelegate>)delegate;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIEdgeInsets)contentPadding;
-(void)setDelegate:(id<PUPhotoEditToolbarDelegate>)arg1 ;
-(void)updateConstraints;
-(NSArray *)toolButtons;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)tabBarHeight;
-(void)setContentPadding:(UIEdgeInsets)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setupWithLayoutOrientation:(long long)arg1 ;
-(void)setLongSideMargin:(double)arg1 ;
-(double)shortSideSize;
-(void)setToolButtons:(id)arg1 mainActionButton:(id)arg2 secondaryActionButton:(id)arg3 stretchableView:(id)arg4 ;
-(void)setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4 ;
-(void)setUseLargeShortSideHeight:(BOOL)arg1 ;
-(void)_invalidateAllConstraints;
-(BOOL)useTabBarHeight;
-(void)_setToolButtons:(id)arg1 buttonSpacing:(long long)arg2 mainActionButton:(id)arg3 secondaryActionButton:(id)arg4 stretchableView:(id)arg5 ;
-(void)_addLeadingConstraintsWithMetrics:(id)arg1 verticalLayout:(BOOL)arg2 ;
-(void)_addTrailingConstraintsWithMetrics:(id)arg1 verticalLayout:(BOOL)arg2 ;
-(void)setUseTabBarHeight:(BOOL)arg1 ;
-(void)_addCenterConstraintsWithMetrics:(id)arg1 verticalLayout:(BOOL)arg2 ;
-(void)accessibilityLongPressChanged:(id)arg1 ;
-(BOOL)useLargeShortSideHeight;
-(long long)buttonSpacing;
-(UIButton *)mainActionButton;
-(UIButton *)secondaryActionButton;
-(UIView *)stretchableView;
-(double)longSideMargin;
-(UIView *)mainToolbarContainer;
-(void)setMainToolbarContainer:(UIView *)arg1 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(long long)layoutDirection;
@end

