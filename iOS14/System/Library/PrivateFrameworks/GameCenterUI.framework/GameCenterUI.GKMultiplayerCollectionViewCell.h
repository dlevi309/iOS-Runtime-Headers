/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _TtC12GameCenterUI16DynamicTypeLabel, _TtC12GameCenterUI23GKMultiplayerStatusView, UIButton;

@interface GameCenterUI.GKMultiplayerCollectionViewCell : UICollectionViewCell {

	 avatarView;
	 silhouetteView;
	 shouldDisplaySilhouette;
	 nameLabel;
	 subtitleLabel;
	 displaysMessagesIcon;
	 messagesIconView;
	 statusAccessoryView;
	 statusButtonView;
	 tapHandler;
	 layoutMode;

}

@property (copy,nonatomic) id tapHandler; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityNameLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilitySubtitleLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI23GKMultiplayerStatusView * accessibilityStatusAccessoryView; 
@property (readonly,nonatomic) UIButton * accessibilityStatusButtonView; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)tapHandler;
-(void)didTapAddButton:(id)arg1 ;
-(void)didTapRemoveButton:(id)arg1 ;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityNameLabel;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilitySubtitleLabel;
-(_TtC12GameCenterUI23GKMultiplayerStatusView *)accessibilityStatusAccessoryView;
-(UIButton *)accessibilityStatusButtonView;
-(void)prepareForReuse;
-(void)setTapHandler:(id)arg1 ;
-(void)layoutSubviews;
-(void)applyWithParticipant:(id)arg1 number:(long long)arg2 isRemovingEnabled:(BOOL)arg3 isInvitingEnabled:(BOOL)arg4 layoutMode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
@end

