/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.SmallLockupView : UIView {

	 headingLabel;
	 titleLabel;
	 subtitleLabel;
	 artworkView;
	 chevronView;
	 hasChevron;

}

@property (assign,nonatomic) UIEdgeInsets layoutMargins; 
@property (readonly,nonatomic) _TtC12GameCenterUI11ArtworkView * accessibilityArtworkView; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilitySubtitleLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilitySubtitleLabel;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityTitleLabel;
-(UIEdgeInsets)layoutMargins;
-(_TtC12GameCenterUI11ArtworkView *)accessibilityArtworkView;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

