/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)preferredFocusedView;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)_titleFont;
-(id)_buttonFont;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)didMoveToWindow;
-(CGSize)_buttonSize;
-(id)_messageLabel;
-(double)_labelAlpha;
-(id)buttonAction;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(BOOL)arg4 ;
-(double)_labelVerticalSpacing;
-(void)_updateForCurrentContentSizeCategory;
-(id)_messageTextStyle;
-(void)_rebuildConstraints;
-(BOOL)_hasVibrantButton;
-(CGColorRef)_colorForButtonForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2 ;
-(BOOL)_hasVibrantText;
-(void)_updateViewHierarchy;
-(double)_buttonVerticalSpacing;
-(id)_vibrantBaseColor;
-(id)_actionButton;
-(id)_flatTextColor;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)windowWillAnimateRotateNotification:(id)arg1 ;
-(id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)windowWillRotateNotification:(id)arg1 ;
-(void)windowDidRotateNotification:(id)arg1 ;
-(void)cleanupLingeringRotationState;
-(id)_buttonTextStyle;
-(unsigned long long)vibrantOptions;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setVibrantOptions:(unsigned long long)arg1 ;
-(id)_titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)_buttonAlpha;
-(NSString *)title;
-(void)dealloc;
-(void)setButtonAction:(id)arg1 ;
@end

