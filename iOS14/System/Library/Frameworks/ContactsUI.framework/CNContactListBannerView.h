/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIDragInteractionDelegate.h>

@protocol CNContactListBannerViewDelegate;
@class CNContactListStyleApplier, UIView, CNContactStore, CNContactFormatter, CNContact, UIGestureRecognizer, UILabel, CALayer, NSLayoutConstraint, NSArray, UIDragInteraction, NSString;

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
	CALayer* _topSeparator;
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
@property (nonatomic,readonly) CALayer * topSeparator;                                                        //@synthesize topSeparator=_topSeparator - In the implementation block
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
-(void)setContactStore:(CNContactStore *)arg1 ;
-(UILabel *)titleLabel;
-(void)copy:(id)arg1 ;
-(UIGestureRecognizer *)longPress;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(void)setMeContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)meContact;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CNContactFormatter *)formatter;
-(void)applyStyle;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(id)init;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(UIDragInteraction *)dragInteraction;
-(id<CNContactListBannerViewDelegate>)delegate;
-(void)activatePendingConstraints;
-(UIView *)avatarView;
-(BOOL)displaysContactInfo;
-(UILabel *)footnoteLabel;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CNContactListBannerViewDelegate>)arg1 ;
-(NSLayoutConstraint *)footnoteTitleToValueHorizontalSpaceConstraint;
-(void)cellWasSingleTapped:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)footnoteContainer;
-(void)menuDidHide:(id)arg1 ;
-(void)showMenu;
-(void)configureDragInteraction;
-(NSArray *)constraintsPendingActivation;
-(void)setConstraintsPendingActivation:(NSArray *)arg1 ;
-(NSLayoutConstraint *)footnoteTitleToTitleVerticalConstraint;
-(void)setAvatarView:(UIView *)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(UIView *)avatarViewContainer;
-(void)setFootnoteTitleToTitleVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3 ;
-(void)setFootnoteTitleToValueHorizontalSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)footnoteValueLabel;
-(void)setTopSeparatorWithInset:(double)arg1 andLength:(double)arg2 ;
-(void)updateFontRelatedConstraints;
-(void)cellWasLongPressed:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)bottomSeparator;
-(CALayer *)topSeparator;
-(void)dealloc;
@end

