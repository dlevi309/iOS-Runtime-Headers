/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol CNComposeRecipientTableViewCellDelegate;
@class UIButton, CNAvatarViewController, NSArray, NSString;

@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell <NUIContainerViewDelegate> {

	BOOL _shouldHighlightCompleteMatches;
	id<CNComposeRecipientTableViewCellDelegate> _delegate;
	UIButton* _actionButton;
	CNAvatarViewController* _avatarViewController;
	NSArray* _activeConstraints;
	unsigned long long _actionType;

}

@property (nonatomic,retain) UIButton * actionButton;                                      //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                  //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                                //@synthesize actionType=_actionType - In the implementation block
@property (__weak) id<CNComposeRecipientTableViewCellDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightCompleteMatches;                          //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
+(double)additionalSeparatorInset;
+(BOOL)avatarsAreHidden;
+(id)attributedStringWithBoldedRangesForMatchedStrings:(id)arg1 inString:(id)arg2 font:(id)arg3 boldAllMatches:(BOOL)arg4 ;
+(id)_attributedStringForListOfGroupMemberNames:(id)arg1 numberTruncated:(unsigned long long)arg2 ;
+(id)_attributedStringForGroupMembersOfRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4 ;
+(id)_attributedTitleForRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4 ;
-(id<CNComposeRecipientTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<CNComposeRecipientTableViewCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setRecipient:(id)arg1 ;
-(unsigned long long)actionType;
-(void)setActionType:(unsigned long long)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(UIButton *)actionButton;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(void)actionButtonTapped;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setShouldHighlightCompleteMatches:(BOOL)arg1 ;
-(BOOL)shouldHighlightCompleteMatches;
-(void)setActionType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)applyActionButtonTouchInsets;
-(void)updateLabelsContrainedToWidth:(double)arg1 ;
-(void)labelsChangedWidth:(double)arg1 ;
-(double)trailingButtonWidth;
@end

