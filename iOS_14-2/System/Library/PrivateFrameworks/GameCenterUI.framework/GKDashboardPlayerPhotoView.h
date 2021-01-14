/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNAvatarViewControllerDelegate.h>

@protocol GKPlayerAvatarViewDelegate;
@class GKPlayer, NSObject, CNAvatarViewController, UIImageView;

@interface GKDashboardPlayerPhotoView : UIView <CNAvatarViewControllerDelegate> {

	BOOL _useDarkerPlaceholder;
	BOOL _usingPlaceholder;
	BOOL _selected;
	GKPlayer* _player;
	NSObject*<GKPlayerAvatarViewDelegate> _delegate;
	long long _avatarSize;
	CNAvatarViewController* _avatarViewController;
	UIImageView* _avatarImageView;

}

@property (nonatomic,retain) CNAvatarViewController * avatarViewController;                      //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) UIImageView * avatarImageView;                                      //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                                  //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL useDarkerPlaceholder;                                          //@synthesize useDarkerPlaceholder=_useDarkerPlaceholder - In the implementation block
@property (assign,getter=isUsingPlaceholder,nonatomic) BOOL usingPlaceholder;                    //@synthesize usingPlaceholder=_usingPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) BOOL selected;                                                      //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKPlayerAvatarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long avatarSize;                                               //@synthesize avatarSize=_avatarSize - In the implementation block
-(GKPlayer *)player;
-(void)didUpdateContentForAvatarViewController:(id)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<GKPlayerAvatarViewDelegate>)delegate;
-(BOOL)hasImage;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(long long)avatarSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)selected;
-(void)commonInit;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(NSObject*<GKPlayerAvatarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setAvatarSize:(long long)arg1 ;
-(UIImageView *)avatarImageView;
-(void)setAvatarImageView:(UIImageView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setContactOnAvatarViewController:(id)arg1 ;
-(void)invalidatePhoto;
-(BOOL)useDarkerPlaceholder;
-(void)setUseDarkerPlaceholder:(BOOL)arg1 ;
-(BOOL)isUsingPlaceholder;
-(void)setUsingPlaceholder:(BOOL)arg1 ;
@end

