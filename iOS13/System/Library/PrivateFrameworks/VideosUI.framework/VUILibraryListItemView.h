/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUILabel, UIImage, UIImageView;

@interface VUILibraryListItemView : UIView {

	VUILabel* _titleLabel;
	UIImage* _itemImage;
	UIImageView* _listImageView;

}

@property (nonatomic,retain) UIImageView * listImageView;              //@synthesize listImageView=_listImageView - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImage * itemImage;                      //@synthesize itemImage=_itemImage - In the implementation block
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setItemImage:(UIImage *)arg1 ;
-(UIImage *)itemImage;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(UIImageView *)listImageView;
-(void)setListImageView:(UIImageView *)arg1 ;
@end

