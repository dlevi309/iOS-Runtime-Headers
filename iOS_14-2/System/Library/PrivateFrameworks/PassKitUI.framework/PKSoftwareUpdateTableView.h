/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UIColor *)linkColor;
-(long long)context;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(id)_messageAttributedStringWithTextColor:(id)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(void)setContext:(long long)arg1 ;
@end

