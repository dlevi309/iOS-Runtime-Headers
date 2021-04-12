/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthProfile.framework/HealthProfile
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, _TtC13HealthProfile19MeContactAvatarView;

@interface HealthProfile.ProfileContactCell : UITableViewCell {

	 nameLabel;
	 avatarView;
	 item;

}

@property (assign,__weak,nonatomic) UILabel * nameLabel; 
@property (assign,__weak,nonatomic) _TtC13HealthProfile19MeContactAvatarView * avatarView; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(_TtC13HealthProfile19MeContactAvatarView *)avatarView;
-(void)setAvatarView:(_TtC13HealthProfile19MeContactAvatarView *)arg1 ;
-(void)updateName;
@end

