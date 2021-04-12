/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListCell.h>

@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {

	UIImageView* _unreadIndicatorImageView;
	CKAvatarView* _avatarView;
	BOOL _showTypingIndicator;

}

@property (assign,nonatomic) BOOL showTypingIndicator;              //@synthesize showTypingIndicator=_showTypingIndicator - In the implementation block
+(id)identifierForConversation:(id)arg1 ;
+(double)leadingLayoutMargin;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(BOOL)_isCollapsed;
-(void)_stopTypingIndicator;
-(void)updateTypingIndicatorIfNeeded;
-(void)_resetTypingIndicator;
-(void)setShowTypingIndicator:(BOOL)arg1 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)showTypingIndicator;
-(void)_startTypingIndicator;
-(void)_calculateLayoutFrames;
-(BOOL)_shouldShowAvatarForWidth:(double)arg1 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)prepareForReuse;
-(id)avatarView;
-(void)layoutSubviews;
-(void)_updateAvatarView;
-(void)increaseContrastDidChange;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(void)updateWithForwardedConfigurationState:(unsigned long long)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2 ;
-(id)overrideImageDataForPreviewInteractionForAvatarView:(id)arg1 ;
-(void)registerForEvents;
-(id)chevronImageView;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg1 forConversation:(id)arg2 animated:(BOOL)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_boundsShouldCollapseContent:(CGRect)arg1 ;
-(void)_updateLabelVisibility;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

