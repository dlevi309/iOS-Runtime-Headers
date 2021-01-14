/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UITextView;

@interface PKTextViewTableViewCell : UITableViewCell {

	UITextView* _textView;

}

@property (nonatomic,readonly) UITextView * textView;              //@synthesize textView=_textView - In the implementation block
-(UITextView *)textView;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

