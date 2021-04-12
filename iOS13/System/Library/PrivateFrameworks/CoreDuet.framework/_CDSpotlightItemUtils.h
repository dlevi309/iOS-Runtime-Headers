/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDSpotlightItemUtils : NSObject
+(id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(BOOL)arg3 getMessages:(BOOL)arg4 ;
+(id)interactionForSearchableItem:(id)arg1 ;
+(BOOL)whitelistedCSSearchableItem:(id)arg1 ;
+(long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2 ;
+(id)policies;
+(id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2 ;
+(id)_contactsForPersons:(id)arg1 ;
+(id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2 ;
+(BOOL)shouldFilterEmailAddress:(id)arg1 ;
+(id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(BOOL)isLocationBasedItem:(id)arg1 ;
+(id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)emailContextDictionaryForSearchableItem:(id)arg1 ;
+(id)messageContextDictionaryForSearchableItem:(id)arg1 ;
+(id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)mechanismUtiMap;
+(id)safariUTIs;
+(BOOL)utType:(id)arg1 conformsTo:(id)arg2 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2 ;
+(id)utiConformCache;
+(BOOL)uncachedUtType:(id)arg1 conformsTo:(id)arg2 ;
+(id)expectedUTIsForMechanism:(long long)arg1 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTITypes:(id)arg2 ;
+(id)expectedSupportedUTIs;
@end

