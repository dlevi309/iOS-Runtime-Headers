/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXSharedAlbumInvitationViewDelegate, PLCloudSharedAlbumProtocol;
@class PXFeedInvitationSectionInfo, PXRoundedCornerOverlayView, UIImageView, UILabel, PXCapsuleButton, NSString;

@interface PXSharedAlbumInvitationView : UIView <PXSettingsKeyObserver> {

	BOOL _useInPopover;
	id<PXSharedAlbumInvitationViewDelegate> _delegate;
	PXFeedInvitationSectionInfo* _invitationSectionInfo;
	double _cornerRadius;
	PXRoundedCornerOverlayView* _roundedCornerOverlayView;
	unsigned long long _avatarImageTag;
	UIImageView* _avatarView;
	UILabel* _infoLabel;
	UILabel* _albumTitleLabel;
	UILabel* _subscriberInfoLabel;
	PXCapsuleButton* _acceptButton;
	PXCapsuleButton* _declineButton;
	UILabel* _reportJunkLabel;
	id<PLCloudSharedAlbumProtocol> _sharedAlbum;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) PXRoundedCornerOverlayView * roundedCornerOverlayView;                //@synthesize roundedCornerOverlayView=_roundedCornerOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long avatarImageTag;                                    //@synthesize avatarImageTag=_avatarImageTag - In the implementation block
@property (nonatomic,retain) UIImageView * avatarView;                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                                  //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * albumTitleLabel;                                            //@synthesize albumTitleLabel=_albumTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subscriberInfoLabel;                                        //@synthesize subscriberInfoLabel=_subscriberInfoLabel - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * acceptButton;                                       //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) PXCapsuleButton * declineButton;                                      //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) UILabel * reportJunkLabel;                                            //@synthesize reportJunkLabel=_reportJunkLabel - In the implementation block
@property (nonatomic,retain) id<PLCloudSharedAlbumProtocol> sharedAlbum;                           //@synthesize sharedAlbum=_sharedAlbum - In the implementation block
@property (assign,nonatomic,__weak) id<PXSharedAlbumInvitationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXFeedInvitationSectionInfo * invitationSectionInfo;                  //@synthesize invitationSectionInfo=_invitationSectionInfo - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                  //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL useInPopover;                                                    //@synthesize useInPopover=_useInPopover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)preloadResources;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)_updateColors;
-(void)setSharedAlbum:(id<PLCloudSharedAlbumProtocol>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXSharedAlbumInvitationViewDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(PXRoundedCornerOverlayView *)roundedCornerOverlayView;
-(UIImageView *)avatarView;
-(double)cornerRadius;
-(void)setDelegate:(id<PXSharedAlbumInvitationViewDelegate>)arg1 ;
-(void)setRoundedCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)infoLabel;
-(void)_updateUI;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setInvitationSectionInfo:(PXFeedInvitationSectionInfo *)arg1 ;
-(void)_reportJunk;
-(void)setUseInPopover:(BOOL)arg1 ;
-(PXFeedInvitationSectionInfo *)invitationSectionInfo;
-(BOOL)useInPopover;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(PXCapsuleButton *)acceptButton;
-(id)_parentViewBackgroundColor;
-(id)_declineButtonColor;
-(void)_updateAvatarImage:(unsigned long long)arg1 ;
-(void)_updateRoundedCornerOverlayView;
-(id)_roundedCornerViewBackgroundColor;
-(void)_handlePersonImage:(id)arg1 imageTag:(unsigned long long)arg2 ;
-(void)_updateInfoLabel;
-(void)_updateAlbumTitleLabel;
-(void)_updateSubscriberInfoLabel;
-(void)_updateReportJunkLabel;
-(void)_enableUserInteractions:(BOOL)arg1 ;
-(void)_presentToastWithTitle:(id)arg1 ;
-(unsigned long long)avatarImageTag;
-(void)_acceptButtonTapped:(id)arg1 ;
-(void)_declineButtonTapped:(id)arg1 ;
-(void)_reportJunkLabelTapped:(id)arg1 ;
-(void)setAvatarImageTag:(unsigned long long)arg1 ;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(UILabel *)albumTitleLabel;
-(void)setAlbumTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subscriberInfoLabel;
-(void)setSubscriberInfoLabel:(UILabel *)arg1 ;
-(void)setAcceptButton:(PXCapsuleButton *)arg1 ;
-(PXCapsuleButton *)declineButton;
-(void)setDeclineButton:(PXCapsuleButton *)arg1 ;
-(UILabel *)reportJunkLabel;
-(void)setReportJunkLabel:(UILabel *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 buttonColor:(id)arg3 titleColor:(id)arg4 ;
-(void)dealloc;
-(void)_showOutOfNetworkInvitationMessageForSharedAlbum:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<PLCloudSharedAlbumProtocol>)sharedAlbum;
@end

