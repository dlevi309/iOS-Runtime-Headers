/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PKPaletteTextOptionsView : UIView {

	UIButton* _textButton;
	UIButton* _signatureButton;

}

@property (nonatomic,readonly) UIButton * textButton;                   //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,readonly) UIButton * signatureButton;              //@synthesize signatureButton=_signatureButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)textButton;
-(UIButton *)signatureButton;
@end

