/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) UIButton * centerButton; 
@property (assign,nonatomic) UIEdgeInsets buttonsTouchInsets;                                     //@synthesize buttonsTouchInsets=_buttonsTouchInsets - In the implementation block
@property (assign,nonatomic) long long textSizeMode;                                              //@synthesize textSizeMode=_textSizeMode - In the implementation block
@property (assign,nonatomic) BOOL disableButtonHighlights;                                        //@synthesize disableButtonHighlights=_disableButtonHighlights - In the implementation block
@property (nonatomic,readonly) UIFont * font; 
@property (assign,nonatomic) BOOL shouldUseVerticalLayout;                                        //@synthesize shouldUseVerticalLayout=_shouldUseVerticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonTitleForAction:(long long)arg1 orb:(BOOL)arg2 ;
+(id)imageForAction:(long long)arg1 selected:(BOOL)arg2 ;
+(BOOL)isActionDestructive:(long long)arg1 ;
-(id<EKUIEventStatusButtonsViewDelegate>)delegate;
-(void)setDelegate:(id<EKUIEventStatusButtonsViewDelegate>)arg1 ;
-(double)_minimumFontSize;
-(void)layoutSubviews;
-(UIFont *)font;
-(NSArray *)actions;
-(void)updateConstraints;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(long long)selectedAction;
-(void)setSelectedAction:(long long)arg1 ;
-(void)updateFonts;
-(double)baselineFromBoundsTop;
-(id)initWithFrame:(CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 centerSingleButton:(BOOL)arg4 ;
-(void)setDisableButtonHighlights:(BOOL)arg1 ;
-(void)setTextSizeMode:(long long)arg1 ;
-(void)_setupButtons;
-(double)_defaultFontSizeForButtons;
-(id)_fontWithSize:(double)arg1 selected:(BOOL)arg2 ;
-(id)_newToolbarButton;
-(BOOL)shouldUseVerticalLayout;
-(void)setButtonsTouchInsets:(UIEdgeInsets)arg1 ;
-(void)_setupConstraints;
-(BOOL)_shouldCenterButton;
-(void)findCursorInteractionWithButton:(id)arg1 actions:(/*^block*/id)arg2 ;
-(id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3 ;
-(long long)_actionForButton:(id)arg1 ;
-(BOOL)disableButtonHighlights;
-(long long)_buttonIndexForAction:(long long)arg1 ;
-(void)_updateButtonFontsWithSize:(double)arg1 ;
-(id)buttonForAction:(long long)arg1 ;
-(void)_updateSelectionToButton:(id)arg1 ;
-(double)_updateFontSizesFromDelegate;
-(id)initWithFrame:(CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 ;
-(UIButton *)centerButton;
-(void)setShouldUseVerticalLayout:(BOOL)arg1 ;
-(UIEdgeInsets)buttonsTouchInsets;
-(long long)textSizeMode;
@end

