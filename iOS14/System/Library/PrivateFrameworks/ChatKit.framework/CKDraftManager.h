/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface CKDraftManager : NSObject {

	NSMutableDictionary* _cachedDrafts;
	NSMutableSet* _dirtyDraftIDs;
	NSArray* _pendingRecipients;

}
+(id)sharedInstance;
-(void)save:(BOOL)arg1 ;
-(id)_draftForKey:(id)arg1 ;
-(void)clearDraftForPendingConversation;
-(void)_setDraft:(id)arg1 forKey:(id)arg2 ;
-(void)_clearDraftForConversation:(id)arg1 ;
-(id)_pendingRecipients;
-(void)_setPendingRecipients:(id)arg1 ;
-(id)_pendingRecipientsURL;
-(id)draftForConversation:(id)arg1 ;
-(void)setDraft:(id)arg1 forConversation:(id)arg2 ;
-(id)draftForPendingConversationWithRecipients:(id*)arg1 ;
-(void)flushCache;
-(void)setDraftForPendingConversation:(id)arg1 withRecipients:(id)arg2 ;
-(void)dealloc;
@end

