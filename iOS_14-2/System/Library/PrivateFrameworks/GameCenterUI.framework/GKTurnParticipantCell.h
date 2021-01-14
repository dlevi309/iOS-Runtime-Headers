/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasePlayerCell.h>

@class GKTurnBasedMatch, GKTurnBasedParticipant, UIView, GKLabel, UIButton, UIImageView, UIStackView, NSLayoutConstraint, _TtC12GameCenterUI22OverlappingPlayersView, UILabel, NSArray, NSDictionary;

@interface GKTurnParticipantCell : GKBasePlayerCell {

	BOOL _isDetail;
	GKTurnBasedMatch* _match;
	GKTurnBasedParticipant* _participant;
	SEL _detailPressedAction;
	UIView* _divider;
	GKLabel* _bottomLabel;
	UIButton* _detailButton;
	UIImageView* _statusImageView;
	UIStackView* _textStackView;
	NSLayoutConstraint* _iconLeadingConstraint;
	NSLayoutConstraint* _textStackViewToSuperViewLeadingConstraint;
	NSLayoutConstraint* _textStackViewToIconViewLeadingConstraint;
	NSLayoutConstraint* _statusImageTrailingConstraint;
	NSLayoutConstraint* _textContainerTrailingConstraint;
	NSLayoutConstraint* _detailButtonConstraint;
	NSLayoutConstraint* _overlappingPlayersViewWidthConstraint;
	NSLayoutConstraint* _overlappingPlayersViewTrailingConstraint;
	_TtC12GameCenterUI22OverlappingPlayersView* _overlappingPlayersView;
	UIView* _overlappingPlayersViewContainer;
	UILabel* _additionalPlayerCountLabel;
	NSArray* _constraints;
	NSDictionary* _playerAvatarMapping;
	NSArray* _previousParticipants;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) GKLabel * bottomLabel;                                                            //@synthesize bottomLabel=_bottomLabel - In the implementation block
@property (nonatomic,retain) UIButton * detailButton;                                                          //@synthesize detailButton=_detailButton - In the implementation block
@property (nonatomic,retain) UIImageView * statusImageView;                                                    //@synthesize statusImageView=_statusImageView - In the implementation block
@property (nonatomic,retain) UIStackView * textStackView;                                                      //@synthesize textStackView=_textStackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconLeadingConstraint;                                       //@synthesize iconLeadingConstraint=_iconLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textStackViewToSuperViewLeadingConstraint;                   //@synthesize textStackViewToSuperViewLeadingConstraint=_textStackViewToSuperViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textStackViewToIconViewLeadingConstraint;                    //@synthesize textStackViewToIconViewLeadingConstraint=_textStackViewToIconViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusImageTrailingConstraint;                               //@synthesize statusImageTrailingConstraint=_statusImageTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textContainerTrailingConstraint;                             //@synthesize textContainerTrailingConstraint=_textContainerTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * detailButtonConstraint;                                      //@synthesize detailButtonConstraint=_detailButtonConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * overlappingPlayersViewWidthConstraint;                       //@synthesize overlappingPlayersViewWidthConstraint=_overlappingPlayersViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * overlappingPlayersViewTrailingConstraint;                    //@synthesize overlappingPlayersViewTrailingConstraint=_overlappingPlayersViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) _TtC12GameCenterUI22OverlappingPlayersView * overlappingPlayersView;              //@synthesize overlappingPlayersView=_overlappingPlayersView - In the implementation block
@property (nonatomic,retain) UIView * overlappingPlayersViewContainer;                                         //@synthesize overlappingPlayersViewContainer=_overlappingPlayersViewContainer - In the implementation block
@property (nonatomic,retain) UILabel * additionalPlayerCountLabel;                                             //@synthesize additionalPlayerCountLabel=_additionalPlayerCountLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSDictionary * playerAvatarMapping;                                               //@synthesize playerAvatarMapping=_playerAvatarMapping - In the implementation block
@property (nonatomic,retain) NSArray * previousParticipants;                                                   //@synthesize previousParticipants=_previousParticipants - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatch * match;                                                         //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) GKTurnBasedParticipant * participant;                                             //@synthesize participant=_participant - In the implementation block
@property (assign,nonatomic) SEL detailPressedAction;                                                          //@synthesize detailPressedAction=_detailPressedAction - In the implementation block
@property (assign,nonatomic) BOOL isDetail;                                                                    //@synthesize isDetail=_isDetail - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                                              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIView * divider;                                                                 //@synthesize divider=_divider - In the implementation block
+(double)defaultRowHeight;
+(void)registerCellClassesForCollectionView:(id)arg1 ;
+(id)itemHeightList;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)updateUIBasedOnTraitCollection;
-(id)initWithFrame:(CGRect)arg1 ;
-(GKTurnBasedMatch *)match;
-(void)setDetailButton:(UIButton *)arg1 ;
-(void)detailPressed:(id)arg1 ;
-(_TtC12GameCenterUI22OverlappingPlayersView *)overlappingPlayersView;
-(UIButton *)detailButton;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(double)getOverlappingPlayerAvatarIconSize;
-(NSLayoutConstraint *)overlappingPlayersViewTrailingConstraint;
-(void)setDetailButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setOverlappingPlayersViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setIconLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextStackViewToIconViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextContainerTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDivider:(UIView *)arg1 ;
-(UIStackView *)textStackView;
-(void)setOverlappingPlayersViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextStackViewToSuperViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateMarginConstraints;
-(void)configureForDetail;
-(void)configureForMatch;
-(NSLayoutConstraint *)textStackViewToIconViewLeadingConstraint;
-(NSLayoutConstraint *)textStackViewToSuperViewLeadingConstraint;
-(BOOL)matchWantsLocalPlayerAttention;
-(UILabel *)additionalPlayerCountLabel;
-(GKLabel *)bottomLabel;
-(void)setDetailPressedAction:(SEL)arg1 ;
-(SEL)detailPressedAction;
-(void)didUpdateModel;
-(void)configureOverlappingPlayersView;
-(id)getPlayerIDForAllNonAutomatchedTurnBasedParticipants;
-(NSDictionary *)playerAvatarMapping;
-(BOOL)needsRefreshOverlappingPlayersView;
-(void)setPlayerAvatarMapping:(NSDictionary *)arg1 ;
-(void)updateOverlappingPlayerViewsAvatar;
-(NSLayoutConstraint *)overlappingPlayersViewWidthConstraint;
-(void)setBottomLabel:(GKLabel *)arg1 ;
-(UIImageView *)statusImageView;
-(void)setTextStackView:(UIStackView *)arg1 ;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)iconLeadingConstraint;
-(NSLayoutConstraint *)statusImageTrailingConstraint;
-(void)setStatusImageTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textContainerTrailingConstraint;
-(NSLayoutConstraint *)detailButtonConstraint;
-(void)setOverlappingPlayersView:(_TtC12GameCenterUI22OverlappingPlayersView *)arg1 ;
-(UIView *)overlappingPlayersViewContainer;
-(void)setOverlappingPlayersViewContainer:(UIView *)arg1 ;
-(void)setAdditionalPlayerCountLabel:(UILabel *)arg1 ;
-(void)setParticipant:(GKTurnBasedParticipant *)arg1 ;
-(GKTurnBasedParticipant *)participant;
-(NSArray *)previousParticipants;
-(void)setPreviousParticipants:(NSArray *)arg1 ;
-(void)establishConstraints;
-(UIView *)divider;
-(void)setIsDetail:(BOOL)arg1 ;
-(BOOL)isDetail;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

