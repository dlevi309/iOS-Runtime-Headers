/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNActionsViewProtocol.h>

@class NSString, CNGroupIdentity, CNContact, CNContactFormatter, CNGroupIdentityInlineActionsViewConfiguration, UIView, CNGroupAvatarViewController, UILabel, CNActionsView;

@interface CNSyndicationViewController : UIViewController <CNActionsViewProtocol> {

	NSString* _subtitleText;
	CNGroupIdentity* _group;
	CNContact* _senderContact;
	CNContactFormatter* _contactFormatter;
	CNGroupIdentityInlineActionsViewConfiguration* _actionsViewConfiguration;
	UIView* _nameContainerView;
	CNGroupAvatarViewController* _groupAvatarViewController;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	CNActionsView* _actionsView;
	UIView* _actionsContainerView;

}

@property (nonatomic,retain) CNGroupIdentity * group;                                                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNContact * senderContact;                                                               //@synthesize senderContact=_senderContact - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                                   //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,readonly) CNGroupIdentityInlineActionsViewConfiguration * actionsViewConfiguration;              //@synthesize actionsViewConfiguration=_actionsViewConfiguration - In the implementation block
@property (nonatomic,retain) UIView * nameContainerView;                                                              //@synthesize nameContainerView=_nameContainerView - In the implementation block
@property (nonatomic,retain) CNGroupAvatarViewController * groupAvatarViewController;                                 //@synthesize groupAvatarViewController=_groupAvatarViewController - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) CNActionsView * actionsView;                                                             //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,retain) UIView * actionsContainerView;                                                           //@synthesize actionsContainerView=_actionsContainerView - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                                                   //@synthesize subtitleText=_subtitleText - In the implementation block
+(id)descriptorForRequiredKeys;
-(UILabel *)titleLabel;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(CNGroupIdentity *)group;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)setupNameViews;
-(UILabel *)subtitleLabel;
-(void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3 ;
-(id)subtitleTextForSenderContact:(id)arg1 ;
-(id)initWithGroup:(id)arg1 senderContact:(id)arg2 actionsViewConfiguration:(id)arg3 ;
-(void)setupContainerViews;
-(void)setupActionViews;
-(CNContact *)senderContact;
-(void)setSenderContact:(CNContact *)arg1 ;
-(CNGroupIdentityInlineActionsViewConfiguration *)actionsViewConfiguration;
-(UIView *)nameContainerView;
-(void)setNameContainerView:(UIView *)arg1 ;
-(CNGroupAvatarViewController *)groupAvatarViewController;
-(void)setGroupAvatarViewController:(CNGroupAvatarViewController *)arg1 ;
-(UIView *)actionsContainerView;
-(void)setActionsContainerView:(UIView *)arg1 ;
-(void)setActionsView:(CNActionsView *)arg1 ;
-(CNActionsView *)actionsView;
-(void)viewDidLoad;
@end

