/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIView, UIImageView, UIImage, NSString;

@interface SKUIBrowseItemCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _borderView;
	UIView* _topBorderView;
	UIImageView* _decorationImageView;
	UIImage* _decorationImage;
	BOOL _showTopBorder;
	BOOL _hasBlueBackgroundWhenSelected;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIImage * decorationImage;                       //@synthesize decorationImage=_decorationImage - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                              //@synthesize showTopBorder=_showTopBorder - In the implementation block
@property (assign,nonatomic) BOOL hasBlueBackgroundWhenSelected;              //@synthesize hasBlueBackgroundWhenSelected=_hasBlueBackgroundWhenSelected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)showTopBorder;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_reloadHighlightState;
-(void)setDecorationImage:(UIImage *)arg1 ;
-(UIImage *)decorationImage;
-(BOOL)hasBlueBackgroundWhenSelected;
-(void)setHasBlueBackgroundWhenSelected:(BOOL)arg1 ;
@end

