/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface _PSInteractionStoreUtils : NSObject
+(id)recentInteractionsFromStore:(id)arg1 bundleIDs:(id)arg2 ;
+(id)mostRecentInteractionWithSenderOrRecipientMatchingContactIdentifier:(id)arg1 bundleIds:(id)arg2 store:(id)arg3 singleRecipient:(BOOL)arg4 ;
+(id)interactionsHyperRecentFromReferenceDate:(id)arg1 bundleIds:(id)arg2 recencyMargin:(double)arg3 store:(id)arg4 ;
+(id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 fetchLimit:(unsigned long long)arg8 ;
+(id)interactionsMostRecentForBundleId:(id)arg1 store:(id)arg2 resultLimit:(unsigned long long)arg3 interactions:(id)arg4 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingContactIdentifier:(id)arg1 store:(id)arg2 ;
+(id)interactionsFromStore:(id)arg1 referenceDate:(id)arg2 withMechanisms:(id)arg3 withAccount:(id)arg4 withBundleIds:(id)arg5 withTargetBundleIds:(id)arg6 withDirections:(id)arg7 singleRecipient:(BOOL)arg8 fetchLimit:(unsigned long long)arg9 ;
+(id)interactionsMatchingAnyHandlesOrDomainIds:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 ;
+(id)interactionsFromStore:(id)arg1 startDate:(id)arg2 tillDate:(id)arg3 withMechanisms:(id)arg4 withAccount:(id)arg5 withBundleIds:(id)arg6 withTargetBundleIds:(id)arg7 withDirections:(id)arg8 singleRecipient:(BOOL)arg9 fetchLimit:(unsigned long long)arg10 ;
+(id)mostRecentInteractionWithSingleRecipientMatchingHandle:(id)arg1 store:(id)arg2 ;
+(id)interactionsMatchingAnyHandles:(id)arg1 account:(id)arg2 directions:(id)arg3 mechanisms:(id)arg4 bundleIds:(id)arg5 store:(id)arg6 fetchLimit:(unsigned long long)arg7 ;
+(id)allAirDropInteractionsFromStore:(id)arg1 fetchLimit:(unsigned long long)arg2 ;
+(id)interactionsContainingSearchStringInDisplayName:(id)arg1 account:(id)arg2 directions:(id)arg3 bundleIds:(id)arg4 store:(id)arg5 fetchLimit:(unsigned long long)arg6 ;
+(id)conversationIdWithMaximalIntersectionWithContactIdentifiers:(id)arg1 store:(id)arg2 bundleIds:(id)arg3 meContactIdentifier:(id)arg4 ;
@end

