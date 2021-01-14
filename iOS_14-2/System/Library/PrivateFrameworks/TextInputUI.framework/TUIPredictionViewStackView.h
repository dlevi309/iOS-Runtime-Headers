/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class TUIPredictionViewStackContentView;

@interface TUIPredictionViewStackView : UIView {

	long long _layoutDirection;
	TUIPredictionViewStackContentView* _contentView;
	UIEdgeInsets _contentMargin;

}

@property (nonatomic,retain) TUIPredictionViewStackContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargin;                                   //@synthesize contentMargin=_contentMargin - In the implementation block
@property (assign,nonatomic) long long layoutDirection;                                    //@synthesize layoutDirection=_layoutDirection - In the implementation block
-(id)arrangedSubviews;
-(id)allVisibleCells;
-(id)visibleCells;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMargin:(UIEdgeInsets)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)layoutSubviews;
-(long long)_layoutTypeForSubview:(id)arg1 ;
-(void)setContentView:(TUIPredictionViewStackContentView *)arg1 ;
-(id)subStackViews;
-(void)setLayoutDirection:(long long)arg1 ;
-(TUIPredictionViewStackContentView *)contentView;
-(UIEdgeInsets)contentMargin;
-(long long)layoutDirection;
@end

