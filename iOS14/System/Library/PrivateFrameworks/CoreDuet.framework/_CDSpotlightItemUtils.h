/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDSpotlightItemUtils : NSObject
+(id)messageContextDictionaryForSendMessageIntent:(id)arg1 ;
+(long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2 ;
+(id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(BOOL)arg3 getMessages:(BOOL)arg4 ;
+(id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2 ;
+(id)expectedUTIsForMechanism:(long long)arg1 ;
+(id)interactionForSearchableItem:(id)arg1 ;
+(id)expectedSupportedUTIs;
@end

