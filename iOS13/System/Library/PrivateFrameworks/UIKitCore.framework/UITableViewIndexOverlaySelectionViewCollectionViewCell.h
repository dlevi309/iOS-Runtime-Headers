/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIButton, NSString, UILabel;

@interface UITableViewIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {

	UIButton* _button;
	double _rightMargin;
	BOOL _rightMarginAdjusted;
	id _tapTarget;
	SEL _tapAction;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double rightMargin; 
@property (readonly) UILabel * label; 
@property (readonly) UIButton * button;                            //@synthesize button=_button - In the implementation block
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)applyLayoutAttributes:(id)arg1 ;
-(long long)textAlignment;
-(double)rightMargin;
@end

