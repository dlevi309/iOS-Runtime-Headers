/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(NSArray *)constraints;
-(void)setPhoto:(UIImage *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(CNContact *)contact;
-(UIImage *)photo;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)prepareForReuse;
-(CNAvatarView *)avatarView;
-(void)setTitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIView *)containerView;
-(id)initWithCoder:(id)arg1 ;
-(UIImageView *)photoView;
-(UILabel *)descriptionLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

