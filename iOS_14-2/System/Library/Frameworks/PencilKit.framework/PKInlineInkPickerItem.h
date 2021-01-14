/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PKInlineInkPickerItem : UIView {

	double _yOffset;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double yOffset;                 //@synthesize yOffset=_yOffset - In the implementation block
-(UIButton *)button;
-(CGSize)intrinsicContentSize;
-(double)yOffset;
-(void)setButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setYOffset:(double)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end

