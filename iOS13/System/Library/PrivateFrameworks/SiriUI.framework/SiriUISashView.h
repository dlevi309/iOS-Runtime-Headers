/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, SiriUITextContainerView, SiriUISashItem;

@interface SiriUISashView : UIView {

	UIView* _contentView;
	UIImageView* _imageView;
	SiriUITextContainerView* _textContainerView;
	SiriUISashItem* _sashItem;

}

@property (nonatomic,readonly) SiriUISashItem * sashItem;              //@synthesize sashItem=_sashItem - In the implementation block
+(id)_font;
+(SCD_Struct_Si6)_textContainerStyleForSashItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SiriUISashItem *)sashItem;
-(void)setSashItem:(id)arg1 locale:(id)arg2 ;
@end

