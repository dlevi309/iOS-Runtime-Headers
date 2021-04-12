/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIColor;

@interface SKUIProductPagePlaceholderView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIColor* _textColor;

}

@property (nonatomic,retain) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIColor *)textColor;
-(id)initWithPlaceholderString:(id)arg1 isPad:(BOOL)arg2 ;
@end

