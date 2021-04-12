/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface CKDraftManager : NSObject {

	NSMutableDictionary* _cachedDrafts;
	NSMutableSet* _dirtyDraftIDs;
	NSArray* _pendingRecipients;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)save:(BOOL)arg1 ;
-(void)flushCache;
-(void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2 ;
-(void)clearDraftForPendingConversation;
-(void)_setDraft:(id)arg1 forKey:(id)arg2 ;
-(id)_draftForKey:(id)arg1 ;
-(void)_clearDraftForConversation:(id)arg1 ;
-(id)_pendingRecipients;
-(void)_setPendingRecipients:(id)arg1 ;
-(id)_pendingRecipientsURL;
-(id)draftForConversation:(id)arg1 ;
-(void)setDraft:(id)arg1 forConversation:(id)arg2 ;
-(id)draftForPendingConversationWithRecipients:(id*)arg1 ;
@end

