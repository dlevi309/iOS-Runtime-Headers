/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@interface EDMessageListItemPredicates : NSObject
+(id)_predicateForRecipientMessagesAddressesKey:(id)arg1 addresses:(id)arg2 ;
+(id)_predicateForAnyMailboxWithPredicate:(id)arg1 ;
+(id)_objectIDsFromRightExpression:(id)arg1 ;
+(id)predicateForAnyRecipientPredicate:(id)arg1 ;
+(id)predicateForSenderPredicate:(id)arg1 ;
+(id)predicateForSubjectPredicate:(id)arg1 ;
+(id)predicateForBody:(id)arg1 ;
+(id)predicateForMessagesFromVIPs:(id)arg1 ;
+(id)predicateForMessagesToAddresses:(id)arg1 ;
+(id)predicateForMessagesThatCCAddresses:(id)arg1 ;
+(id)predicateForMailboxTypePredicate:(id)arg1 mailboxes:(id)arg2 ;
+(id)predicateForMessagesWithObjectIDsPredicate:(id)arg1 objectIDConverter:(id)arg2 ;
+(id)predicateForMessageIDHeaderHashPredicate:(id)arg1 ;
+(id)predicateForSpotlightPredicate:(id)arg1 ;
@end

