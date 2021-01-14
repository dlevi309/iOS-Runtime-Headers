/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBIconImageView *)imageView;
-(PLPlatterView *)shadowView;
-(id)initWithIcon:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
@end

