/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMSpamFilterHelper : NSObject
+(void)participantsAreiMessagable:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3 ;
+(BOOL)isInternationalSpamFilteringEnabled;
+(id)internationalSpamFilterLearnMoreURL;
+(BOOL)senderIsCandidateForSMSDowngrade:(id)arg1 ;
+(BOOL)isChineseSpamFilteringEnabled;
+(BOOL)senderIsChinaHandle:(id)arg1 ;
+(BOOL)senderIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)senderIsKnownContact:(id)arg1 ;
+(id)mapID:(id)arg1 usingKey:(id)arg2 ;
+(BOOL)anyParticipantIsCandidateForBlackhole:(id)arg1 ;
+(BOOL)anyParticipantIsKnownContact:(id)arg1 ;
+(BOOL)receivingID:(id)arg1 isCountryCode:(id)arg2 ;
+(BOOL)isKnownContact:(id)arg1 ;
+(id)_cnRecordForAliases:(id)arg1 ;
+(BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5 ;
+(BOOL)accountRegionIsCandidateForHawking:(id)arg1 ;
+(BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(BOOL)arg3 givenHistory:(BOOL)arg4 forEligibleAccounts:(BOOL)arg5 ;
+(BOOL)accountCountryIsCandidateForHawking:(id)arg1 ;
+(BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 ifRecipientIsCandidate:(BOOL)arg3 withOtherParticipants:(id)arg4 givenHistory:(BOOL)arg5 forEligibleAccounts:(BOOL)arg6 ;
+(BOOL)receiverIsCandidateForSMSFilter:(id)arg1 ;
+(BOOL)accountCountryIsCandidateForSMSFilter:(id)arg1 ;
+(id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2 ;
+(BOOL)receiverIsCandidateForHawking:(id)arg1 ;
+(BOOL)isFilterUnknownSendersEnabled;
+(BOOL)isBlackholeEnabledForEligibleAccounts:(BOOL)arg1 ;
@end

