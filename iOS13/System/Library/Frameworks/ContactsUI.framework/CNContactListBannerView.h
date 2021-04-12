/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDragInteractionDelegate.h>

@protocol CNContactListBannerViewDelegate;
@class CNContactListStyleApplier, UIView, CNContactStore, CNContactFormatter, CNContact, UIGestureRecognizer, UILabel, NSLayoutConstraint, NSArray, UIDragInteraction, NSString;

@interface CNContactListBannerView : UIView <UIDragInteractionDelegate> {

	id<CNContactListBannerViewDelegate> _delegate;
	CNContactListStyleApplier* _contactListStyleApplier;
	UIView* _bottomSeparator;
	CNContactStore* _contactStore;
	CNContactFormatter* _formatter;
	CNContact* _meContact;
	UIGestureRecognizer* _longPress;
	UIView* _avatarView;
	UIView* _avatarViewContainer;
	UILabel* _titleLabel;
	UIView* _footnoteContainer;
	UILabel* _footnoteLabel;
	UILabel* _footnoteValueLabel;
	NSLayoutConstraint* _footnoteTitleToTitleVerticalConstraint;
	NSLayoutConstraint* _footnoteTitleToValueHorizontalSpaceConstraint;
	NSArray* _constraintsPendingActivation;
	UIDragInteraction* _dragInteraction;

}

@property (nonatomic,readonly) CNContactFormatter * formatter;                                                //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) CNContact * meContact;                                                           //@synthesize meContact=_meContact - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * longPress;                                               //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UIView * avatarViewContainer;                                                  //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIView * footnoteContainer;                                                    //@synthesize footnoteContainer=_footnoteContainer - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;                                                       //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteValueLabel;                                                  //@synthesize footnoteValueLabel=_footnoteValueLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToTitleVerticalConstraint;                     //@synthesize footnoteTitleToTitleVerticalConstraint=_footnoteTitleToTitleVerticalConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * footnoteTitleToValueHorizontalSpaceConstraint;              //@synthesize footnoteTitleToValueHorizontalSpaceConstraint=_footnoteTitleToValueHorizontalSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSArray * constraintsPendingActivation;                                          //@synthesize constraintsPendingActivation=_constraintsPendingActivation - In the implementation block
@property (nonatomic,retain) UIDragInteraction * dragInteraction;                                             //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactListBannerViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                             //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (nonatomic,readonly) UIView * bottomSeparator;                                                      //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id)init;
-(void)dealloc;
-(id<CNContactListBannerViewDelegate>)delegate;
-(void)setDelegate:(id<CNContactListBannerViewDelegate>)arg1 ;
-(CNContactFormatter *)formatter;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(UILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)copy:(id)arg1 ;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(UIDragInteraction *)dragInteraction;
-(UIGestureRecognizer *)longPress;
-(void)showMenu;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContact *)meContact;
-(UILabel *)footnoteLabel;
-(void)applyStyle;
-(UIView *)avatarView;
-(void)setAvatarView:(UIView *)arg1 ;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(void)activatePendingConstraints;
-(void)updateFontRelatedConstraints;
-(BOOL)displaysContactInfo;
-(void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3 ;
-(void)configureDragInteraction;
-(void)menuDidHide:(id)arg1 ;
-(void)cellWasLongPressed:(id)arg1 ;
-(void)cellWasSingleTapped:(id)arg1 ;
-(UIView *)bottomSeparator;
-(UIView *)avatarViewContainer;
-(UIView *)footnoteContainer;
-(UILabel *)footnoteValueLabel;
-(NSLayoutConstraint *)footnoteTitleToTitleVerticalConstraint;
-(void)setFootnoteTitleToTitleVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)footnoteTitleToValueHorizontalSpaceConstraint;
-(void)setFootnoteTitleToValueHorizontalSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)constraintsPendingActivation;
-(void)setConstraintsPendingActivation:(NSArray *)arg1 ;
@end

