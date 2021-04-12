/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKConversationListCell.h>

@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {

	UIImageView* _unreadIndicatorImageView;
	CKAvatarView* _avatarView;

}
+(id)identifierForConversation:(id)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView;
-(void)_updateAvatarView;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)increaseContrastDidChange;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(id)chevronImageView;
-(double)leadingLayoutMargin;
-(void)_calculateLayoutFrames;
-(BOOL)_shouldShowAvatarForWidth:(double)arg1 ;
@end

