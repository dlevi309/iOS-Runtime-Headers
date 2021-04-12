/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface _PSInteractionStoreUtils : NSObject
+(id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)arg1 bundleIds:(id)arg2 store:(id)arg3 singleRecipient:(BOOL)arg4 ;
+(id)recentInteractionsFromStore:(id)arg1 bundleIDs:(id)arg2 ;
+(id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4 ;
+(id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 ;
+(id)interactionsMostRecentForBundleId:(id)arg1 store:(id)arg2 resultLimit:(unsigned long long)arg3 interactions:(id)arg4 ;
+(id)interactionsContainingSearchStringInDisplayName:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 ;
+(id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 fetchLimit:(unsigned long long)arg8 ;
+(id)interactionsHyperRecentFromReferenceDate:(id)arg1 bundleIds:(id)arg2 recencyMargin:(double)arg3 store:(id)arg4 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)arg1 store:(id)arg2 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)arg1 store:(id)arg2 ;
@end

