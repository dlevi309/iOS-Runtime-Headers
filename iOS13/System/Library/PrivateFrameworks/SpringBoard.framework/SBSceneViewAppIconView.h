/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBIconImageView, UILabel, PLPlatterView;

@interface SBSceneViewAppIconView : UIView {

	SBIconImageView* _imageView;
	UILabel* _label;
	PLPlatterView* _shadowView;

}

@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PLPlatterView * shadowView;               //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,readonly) SBIconImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(UILabel *)label;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SBIconImageView *)imageView;
-(PLPlatterView *)shadowView;
-(id)initWithIcon:(id)arg1 ;
@end

