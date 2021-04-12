/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMailComposeHeaderView.h>

@class UILabel, UIView;

@interface MFComposeFromView : MFMailComposeHeaderView {

	UILabel* _accountLabel;
	UIView* _background;
	BOOL _accountHasUnsafeDomain;

}

@property (assign,nonatomic) BOOL accountHasUnsafeDomain;              //@synthesize accountHasUnsafeDomain=_accountHasUnsafeDomain - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)refreshPreferredContentSize;
-(id)_accountLabel;
-(void)_setBackgroundVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)accountLabelRect;
-(void)setAccountLabel:(id)arg1 ;
-(void)setAccountHasUnsafeDomain:(BOOL)arg1 ;
-(void)setLabelHighlighted:(BOOL)arg1 ;
-(BOOL)accountHasUnsafeDomain;
@end

