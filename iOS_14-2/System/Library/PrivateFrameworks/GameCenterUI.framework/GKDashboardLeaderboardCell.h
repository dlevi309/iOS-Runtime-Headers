/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, GKLeaderboardSet, GKLeaderboard, UIImageView, UILabel, UIView, UIColor;

@interface GKDashboardLeaderboardCell : UICollectionViewCell {

	NSString* _bundleIdentifier;
	NSString* _imageName;
	GKLeaderboardSet* _leaderboardSet;
	GKLeaderboard* _leaderboard;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _countLabel;
	UIView* _overlayView;
	UIColor* _titleLabelColor;

}

@property (nonatomic,retain) UIImageView * iconView;                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                           //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor;                      //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * imageName;                           //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                    //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
-(UILabel *)titleLabel;
-(BOOL)canBecomeFocused;
-(UIView *)popoverSourceView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateImage;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(UILabel *)countLabel;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(UIColor *)titleLabelColor;
-(void)awakeFromNib;
-(void)updateRank;
-(GKLeaderboardSet *)leaderboardSet;
-(void)updateOverlay;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

