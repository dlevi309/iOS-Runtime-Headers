/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)button;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(double)rightMargin;
-(UILabel *)label;
@end

