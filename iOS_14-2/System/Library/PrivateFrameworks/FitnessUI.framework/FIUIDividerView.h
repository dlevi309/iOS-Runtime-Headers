/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface FIUIDividerView : UIView {

	UIImageView* _imageView;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)edgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

