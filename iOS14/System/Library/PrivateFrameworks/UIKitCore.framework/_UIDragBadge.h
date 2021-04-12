/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface _UIDragBadge : UIView {

	UILabel* _label;
	UIImageView* _imageView;
	long long _style;
	long long _itemCount;

}

@property (nonatomic,readonly) UILabel * _label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * _imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long itemCount;                            //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPointForAlignment; 
-(UILabel *)_label;
-(UIImageView *)_imageView;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateForStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)anchorPointForAlignment;
-(void)_updateLabelTextFromItemCount;
-(long long)itemCount;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setItemCount:(long long)arg1 ;
-(long long)style;
@end

