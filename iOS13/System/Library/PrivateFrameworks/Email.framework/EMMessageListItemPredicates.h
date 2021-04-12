/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)predicateForMessagesInConversation:(long long)arg1 ;
+(id)sortDescriptorForDateAscending:(BOOL)arg1 ;
+(id)predicateForMessagesInMailboxes:(id)arg1 ;
+(id)threadScopeForPredicate:(id)arg1 ;
+(id)mailboxScopeForPredicate:(id)arg1 withMailboxTypeResolver:(id)arg2 ;
+(id)_predicateForMessagesInMailboxWithType:(id)arg1 ;
+(id)predicateForMessagesInMailboxWithObjectID:(id)arg1 ;
+(id)_predicateForMessagesInMailboxWithURL:(id)arg1 ;
+(id)predicateForMessagesInMailbox:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailbox:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxObjectID:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg1 ;
+(id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg1 ;
+(id)predicateForMessagesInMailboxesWithTypes:(id)arg1 ;
+(id)predicateForMessagesWithMailboxScope:(id)arg1 ;
+(id)_predicateForKeyPath:(id)arg1 value:(id)arg2 ;
+(id)predicateForToMeMessages;
+(id)predicateForCCMeMessages;
+(id)mailboxURLsForPredicate:(id)arg1 ;
+(id)_spotlightPredicateForPredicate:(id)arg1 ;
+(id)_keyPathsForFlagChange:(id)arg1 ;
+(id)predicateFromPredicate:(id)arg1 ignoringKeyPaths:(id)arg2 ;
+(id)predicateForMessagesInMailboxWithType:(long long)arg1 ;
+(id)predicateForExcludingMessagesInMailboxWithType:(long long)arg1 ;
+(id)predicateForExcludingMessagesInMailboxes:(id)arg1 ;
+(id)predicateForMessagesWithThreadScope:(id)arg1 ;
+(id)predicateForMessagesWithSender:(id)arg1 ;
+(id)predicateForVIPMessages;
+(id)predicateForFlaggedMessages;
+(id)predicateForUnflaggedMessages;
+(id)predicateForUnreadMessages;
+(id)predicateForReadMessages;
+(id)predicateForMessagesWithAttachments;
+(id)predicateForNotifyMessages;
+(id)predicateForMuteMessages;
+(id)predicateForTodayMessages;
+(id)predicateForIncludesMeMessages;
+(id)predicateForMessagesNewerThanDate:(id)arg1 ;
+(id)predicateForExcludingMessagesInMailboxWithURL:(id)arg1 ;
+(id)predicateForAccount:(id)arg1 ;
+(long long)dateSortOrderFromSortDescriptors:(id)arg1 ;
+(id)spotlightPredicateForPredicate:(id)arg1 ;
+(BOOL)predicate:(id)arg1 appliesToFlagChange:(id)arg2 ;
@end

