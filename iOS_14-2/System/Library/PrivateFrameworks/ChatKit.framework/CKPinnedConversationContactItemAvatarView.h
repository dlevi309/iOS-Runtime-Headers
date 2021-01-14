/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKAvatarView.h>
#import <libobjc.A.dylib/CKPinnedConversationContactItemView.h>

@protocol CKPinnedConversationContactItem;
@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView> {

	id<CKPinnedConversationContactItem> _pinnedConversationContactItem;

}

@property (nonatomic,retain) id<CKPinnedConversationContactItem> pinnedConversationContactItem;              //@synthesize pinnedConversationContactItem=_pinnedConversationContactItem - In the implementation block
-(id)init;
-(void)_updateContactItemViewShadows;
-(id<CKPinnedConversationContactItem>)pinnedConversationContactItem;
-(void)setPinnedConversationContactItem:(id<CKPinnedConversationContactItem>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

