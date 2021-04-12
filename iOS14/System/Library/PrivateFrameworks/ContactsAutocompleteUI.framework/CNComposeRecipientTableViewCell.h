/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol CNComposeRecipientTableViewCellDelegate;
@class NSUUID, CNComposeRecipientActionButton, CNAvatarViewController, NSArray, NSString;

@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell <NUIContainerViewDelegate> {

	BOOL _shouldHighlightCompleteMatches;
	id<CNComposeRecipientTableViewCellDelegate> _delegate;
	NSUUID* _displaySessionUUID;
	CNComposeRecipientActionButton* _actionButton;
	CNAvatarViewController* _avatarViewController;
	NSArray* _activeConstraints;
	unsigned long long _actionType;

}

@property (nonatomic,retain) CNComposeRecipientActionButton * actionButton;                //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                  //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                                //@synthesize actionType=_actionType - In the implementation block
@property (__weak) id<CNComposeRecipientTableViewCellDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightCompleteMatches;                          //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                                  //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)additionalSeparatorInset;
+(BOOL)avatarsAreHidden;
+(id)attributedStringWithBoldedRangesForMatchedStrings:(id)arg1 inString:(id)arg2 font:(id)arg3 boldAllMatches:(BOOL)arg4 ;
+(id)_attributedStringForListOfGroupMemberNames:(id)arg1 numberTruncated:(unsigned long long)arg2 ;
+(id)_attributedStringForGroupMembersOfRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4 ;
+(id)_attributedTitleForRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4 ;
+(id)identifier;
-(void)setRecipient:(id)arg1 ;
-(void)setActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)setShouldHighlightCompleteMatches:(BOOL)arg1 ;
-(BOOL)canExpandRecipient;
-(id<CNComposeRecipientTableViewCellDelegate>)delegate;
-(BOOL)canCollapseRecipient;
-(void)setActionType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setupAvatarViewControllerWithSettings:(id)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<CNComposeRecipientTableViewCellDelegate>)arg1 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(CNComposeRecipientActionButton *)actionButton;
-(void)setActionButton:(CNComposeRecipientActionButton *)arg1 ;
-(void)applyActionButtonTouchInsets;
-(void)updateLabelsContrainedToWidth:(double)arg1 ;
-(void)updateButtonColor;
-(BOOL)shouldHighlightCompleteMatches;
-(id)assembleContactAvatarsForRecipient:(id)arg1 ;
-(void)assignContactAvatarsToController:(id)arg1 ;
-(void)labelsChangedWidth:(double)arg1 ;
-(double)trailingButtonWidth;
-(BOOL)supportsAvatarView;
-(void)actionButtonTapped;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

