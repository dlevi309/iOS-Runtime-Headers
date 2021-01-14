/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)textColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithPlaceholderString:(id)arg1 isPad:(BOOL)arg2 ;
@end

