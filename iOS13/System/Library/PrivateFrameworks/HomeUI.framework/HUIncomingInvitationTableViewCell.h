/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HUIncomingInvitationTableViewCellDelegate;
@class HMIncomingHomeInvitation, CNContact, CNAvatarView, UIView, UILabel, HUPillButton, UIActivityIndicatorView;

@interface HUIncomingInvitationTableViewCell : UITableViewCell {

	BOOL _showSpinner;
	HMIncomingHomeInvitation* _invitation;
	id<HUIncomingInvitationTableViewCellDelegate> _delegate;
	CNContact* _contact;
	CNAvatarView* _avatarView;
	UIView* _containerView;
	UILabel* _homeNameLabel;
	UILabel* _infoLabel;
	HUPillButton* _declineButton;
	HUPillButton* _acceptButton;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) CNContact * contact;                                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                                  //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                     //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * homeNameLabel;                                                    //@synthesize homeNameLabel=_homeNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                        //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) HUPillButton * declineButton;                                               //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) HUPillButton * acceptButton;                                                //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                          //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) HMIncomingHomeInvitation * invitation;                                      //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                                           //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic,__weak) id<HUIncomingInvitationTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_formatDate:(id)arg1 ;
-(id<HUIncomingInvitationTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<HUIncomingInvitationTableViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(UILabel *)infoLabel;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(HMIncomingHomeInvitation *)invitation;
-(void)setInvitation:(HMIncomingHomeInvitation *)arg1 ;
-(HUPillButton *)acceptButton;
-(void)setAcceptButton:(HUPillButton *)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(HUPillButton *)declineButton;
-(void)setDeclineButton:(HUPillButton *)arg1 ;
-(void)declineButtonPressed:(id)arg1 ;
-(void)acceptButtonPressed:(id)arg1 ;
-(UILabel *)homeNameLabel;
-(void)_showInvitationSpinner;
-(void)_hideInvitationSpinner;
-(void)setHomeNameLabel:(UILabel *)arg1 ;
@end

