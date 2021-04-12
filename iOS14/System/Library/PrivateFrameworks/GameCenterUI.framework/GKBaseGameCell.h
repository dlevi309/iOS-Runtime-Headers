/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UIImageView, UILabel, GKGame, GKGameRecord;

@interface GKBaseGameCell : GKCollectionViewCell {

	UIImageView* _iconView;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) UIImageView * iconView;                 //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (nonatomic,retain) GKGameRecord * gameRecord; 
+(double)defaultRowHeight;
+(id)itemHeightList;
-(GKGame *)game;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(void)didUpdateModel;
-(void)setGame:(GKGame *)arg1 ;
-(CGRect)alignmentRectForText;
-(void)setRepresentedItem:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

