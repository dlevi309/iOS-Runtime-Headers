/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/GKPlayerAvatarViewDelegate.h>

@protocol GKAvatarContainerViewDelegate;
@class GKDashboardPlayerPhotoView, UILabel, UIView, GKGradientLabel, UIImageView, NSLayoutConstraint, UITapGestureRecognizer, NSString;

@interface GKAvatarContainerView : UIView <GKPlayerAvatarViewDelegate> {

	id<GKAvatarContainerViewDelegate> _delegate;
	GKDashboardPlayerPhotoView* _playerAvatarView;
	UILabel* _nicknameLabel;
	UILabel* _emailLabel;
	UIView* _imageContainer;
	GKGradientLabel* _editLabel;
	UIView* _editImage;
	UIImageView* _editImageBackground;
	NSLayoutConstraint* _imageContainerTopConstraint;
	UITapGestureRecognizer* _tapGesture;

}

@property (nonatomic,retain) UILabel * nicknameLabel;                                        //@synthesize nicknameLabel=_nicknameLabel - In the implementation block
@property (nonatomic,retain) UILabel * emailLabel;                                           //@synthesize emailLabel=_emailLabel - In the implementation block
@property (nonatomic,retain) UIView * imageContainer;                                        //@synthesize imageContainer=_imageContainer - In the implementation block
@property (nonatomic,retain) GKGradientLabel * editLabel;                                    //@synthesize editLabel=_editLabel - In the implementation block
@property (nonatomic,retain) UIView * editImage;                                             //@synthesize editImage=_editImage - In the implementation block
@property (nonatomic,retain) UIImageView * editImageBackground;                              //@synthesize editImageBackground=_editImageBackground - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageContainerTopConstraint;               //@synthesize imageContainerTopConstraint=_imageContainerTopConstraint - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                            //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<GKAvatarContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKDashboardPlayerPhotoView * playerAvatarView;                  //@synthesize playerAvatarView=_playerAvatarView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlayerAvatarView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id<GKAvatarContainerViewDelegate>)delegate;
-(GKGradientLabel *)editLabel;
-(void)updateAvatarEditingAvailability;
-(void)setupEditImageBackground;
-(UIImageView *)editImageBackground;
-(void)refreshHeaderViewProfileImage;
-(NSLayoutConstraint *)imageContainerTopConstraint;
-(void)setEmailLabel:(UILabel *)arg1 ;
-(void)setEditLabel:(GKGradientLabel *)arg1 ;
-(void)setEditImage:(UIView *)arg1 ;
-(void)setEditImageBackground:(UIImageView *)arg1 ;
-(void)setImageContainerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)didMoveToSuperview;
-(UIView *)imageContainer;
-(void)setImageContainer:(UIView *)arg1 ;
-(UITapGestureRecognizer *)tapGesture;
-(UIView *)editImage;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setDelegate:(id<GKAvatarContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)prepareForDefaultNicknameViewController;
-(void)refreshViewForLocalPlayer;
-(UILabel *)nicknameLabel;
-(void)setNicknameLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(void)didSetPlayerAvatarImage:(id)arg1 ;
-(UILabel *)emailLabel;
-(void)didSelectPlayerAvatarView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(GKDashboardPlayerPhotoView *)playerAvatarView;
@end

