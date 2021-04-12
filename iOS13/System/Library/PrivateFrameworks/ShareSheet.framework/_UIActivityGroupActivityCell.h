/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIActivityGroupActivityCellTitleLabel, UIImageView, UIView, _UIHostActivityProxy, CALayer;

@interface _UIActivityGroupActivityCell : UICollectionViewCell {

	unsigned long long _sequence;
	_UIActivityGroupActivityCellTitleLabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _imageSlot;
	UIView* _titleSlot;
	_UIHostActivityProxy* _activityProxy;
	UIView* _shadowView;
	UIImageView* _highlightedImageView;
	CALayer* _highlightLayer;

}

@property (nonatomic,retain) _UIActivityGroupActivityCellTitleLabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * imageSlot;                                               //@synthesize imageSlot=_imageSlot - In the implementation block
@property (nonatomic,retain) UIView * titleSlot;                                               //@synthesize titleSlot=_titleSlot - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                              //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;                               //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) CALayer * highlightLayer;                                         //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (assign,nonatomic) unsigned long long sequence;                                      //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,retain) _UIHostActivityProxy * activityProxy;                             //@synthesize activityProxy=_activityProxy - In the implementation block
+(CGSize)preferredSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2 titleLabelText:(id)arg3 screenScale:(double)arg4 ;
+(void)invalidatePreferredSizes;
-(void)setSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequence;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIActivityGroupActivityCellTitleLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(_UIActivityGroupActivityCellTitleLabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(CALayer *)highlightLayer;
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(UIView *)imageSlot;
-(void)setImageSlot:(UIView *)arg1 ;
-(id)draggingView;
-(void)setTitleSlot:(UIView *)arg1 ;
-(UIImageView *)highlightedImageView;
-(UIView *)titleSlot;
-(void)initHighlightLayerIfNeeded;
-(void)initHighlightedImageViewIfNeeded;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(void)updateHighlightedImageViewIfNeeded;
@end

