/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@protocol EKUIEventStatusButtonsViewDelegate;
@class NSArray, UIFont, NSLayoutConstraint, UIButton, NSString;

@interface EKUIEventStatusButtonsView : UIView <_UICursorInteractionDelegate> {

	NSArray* _buttons;
	NSArray* _actions;
	UIFont* _font;
	double _outsideMargin;
	NSLayoutConstraint* _leadingMarginConstraint;
	NSLayoutConstraint* _trailingMarginConstraint;
	double _baselineFromBoundsTop;
	BOOL _forcesSingleButtonToCenter;
	BOOL _inboxStyle;
	NSArray* _currentConstraints;
	BOOL _disableButtonHighlights;
	BOOL _shouldUseVerticalLayout;
	id<EKUIEventStatusButtonsViewDelegate> _delegate;
	long long _selectedAction;
	long long _textSizeMode;
	UIEdgeInsets _buttonsTouchInsets;

}

@property (assign,nonatomic,__weak) id<EKUIEventStatusButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedAction;                                            //@synthesize selectedAction=_selectedAction - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                   //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) UIButton * leadingButton; 
@property (nonatomic,readonly) UIButton * centerButton; 
@property (nonatomic,readonly) UIButton * trailingButton; 
@property (assign,nonatomic) UIEdgeInsets buttonsTouchInsets;                                     //@synthesize buttonsTouchInsets=_buttonsTouchInsets - In the implementation block
@property (assign,nonatomic) long long textSizeMode;                                              //@synthesize textSizeMode=_textSizeMode - In the implementation block
@property (assign,nonatomic) BOOL disableButtonHighlights;                                        //@synthesize disableButtonHighlights=_disableButtonHighlights - In the implementation block
@property (nonatomic,readonly) UIFont * font; 
@property (assign,nonatomic) BOOL shouldUseVerticalLayout;                                        //@synthesize shouldUseVerticalLayout=_shouldUseVerticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isActionDestructive:(long long)arg1 ;
+(id)buttonTitleForAction:(long long)arg1 orb:(BOOL)arg2 ;
+(id)imageForAction:(long long)arg1 selected:(BOOL)arg2 ;
-(void)_setupConstraints;
-(void)setActions:(NSArray *)arg1 ;
-(double)_defaultFontSizeForButtons;
-(void)buttonTapped:(id)arg1 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(BOOL)disableButtonHighlights;
-(UIButton *)leadingButton;
-(double)_updateFontFromDelegate;
-(NSArray *)actions;
-(id)initWithFrame:(CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 options:(unsigned long long)arg4 ;
-(id)_fontWithSize:(double)arg1 selected:(BOOL)arg2 ;
-(id<EKUIEventStatusButtonsViewDelegate>)delegate;
-(long long)_buttonIndexForAction:(long long)arg1 ;
-(void)setTextSizeMode:(long long)arg1 ;
-(id)buttonForAction:(long long)arg1 ;
-(BOOL)_shouldCenterButton;
-(double)baselineFromBoundsTop;
-(void)_setupButtons;
-(void)setDelegate:(id<EKUIEventStatusButtonsViewDelegate>)arg1 ;
-(void)setButtonsTouchInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)_newButtonDivider;
-(long long)_actionForButton:(id)arg1 ;
-(void)updateFonts;
-(double)_minimumFontSize;
-(long long)selectedAction;
-(void)setSelectedAction:(long long)arg1 ;
-(void)_updateButtonFonts:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 ;
-(void)findCursorInteractionWithButton:(id)arg1 actions:(/*^block*/id)arg2 ;
-(void)_updateButtonFontsWithSize:(double)arg1 ;
-(void)setDisableButtonHighlights:(BOOL)arg1 ;
-(BOOL)shouldUseVerticalLayout;
-(long long)textSizeMode;
-(UIEdgeInsets)buttonsTouchInsets;
-(id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3 ;
-(UIButton *)trailingButton;
-(void)_updateSelectionToButton:(id)arg1 ;
-(UIButton *)centerButton;
-(id)_newToolbarButton;
-(void)setShouldUseVerticalLayout:(BOOL)arg1 ;
-(UIFont *)font;
-(void)updateForMiniBarState:(BOOL)arg1 ;
@end

