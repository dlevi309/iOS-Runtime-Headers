/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, PXPeopleScalableAvatarView, NSString;

@interface PXPeopleBootstrapHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXPeopleScalableAvatarView* _avatarView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PXPeopleScalableAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(PXPeopleScalableAvatarView *)avatarView;
-(UILabel *)subtitleLabel;
-(void)setAvatarView:(PXPeopleScalableAvatarView *)arg1 ;
-(void)setPerson:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

