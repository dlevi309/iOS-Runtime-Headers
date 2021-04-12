/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InfoKit.framework/InfoKit
*/

#import <InfoKit/INKContentView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol INKTipContentHintViewDelegate;
@class UIButton, UILabel, UIImageView, INKMultilineButton, NSMutableArray, NSString;

@interface INKTipContentHintView : INKContentView <UIGestureRecognizerDelegate> {

	BOOL __isAccessbilitySizeCategory;
	BOOL __isSmallScreen;
	UIButton* _closeButton;
	UILabel* _titleLabel;
	UILabel* _textLabel;
	UIImageView* _iconImageView;
	INKMultilineButton* _actionButton;
	NSMutableArray* _axRequiredLayoutConstraints;
	NSMutableArray* _defaultRequiredLayoutConstraints;
	id<INKTipContentHintViewDelegate> __tipContentDelegate;

}

@property (assign,nonatomic,__weak) id<INKTipContentHintViewDelegate> _tipContentDelegate;              //@synthesize _tipContentDelegate=__tipContentDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)secondaryLabelColor;
+(id)primaryLabelColor;
+(id)primaryLabelFont;
+(id)secondaryLabelFont;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)updateFonts;
-(void)_contentSizeCategoryDidChange;
-(void)_accessibilitySizeCategoryDidChange;
-(void)_setPreferredTraitCollection:(id)arg1 ;
-(id)_initWithContent:(id)arg1 tipContentDelegate:(id)arg2 ;
-(void)_hintTapped;
-(void)_closeTapped;
-(void)_actionTapped;
-(void)updateAccessibilityContentCategory;
-(BOOL)view:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id<INKTipContentHintViewDelegate>)_tipContentDelegate;
-(void)set_tipContentDelegate:(id<INKTipContentHintViewDelegate>)arg1 ;
@end

