/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, _UIBackdropView, UIView, UIScrollView, UILabel, UIButton, NSLayoutConstraint, NSMutableArray;

@interface _UIContentUnavailableView : UIView {

	unsigned long long _style;
	NSString* _title;
	_UIBackdropView* _backdrop;
	UIView* _containerView;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _actionButton;
	NSLayoutConstraint* titleToMessageConstraint;
	NSLayoutConstraint* messageToButtonConstraint;
	NSLayoutConstraint* buttonHeightConstraint;
	UIView* _fromSnapshot;
	UIView* _toSnapshot;
	CGSize _fromSnapshotSize;
	NSMutableArray* _containerViewContraints;
	NSString* _message;
	NSString* _buttonTitle;
	/*^block*/id _buttonAction;
	unsigned long long _vibrantOptions;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id buttonAction;                                  //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,nonatomic) unsigned long long vibrantOptions;              //@synthesize vibrantOptions=_vibrantOptions - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)buttonTitle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(void)layoutSubviews;
-(id)_titleLabel;
-(void)updateConstraints;
-(id)_titleFont;
-(void)didMoveToWindow;
-(id)_messageLabel;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 ;
-(void)setButtonAction:(id)arg1 ;
-(CGSize)_buttonSize;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(BOOL)arg4 ;
-(double)_labelVerticalSpacing;
-(void)_updateForCurrentContentSizeCategory;
-(id)_messageTextStyle;
-(id)_buttonFont;
-(void)_rebuildConstraints;
-(BOOL)_hasVibrantButton;
-(CGColorRef)_colorForButtonForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_updateViewHierarchy;
-(double)_buttonVerticalSpacing;
-(BOOL)_hasVibrantText;
-(id)_vibrantBaseColor;
-(id)_flatTextColor;
-(double)_labelAlpha;
-(void)_actionButtonPressed:(id)arg1 ;
-(id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2 ;
-(double)_buttonAlpha;
-(id)buttonAction;
-(void)windowWillRotateNotification:(id)arg1 ;
-(void)windowWillAnimateRotateNotification:(id)arg1 ;
-(void)windowDidRotateNotification:(id)arg1 ;
-(void)cleanupLingeringRotationState;
-(id)_buttonTextStyle;
-(unsigned long long)vibrantOptions;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setVibrantOptions:(unsigned long long)arg1 ;
-(id)_actionButton;
@end

