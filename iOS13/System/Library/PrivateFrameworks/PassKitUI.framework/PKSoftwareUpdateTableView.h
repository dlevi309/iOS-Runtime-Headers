/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableView.h>

@class UIScrollView, UILabel, UITextView, UIColor;

@interface PKSoftwareUpdateTableView : UITableView {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UITextView* _messageView;
	long long _context;
	UIColor* _textColor;
	UIColor* _linkColor;

}

@property (assign,nonatomic) long long context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;              //@synthesize linkColor=_linkColor - In the implementation block
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UIColor *)textColor;
-(UIColor *)linkColor;
-(void)setLinkColor:(UIColor *)arg1 ;
-(id)_messageAttributedStringWithTextColor:(id)arg1 ;
@end

