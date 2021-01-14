/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UITableViewCell.h>

@class GKDashboardPlayerPhotoView, UILabel, NSLayoutConstraint;

@interface GKFriendListCell : UITableViewCell {

	GKDashboardPlayerPhotoView* _friendPhoto;
	UILabel* _friendName;
	UILabel* _friendLastPlayedGame;
	NSLayoutConstraint* _friendPhotoTopConstraint;
	NSLayoutConstraint* _friendNameTopConstraint;

}

@property (__weak) GKDashboardPlayerPhotoView * friendPhoto;                   //@synthesize friendPhoto=_friendPhoto - In the implementation block
@property (__weak) UILabel * friendName;                                       //@synthesize friendName=_friendName - In the implementation block
@property (__weak) UILabel * friendLastPlayedGame;                             //@synthesize friendLastPlayedGame=_friendLastPlayedGame - In the implementation block
@property (__weak) NSLayoutConstraint * friendPhotoTopConstraint;              //@synthesize friendPhotoTopConstraint=_friendPhotoTopConstraint - In the implementation block
@property (__weak) NSLayoutConstraint * friendNameTopConstraint;               //@synthesize friendNameTopConstraint=_friendNameTopConstraint - In the implementation block
-(void)setPlayer:(id)arg1 ;
-(void)prepareForReuse;
-(void)awakeFromNib;
-(UILabel *)friendName;
-(GKDashboardPlayerPhotoView *)friendPhoto;
-(UILabel *)friendLastPlayedGame;
-(NSLayoutConstraint *)friendPhotoTopConstraint;
-(NSLayoutConstraint *)friendNameTopConstraint;
-(void)setFriendPhoto:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setFriendName:(UILabel *)arg1 ;
-(void)setFriendLastPlayedGame:(UILabel *)arg1 ;
-(void)setFriendPhotoTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFriendNameTopConstraint:(NSLayoutConstraint *)arg1 ;
@end

