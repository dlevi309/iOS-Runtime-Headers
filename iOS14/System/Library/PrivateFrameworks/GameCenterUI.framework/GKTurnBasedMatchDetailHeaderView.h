/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class GKTurnBasedMatch, NSString, UIButton, UILabel, GKLabel, GKDashboardPlayerPhotoView, NSArray;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView {

	GKTurnBasedMatch* _match;
	NSString* _infoText;
	id _actionTarget;
	SEL _actionSelector;
	UIButton* _actionButton;
	UILabel* _playingWithLabel;
	GKLabel* _startedLabel;
	GKLabel* _lastTurnLabel;
	GKLabel* _infoLabel;
	GKDashboardPlayerPhotoView* _avatarView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * playingWithLabel;                           //@synthesize playingWithLabel=_playingWithLabel - In the implementation block
@property (nonatomic,retain) GKLabel * startedLabel;                               //@synthesize startedLabel=_startedLabel - In the implementation block
@property (nonatomic,retain) GKLabel * lastTurnLabel;                              //@synthesize lastTurnLabel=_lastTurnLabel - In the implementation block
@property (nonatomic,retain) GKLabel * infoLabel;                                  //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerPhotoView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) NSString * playingWithString; 
@property (nonatomic,retain) NSArray * constraints;                                //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatch * match;                             //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSString * infoText;                                  //@synthesize infoText=_infoText - In the implementation block
@property (nonatomic,retain) NSString * actionText; 
@property (assign,nonatomic,__weak) id actionTarget;                               //@synthesize actionTarget=_actionTarget - In the implementation block
@property (assign,nonatomic) SEL actionSelector;                                   //@synthesize actionSelector=_actionSelector - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                              //@synthesize actionButton=_actionButton - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setInfoText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActionTarget:(id)arg1 ;
-(GKTurnBasedMatch *)match;
-(UILabel *)playingWithLabel;
-(void)setPlayingWithLabel:(UILabel *)arg1 ;
-(GKDashboardPlayerPhotoView *)avatarView;
-(void)actionPressed:(id)arg1 ;
-(NSString *)playingWithString;
-(GKLabel *)startedLabel;
-(void)setStartedLabel:(GKLabel *)arg1 ;
-(GKLabel *)lastTurnLabel;
-(void)setLastTurnLabel:(GKLabel *)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)setActionSelector:(SEL)arg1 ;
-(SEL)actionSelector;
-(NSString *)actionText;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(GKLabel *)infoLabel;
-(void)didUpdateModel;
-(void)setActionText:(NSString *)arg1 ;
-(void)setAvatarView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)establishConstraints;
-(NSString *)infoText;
-(void)setInfoLabel:(GKLabel *)arg1 ;
-(id)actionTarget;
-(void)setLabelAlpha:(double)arg1 ;
@end

