/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface TUIPredictionViewStackView : UIView {

	UIView* _contentView;
	UIEdgeInsets _contentMargin;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargin;              //@synthesize contentMargin=_contentMargin - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentMargin;
-(id)arrangedSubviews;
-(void)addArrangedSubview:(id)arg1 ;
-(id)visibleCells;
-(id)allVisibleCells;
-(id)subStackViews;
-(long long)_layoutTypeForSubview:(id)arg1 ;
-(void)setContentMargin:(UIEdgeInsets)arg1 ;
@end

