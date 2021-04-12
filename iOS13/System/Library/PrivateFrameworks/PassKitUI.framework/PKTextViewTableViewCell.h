/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UITextView;

@interface PKTextViewTableViewCell : UITableViewCell {

	UITextView* _textView;

}

@property (nonatomic,readonly) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(void)prepareForReuse;
-(UITextView *)textView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

