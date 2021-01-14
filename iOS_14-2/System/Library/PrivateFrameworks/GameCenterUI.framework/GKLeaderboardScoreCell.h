/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol GKLeaderboardScoreActionDelegate;
@class GKLeaderboardEntry, GKDashboardPlayerPhotoView, NSLayoutConstraint, UILabel, UIView;

@interface GKLeaderboardScoreCell : UICollectionViewCell {

	BOOL _shouldShowContextMenu;
	BOOL _isLocalPlayerScore;
	GKLeaderboardEntry* _entry;
	id<GKLeaderboardScoreActionDelegate> _delegate;
	GKDashboardPlayerPhotoView* _playerView;
	NSLayoutConstraint* _playerViewHeightConstraint;
	UILabel* _rankLabel;
	UILabel* _nameLabel;
	UILabel* _scoreLabel;
	UIView* _topLine;
	UIView* _monogramColorView;
	UIView* _backView;

}

@property (nonatomic,retain) GKDashboardPlayerPhotoView * playerView;                           //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerViewHeightConstraint;                   //@synthesize playerViewHeightConstraint=_playerViewHeightConstraint - In the implementation block
@property (assign,nonatomic) BOOL isLocalPlayerScore;                                           //@synthesize isLocalPlayerScore=_isLocalPlayerScore - In the implementation block
@property (nonatomic,retain) UILabel * rankLabel;                                               //@synthesize rankLabel=_rankLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                               //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * scoreLabel;                                              //@synthesize scoreLabel=_scoreLabel - In the implementation block
@property (nonatomic,retain) UIView * topLine;                                                  //@synthesize topLine=_topLine - In the implementation block
@property (nonatomic,retain) UIView * monogramColorView;                                        //@synthesize monogramColorView=_monogramColorView - In the implementation block
@property (nonatomic,retain) UIView * backView;                                                 //@synthesize backView=_backView - In the implementation block
@property (nonatomic,retain) GKLeaderboardEntry * entry;                                        //@synthesize entry=_entry - In the implementation block
@property (assign,nonatomic) BOOL lineVisible; 
@property (assign,nonatomic,__weak) id<GKLeaderboardScoreActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowContextMenu;                                        //@synthesize shouldShowContextMenu=_shouldShowContextMenu - In the implementation block
+(id)lowRankNib;
+(id)highRankNib;
+(CGSize)defaultSize;
-(BOOL)canBecomeFocused;
-(id<GKLeaderboardScoreActionDelegate>)delegate;
-(UILabel *)scoreLabel;
-(UILabel *)rankLabel;
-(void)setupForLeaderboardEntry:(id)arg1 ;
-(void)setIsLocalPlayerScore:(BOOL)arg1 ;
-(BOOL)isLocalPlayerScore;
-(UIView *)monogramColorView;
-(void)setShouldShowContextMenu:(BOOL)arg1 ;
-(BOOL)lineVisible;
-(void)updateLayerMask:(id)arg1 ;
-(void)setLineVisible:(BOOL)arg1 ;
-(BOOL)shouldShowContextMenu;
-(NSLayoutConstraint *)playerViewHeightConstraint;
-(void)setPlayerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRankLabel:(UILabel *)arg1 ;
-(void)setScoreLabel:(UILabel *)arg1 ;
-(void)setTopLine:(UIView *)arg1 ;
-(void)setMonogramColorView:(UIView *)arg1 ;
-(UIView *)backView;
-(UIView *)topLine;
-(void)setSelected:(BOOL)arg1 ;
-(GKLeaderboardEntry *)entry;
-(GKDashboardPlayerPhotoView *)playerView;
-(void)setPlayerView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setDelegate:(id<GKLeaderboardScoreActionDelegate>)arg1 ;
-(void)setEntry:(GKLeaderboardEntry *)arg1 ;
-(void)awakeFromNib;
-(void)setBackView:(UIView *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

