/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface PLLocalChangeEventBuilder : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableDictionary* _attributesByOID;
	NSMutableDictionary* _relationshipsByOID;
	NSMutableArray* _deletedAssetCloudGUIDs;
	NSMutableArray* _deletedAlbumCloudGUIDs;
	NSMutableArray* _deletedMemoryCloudGUIDs;
	NSMutableArray* _deletedPersonCloudGUIDs;
	NSMutableArray* _deletedFaceCropCloudGUIDs;
	NSMutableArray* _deletedOwnedShareCloudGUIDs;
	NSMutableArray* _deletedSubscribedShareCloudGUIDs;
	NSMutableArray* _deletedSuggestionCloudGUIDs;
	NSMutableArray* _deletedInternalResourceUUIDToResourceTypeMappings;
	BOOL _coalescedEvent;
	BOOL _syncChange;
	BOOL _unknownMergeEvent;
	/*^block*/id _transactionFilter;
	/*^block*/id _updatedPropertyFilter;

}

@property (assign,getter=isCoalescedEvent,nonatomic) BOOL coalescedEvent;                    //@synthesize coalescedEvent=_coalescedEvent - In the implementation block
@property (assign,getter=isSyncChange,nonatomic) BOOL syncChange;                            //@synthesize syncChange=_syncChange - In the implementation block
@property (assign,getter=isUnknownMergeEvent,nonatomic) BOOL unknownMergeEvent;              //@synthesize unknownMergeEvent=_unknownMergeEvent - In the implementation block
@property (nonatomic,copy) id transactionFilter;                                             //@synthesize transactionFilter=_transactionFilter - In the implementation block
@property (nonatomic,copy) id updatedPropertyFilter;                                         //@synthesize updatedPropertyFilter=_updatedPropertyFilter - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)localEventFromTransaction:(id)arg1 ;
+(id)localEventWithBuilderBlock:(/*^block*/id)arg1 ;
-(void)recordDeletedCloudGUID:(id)arg1 forType:(long long)arg2 ;
-(void)recordUpdatedObjectID:(id)arg1 ;
-(void)setUnknownMergeEvent:(BOOL)arg1 ;
-(id)init;
-(BOOL)_shouldRecordTransaction:(id)arg1 ;
-(/*^block*/id)recordDeletedCloudGUIDBlockForChangeKey:(id)arg1 ;
-(Class)_cloudDeletableEntityFromObjectID:(id)arg1 ;
-(void)recordInsertedObjectID:(id)arg1 ;
-(void)_recordInsertChange:(id)arg1 ;
-(BOOL)isCoalescedEvent;
-(void)setUpdatedPropertyFilter:(id)arg1 ;
-(BOOL)isSyncChange;
-(void)recordUpdatedAttributes:(unsigned long long)arg1 andRelationships:(unsigned long long)arg2 forObjectID:(id)arg3 ;
-(void)recordChange:(id)arg1 ;
-(id)buildLocalEvent;
-(id)transactionFilter;
-(void)_recordUpdateChange:(id)arg1 ;
-(/*^block*/id)recordChangedObjectIDBlockForChangeKey:(id)arg1 ;
-(void)setSyncChange:(BOOL)arg1 ;
-(void)recordAllTransactionsFromIterator:(id)arg1 ;
-(BOOL)isUnknownMergeEvent;
-(BOOL)_isCloudStateDeletedOnTombstone:(id)arg1 ;
-(void)setTransactionFilter:(id)arg1 ;
-(void)recordTransaction:(id)arg1 ;
-(id)updatedPropertyFilter;
-(BOOL)isEmpty;
-(id)_filteredUpdatedPropertiesFromChange:(id)arg1 ;
-(void)_recordDeleteChange:(id)arg1 ;
-(void)recordDeletedObjectID:(id)arg1 ;
-(void)setCoalescedEvent:(BOOL)arg1 ;
-(void)_recordCloudDeleteForChange:(id)arg1 ;
@end

