/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>

@class NSLayoutConstraint, _UIActivityActionCellTitleLabel, UIImageView, UIView, _UIHostActivityProxy, UIVisualEffectView;

@interface UIActivityActionGroupCell : _UICollectionViewListCell {

	NSLayoutConstraint* _titleLabelHeightAnchor;
	unsigned long long _sequence;
	_UIActivityActionCellTitleLabel* _titleLabel;
	UIImageView* _activityImageView;
	UIView* _activitySlotView;
	UIView* _titleSlotView;
	UIView* _platterView;
	_UIHostActivityProxy* _activityProxy;
	UIVisualEffectView* _effectView;
	UIView* _fillView;

}

@property (nonatomic,retain) _UIActivityActionCellTitleLabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * activityImageView;                           //@synthesize activityImageView=_activityImageView - In the implementation block
@property (nonatomic,retain) UIView * activitySlotView;                                 //@synthesize activitySlotView=_activitySlotView - In the implementation block
@property (nonatomic,retain) UIView * titleSlotView;                                    //@synthesize titleSlotView=_titleSlotView - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                      //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                           //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) UIView * fillView;                                         //@synthesize fillView=_fillView - In the implementation block
@property (assign,nonatomic) unsigned long long sequence;                               //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,retain) _UIHostActivityProxy * activityProxy;                      //@synthesize activityProxy=_activityProxy - In the implementation block
-(_UIActivityActionCellTitleLabel *)titleLabel;
-(void)setTitleLabel:(_UIActivityActionCellTitleLabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(UIView *)fillView;
-(UIView *)platterView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setActivitySlotView:(UIView *)arg1 ;
-(void)setFillView:(UIView *)arg1 ;
-(void)setActivityImageView:(UIImageView *)arg1 ;
-(UIImageView *)activityImageView;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTitleSlotView:(UIView *)arg1 ;
-(UIView *)titleSlotView;
-(unsigned long long)sequence;
-(UIView *)activitySlotView;
-(void)setSequence:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

