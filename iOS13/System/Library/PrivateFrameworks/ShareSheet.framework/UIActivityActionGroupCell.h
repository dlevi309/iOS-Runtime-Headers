/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, _UIActivityActionCellTitleLabel, UIImageView, UIView, _UIHostActivityProxy, UIVisualEffectView;

@interface UIActivityActionGroupCell : UICollectionViewCell {

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
-(void)setSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequence;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIActivityActionCellTitleLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleLabel:(_UIActivityActionCellTitleLabel *)arg1 ;
-(UIVisualEffectView *)effectView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setActivityImageView:(UIImageView *)arg1 ;
-(UIImageView *)activityImageView;
-(void)setActivityProxy:(_UIHostActivityProxy *)arg1 ;
-(_UIHostActivityProxy *)activityProxy;
-(void)setTitleSlotView:(UIView *)arg1 ;
-(UIView *)titleSlotView;
-(UIView *)activitySlotView;
-(void)setActivitySlotView:(UIView *)arg1 ;
-(void)setFillView:(UIView *)arg1 ;
-(UIView *)fillView;
@end

