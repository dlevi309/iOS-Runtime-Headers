/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol CNGroupIdentityHeaderViewControllerDelegate;
@class NSString, CNGroupIdentity, CNGroupIdentityInlineActionsViewConfiguration, UILabel, UIFont, UIButton, NSLayoutConstraint, CNGroupAvatarViewController, CNGroupIdentityInlineActionsViewController, CNContactFormatter;

@interface CNGroupIdentityHeaderViewController : UIViewController {

	NSString* _actionButtonTitle;
	id<CNGroupIdentityHeaderViewControllerDelegate> _delegate;
	CNGroupIdentity* _group;
	CNGroupIdentityInlineActionsViewConfiguration* _actionsViewConfiguration;
	UILabel* _titleLabel;
	UIFont* _titleLabelFont;
	UIFont* _titleLabelWrappedFont;
	UIButton* _actionButton;
	NSLayoutConstraint* _actionButtonHeightConstraint;
	double _actionsViewTopMargin;
	CNGroupAvatarViewController* _groupAvatarViewController;
	CNGroupIdentityInlineActionsViewController* _actionsViewController;
	CNContactFormatter* _contactFormatter;
	CGSize _previousSize;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIFont * titleLabelFont;                                                                 //@synthesize titleLabelFont=_titleLabelFont - In the implementation block
@property (nonatomic,retain) UIFont * titleLabelWrappedFont;                                                          //@synthesize titleLabelWrappedFont=_titleLabelWrappedFont - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                                                 //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * actionButtonHeightConstraint;                                       //@synthesize actionButtonHeightConstraint=_actionButtonHeightConstraint - In the implementation block
@property (assign,nonatomic) double actionsViewTopMargin;                                                             //@synthesize actionsViewTopMargin=_actionsViewTopMargin - In the implementation block
@property (nonatomic,retain) CNGroupAvatarViewController * groupAvatarViewController;                                 //@synthesize groupAvatarViewController=_groupAvatarViewController - In the implementation block
@property (nonatomic,retain) CNGroupIdentityInlineActionsViewController * actionsViewController;                      //@synthesize actionsViewController=_actionsViewController - In the implementation block
@property (nonatomic,retain) CNGroupIdentity * group;                                                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                                   //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (assign,nonatomic) CGSize previousSize;                                                                     //@synthesize previousSize=_previousSize - In the implementation block
@property (nonatomic,retain) NSString * actionButtonTitle;                                                            //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (assign,nonatomic,__weak) id<CNGroupIdentityHeaderViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNGroupIdentityInlineActionsViewConfiguration * actionsViewConfiguration;              //@synthesize actionsViewConfiguration=_actionsViewConfiguration - In the implementation block
+(id)descriptorForRequiredKeys;
-(UILabel *)titleLabel;
-(void)setGroup:(CNGroupIdentity *)arg1 ;
-(CNGroupIdentity *)group;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(id<CNGroupIdentityHeaderViewControllerDelegate>)delegate;
-(CGSize)previousSize;
-(void)setPreviousSize:(CGSize)arg1 ;
-(void)setDelegate:(id<CNGroupIdentityHeaderViewControllerDelegate>)arg1 ;
-(CNGroupIdentityInlineActionsViewConfiguration *)actionsViewConfiguration;
-(CNGroupAvatarViewController *)groupAvatarViewController;
-(void)setGroupAvatarViewController:(CNGroupAvatarViewController *)arg1 ;
-(UIButton *)actionButton;
-(id)initWithGroupIdentity:(id)arg1 ;
-(id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2 ;
-(void)setupAvatarView;
-(void)setupTitleLabel;
-(id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2 avatarViewControllerSettings:(id)arg3 ;
-(UIFont *)titleLabelWrappedFont;
-(void)setupActionButton;
-(void)setupActionsView;
-(void)setupEmptyActionsView;
-(void)setupPopulatedActionsView;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(void)updateActionButton;
-(void)updateTitleLabel;
-(void)updateTitleLabelFont;
-(void)groupIdentityDidUpdate:(id)arg1 ;
-(void)didTapActionButton;
-(id)viewForActionAtIndex:(unsigned long long)arg1 ;
-(CGSize)sizeForLayoutInContainerSize:(CGSize)arg1 ;
-(id)displayNameForGroupIdentity;
-(void)viewDidLoad;
-(NSString *)actionButtonTitle;
-(void)setTitleLabelFont:(UIFont *)arg1 ;
-(void)setTitleLabelWrappedFont:(UIFont *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)actionButtonHeightConstraint;
-(void)setActionButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)actionsViewTopMargin;
-(void)setActionsViewTopMargin:(double)arg1 ;
-(CNGroupIdentityInlineActionsViewController *)actionsViewController;
-(void)setActionsViewController:(CNGroupIdentityInlineActionsViewController *)arg1 ;
-(UIFont *)titleLabelFont;
-(void)viewDidLayoutSubviews;
@end

