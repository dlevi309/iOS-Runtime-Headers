/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)intrinsicContentSize;
-(UIButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButton:(UIButton *)arg1 ;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end

