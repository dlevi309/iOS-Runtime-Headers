/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForIncludesMeMessages;
+(id)predicateForExcludingMessagesInMailbox:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxObjectID:(id)arg1 ;
+(id)log;
+(id)predicateForMuteMessages;
+(id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg1 ;
+(id)spotlightPredicateForPredicate:(id)arg1 ;
+(id)predicateForMessagesInMailboxWithType:(long long)arg1 ;
+(id)_predicateForMessagesInMailboxWithURL:(id)arg1 ;
+(id)predicateForVIPMessages;
+(id)predicateForFlaggedMessages;
+(id)predicateForUnreadMessages;
+(id)predicateForMessagesInMailboxes:(id)arg1 ;
+(id)predicateForToMeMessages;
+(id)predicateForReadMessages;
+(long long)dateSortOrderFromSortDescriptors:(id)arg1 ;
+(id)sortDescriptorForDateAscending:(BOOL)arg1 ;
+(id)predicateForMessagesInMailboxesWithTypes:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxWithType:(long long)arg1 ;
+(id)predicateForMessagesInConversation:(long long)arg1 ;
+(id)mailboxURLsForPredicate:(id)arg1 ;
+(id)_predicateForMessagesInMailboxWithType:(id)arg1 ;
+(id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg1 ;
+(id)predicateForCCMeMessages;
+(id)predicateForExcludingMessagesInMailboxWithURL:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxes:(id)arg1 ;
+(id)predicateForMessagesWithSender:(id)arg1 ;
+(id)predicateForMessagesWithMailboxScope:(id)arg1 ;
+(BOOL)predicate:(id)arg1 appliesToFlagChange:(id)arg2 ;
+(id)predicateForMessagesInMailboxWithObjectID:(id)arg1 ;
+(id)predicateForMessagesWithAttachments;
+(id)predicateForMessagesWithThreadScope:(id)arg1 ;
+(id)predicateForTodayMessages;
+(id)predicateForFlagColor:(unsigned long long)arg1 ;
+(id)threadScopeForPredicate:(id)arg1 ;
+(id)predicateForNotifyMessages;
+(id)predicateFromPredicate:(id)arg1 ignoringKeyPaths:(id)arg2 ;
+(id)predicateForUnflaggedMessages;
+(id)predicateForMessagesInMailbox:(id)arg1 ;
+(id)_spotlightPredicateForPredicate:(id)arg1 ;
+(id)mailboxScopeForPredicate:(id)arg1 withMailboxTypeResolver:(id)arg2 ;
+(id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg1 ;
+(id)predicateForMessagesNewerThanDate:(id)arg1 ;
+(id)predicateForAccount:(id)arg1 ;
+(id)_predicateForKeyPath:(id)arg1 value:(id)arg2 ;
+(id)_keyPathsForFlagChange:(id)arg1 ;
@end

