/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@class CNAvatarView, UIImageView, UIView, UILabel, NSArray, NSString, CNContact, UIImage;

@interface HUContactDetailsTableViewCell : UITableViewCell {

	CNAvatarView* _avatarView;
	UIImageView* _photoView;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSArray* _constraints;

}

@property (nonatomic,readonly) CNAvatarView * avatarView;               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UIImageView * photoView;                 //@synthesize photoView=_photoView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                     //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) UIImage * photo; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)constraints;
-(void)prepareForReuse;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(UILabel *)titleLabel;
-(UIView *)containerView;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(UIImageView *)photoView;
-(CNAvatarView *)avatarView;
@end

