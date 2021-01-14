/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsCell.h>

@protocol CKDetailsContactsTableViewCellDelegate;
@class CKAvatarView, CKLabel, UILabel, NSString, UIButton, CNContact, UIActivityIndicatorView;

@interface CKDetailsContactsTableViewCell : CKDetailsCell {

	BOOL _showsLocation;
	BOOL _showMessageButton;
	BOOL _showPhoneButton;
	BOOL _showFaceTimeVideoButton;
	BOOL _showInfoButton;
	BOOL _showScreenSharingButton;
	CKAvatarView* _contactAvatarView;
	id<CKDetailsContactsTableViewCellDelegate> _delegate;
	CKLabel* _nameLabel;
	UILabel* _locationLabel;
	NSString* _entityName;
	NSString* _locationString;
	UIButton* _messageButton;
	UIButton* _phoneButton;
	UIButton* _facetimeVideoButton;
	UIButton* _screenSharingButton;
	CNContact* _contact;
	UIActivityIndicatorView* _updatingParticipantSpinner;

}

@property (nonatomic,retain) CKLabel * nameLabel;                                                     //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                                 //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) CKAvatarView * contactAvatarView;                                        //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,copy) NSString * entityName;                                                     //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,copy) NSString * locationString;                                                 //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL showsLocation;                                                      //@synthesize showsLocation=_showsLocation - In the implementation block
@property (assign,nonatomic) BOOL showMessageButton;                                                  //@synthesize showMessageButton=_showMessageButton - In the implementation block
@property (assign,nonatomic) BOOL showPhoneButton;                                                    //@synthesize showPhoneButton=_showPhoneButton - In the implementation block
@property (assign,nonatomic) BOOL showFaceTimeVideoButton;                                            //@synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton - In the implementation block
@property (assign,nonatomic) BOOL showInfoButton;                                                     //@synthesize showInfoButton=_showInfoButton - In the implementation block
@property (assign,nonatomic) BOOL showScreenSharingButton;                                            //@synthesize showScreenSharingButton=_showScreenSharingButton - In the implementation block
@property (nonatomic,retain) UIButton * messageButton;                                                //@synthesize messageButton=_messageButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneButton;                                                  //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) UIButton * facetimeVideoButton;                                          //@synthesize facetimeVideoButton=_facetimeVideoButton - In the implementation block
@property (nonatomic,retain) UIButton * screenSharingButton;                                          //@synthesize screenSharingButton=_screenSharingButton - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                     //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * updatingParticipantSpinner;                    //@synthesize updatingParticipantSpinner=_updatingParticipantSpinner - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsContactsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)cellClass;
+(double)estimatedHeight;
+(double)preferredHeight;
+(id)reuseIdentifier;
+(double)marginWidth;
-(NSString *)entityName;
-(CNContact *)contact;
-(void)configureWithViewModel:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CKAvatarView *)contactAvatarView;
-(void)_updateVisibleButtons;
-(void)_hideAllButtons;
-(NSString *)locationString;
-(id<CKDetailsContactsTableViewCellDelegate>)delegate;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(void)setDelegate:(id<CKDetailsContactsTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didHoverOverCell:(id)arg1 ;
-(UIButton *)phoneButton;
-(UIButton *)messageButton;
-(void)setPhoneButton:(UIButton *)arg1 ;
-(BOOL)showPhoneButton;
-(void)setMessageButton:(UIButton *)arg1 ;
-(void)setFacetimeVideoButton:(UIButton *)arg1 ;
-(void)setScreenSharingButton:(UIButton *)arg1 ;
-(UIButton *)facetimeVideoButton;
-(UIButton *)screenSharingButton;
-(void)setShowPhoneButton:(BOOL)arg1 ;
-(void)setContactAvatarView:(CKAvatarView *)arg1 ;
-(void)_configureButtonLayer:(id)arg1 ;
-(void)setShowFaceTimeVideoButton:(BOOL)arg1 ;
-(void)setShowMessageButton:(BOOL)arg1 ;
-(void)setShowScreenSharingButton:(BOOL)arg1 ;
-(void)_handleCommunicationAction:(id)arg1 ;
-(void)_showUpdatingParticipantSpinner;
-(void)setShowInfoButton:(BOOL)arg1 ;
-(void)_dismissUpdatingParticipantSpinner;
-(UIActivityIndicatorView *)updatingParticipantSpinner;
-(void)setUpdatingParticipantSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)showInfoButton;
-(BOOL)showMessageButton;
-(BOOL)showFaceTimeVideoButton;
-(BOOL)showScreenSharingButton;
-(BOOL)showsLocation;
-(void)setShowsLocation:(BOOL)arg1 ;
-(CKLabel *)nameLabel;
-(UILabel *)locationLabel;
-(void)setNameLabel:(CKLabel *)arg1 ;
-(id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3 ;
-(id)_imageNamed:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

