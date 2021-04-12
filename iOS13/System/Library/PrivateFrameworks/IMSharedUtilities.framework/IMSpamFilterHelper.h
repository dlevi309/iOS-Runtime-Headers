/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMSpamFilterHelper : NSObject
+(BOOL)isInternationalSpamFilteringEnabled;
+(BOOL)receiverIsCandidateForSpamFiltering:(id)arg1 ;
+(BOOL)senderIsCandidateForSMSDowngrade:(id)arg1 ;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1 withRecipient:(id)arg2 ;
+(BOOL)senderIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)senderIsKnownContact:(id)arg1 ;
+(BOOL)anyParticipantIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)anyParticipantIsKnownContact:(id)arg1 ;
+(BOOL)isFilterUnknownSendersEnabled;
+(id)mapID:(id)arg1 usingKey:(id)arg2 ;
+(BOOL)isChineseSpamFilteringEnabled;
+(BOOL)isKnownContact:(id)arg1 ;
+(id)_cnRecordForAliases:(id)arg1 ;
+(BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5 ;
+(BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3 ;
+(BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 givenHistory:(BOOL)arg3 forEligibleAccounts:(BOOL)arg4 ;
+(BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 otherRecipients:(id)arg3 givenHistory:(BOOL)arg4 forEligibleAccounts:(BOOL)arg5 ;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1 ;
+(BOOL)accountRegionIsCandidateForSpamFiltering:(id)arg1 ;
+(BOOL)accountCountryIsCandidateForSpamFiltering:(id)arg1 ;
+(void)participantsAreiMessagable:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2 ;
+(id)internationalSpamFilterLearnMoreURL;
+(BOOL)repliedToChat:(id)arg1 ;
+(BOOL)receivedResponseForChat:(id)arg1 ;
@end

