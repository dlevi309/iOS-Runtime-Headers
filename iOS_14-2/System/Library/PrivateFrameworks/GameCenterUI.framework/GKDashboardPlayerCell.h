/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class GKPlayer, UIColor, GKDashboardPlayerShadowView, NSLayoutConstraint, UILabel, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell {

	BOOL _onDarkBackground;
	GKPlayer* _player;
	UIColor* _defaultContentBackgroundColor;
	GKDashboardPlayerShadowView* _playerView;
	NSLayoutConstraint* _playerViewBottomToNameLabelTopConstraint;
	UILabel* _nameLabel;
	UILabel* _statusLabel;
	UIColor* _nameColor;
	UIColor* _statusColor;
	double _playerViewBottomToNameLabelTopConstant;

}

@property (nonatomic,retain) UIColor * nameColor;                                                        //@synthesize nameColor=_nameColor - In the implementation block
@property (nonatomic,retain) UIColor * statusColor;                                                      //@synthesize statusColor=_statusColor - In the implementation block
@property (assign,nonatomic) double playerViewBottomToNameLabelTopConstant;                              //@synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                                          //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL onDarkBackground;                                                      //@synthesize onDarkBackground=_onDarkBackground - In the implementation block
@property (nonatomic,retain) UIColor * defaultContentBackgroundColor;                                    //@synthesize defaultContentBackgroundColor=_defaultContentBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
@property (assign,nonatomic) GKDashboardPlayerShadowView * playerView;                                   //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * playerViewBottomToNameLabelTopConstraint;              //@synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint - In the implementation block
@property (assign,nonatomic) UILabel * nameLabel;                                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (assign,nonatomic) UILabel * statusLabel;                                                      //@synthesize statusLabel=_statusLabel - In the implementation block
+(double)preferredCollectionHeight;
+(CGSize)defaultSize;
-(GKPlayer *)player;
-(BOOL)canBecomeFocused;
-(UIView *)popoverSourceView;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)setNameColor:(UIColor *)arg1 ;
-(void)setStatusColor:(UIColor *)arg1 ;
-(void)setPlayerViewBottomToNameLabelTopConstant:(double)arg1 ;
-(void)setDefaultContentBackgroundColor:(UIColor *)arg1 ;
-(void)setNameText:(id)arg1 ;
-(UIColor *)nameColor;
-(void)setSelected:(BOOL)arg1 ;
-(GKDashboardPlayerShadowView *)playerView;
-(UIColor *)defaultContentBackgroundColor;
-(void)setOnDarkBackground:(BOOL)arg1 ;
-(void)setStatusWithLastPlayedDate:(id)arg1 ;
-(void)updateLabelColorForDashboard;
-(BOOL)onDarkBackground;
-(NSLayoutConstraint *)playerViewBottomToNameLabelTopConstraint;
-(void)setPlayerViewBottomToNameLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(UIColor *)statusColor;
-(double)playerViewBottomToNameLabelTopConstant;
-(void)setPlayerView:(GKDashboardPlayerShadowView *)arg1 ;
-(void)awakeFromNib;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)setStatusText:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

