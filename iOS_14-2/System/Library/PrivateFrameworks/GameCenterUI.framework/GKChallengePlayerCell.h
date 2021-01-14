/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardPlayerCell.h>

@class UIImageView, UIView;

@interface GKChallengePlayerCell : GKDashboardPlayerCell {

	UIImageView* _chevronImageView;
	UIView* _seperatorLine;

}

@property (nonatomic,retain) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) UIView * seperatorLine;                      //@synthesize seperatorLine=_seperatorLine - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(UIView *)seperatorLine;
-(void)setSeperatorLine:(UIView *)arg1 ;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
@end

