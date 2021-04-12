/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_reloadHighlightState;
-(void)setDecorationImage:(UIImage *)arg1 ;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(UIImage *)decorationImage;
-(BOOL)showTopBorder;
-(BOOL)hasBlueBackgroundWhenSelected;
-(void)setHasBlueBackgroundWhenSelected:(BOOL)arg1 ;
@end

