/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell {

	SKUITextBoxView* _textBoxView;
	UIEdgeInsets _textBoxInsets;

}

@property (nonatomic,readonly) SKUITextBoxView * textBoxView;              //@synthesize textBoxView=_textBoxView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textBoxInsets;                   //@synthesize textBoxInsets=_textBoxInsets - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SKUITextBoxView *)textBoxView;
-(void)setTextBoxInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textBoxInsets;
@end

