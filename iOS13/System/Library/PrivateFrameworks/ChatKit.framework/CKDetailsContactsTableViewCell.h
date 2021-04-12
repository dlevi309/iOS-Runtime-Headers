/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	CKAvatarView* _contactAvatarView;
	id<CKDetailsContactsTableViewCellDelegate> _delegate;
	CKLabel* _nameLabel;
	UILabel* _locationLabel;
	NSString* _entityName;
	NSString* _locationString;
	UIButton* _messageButton;
	UIButton* _phoneButton;
	UIButton* _facetimeVideoButton;
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
@property (nonatomic,retain) UIButton * messageButton;                                                //@synthesize messageButton=_messageButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneButton;                                                  //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) UIButton * facetimeVideoButton;                                          //@synthesize facetimeVideoButton=_facetimeVideoButton - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                     //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * updatingParticipantSpinner;                    //@synthesize updatingParticipantSpinner=_updatingParticipantSpinner - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsContactsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)preferredHeight;
+(id)reuseIdentifier;
+(double)marginWidth;
+(Class)cellClass;
+(double)estimatedHeight;
-(id<CKDetailsContactsTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<CKDetailsContactsTableViewCellDelegate>)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)entityName;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(CKLabel *)arg1 ;
-(CKLabel *)nameLabel;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setContactAvatarView:(CKAvatarView *)arg1 ;
-(CKAvatarView *)contactAvatarView;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(BOOL)showsLocation;
-(void)configureWithViewModel:(id)arg1 ;
-(void)setMessageButton:(UIButton *)arg1 ;
-(void)setPhoneButton:(UIButton *)arg1 ;
-(void)setFacetimeVideoButton:(UIButton *)arg1 ;
-(UIButton *)messageButton;
-(UIButton *)phoneButton;
-(UIButton *)facetimeVideoButton;
-(id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3 ;
-(void)_configureButtonLayer:(id)arg1 ;
-(void)_updateVisibleButtons;
-(void)setShowFaceTimeVideoButton:(BOOL)arg1 ;
-(void)setShowMessageButton:(BOOL)arg1 ;
-(void)setShowPhoneButton:(BOOL)arg1 ;
-(void)_handleCommunicationAction:(id)arg1 ;
-(void)_showUpdatingParticipantSpinner;
-(void)_dismissUpdatingParticipantSpinner;
-(UIActivityIndicatorView *)updatingParticipantSpinner;
-(void)setUpdatingParticipantSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setShowInfoButton:(BOOL)arg1 ;
-(BOOL)showMessageButton;
-(BOOL)showPhoneButton;
-(BOOL)showFaceTimeVideoButton;
-(BOOL)showInfoButton;
@end

