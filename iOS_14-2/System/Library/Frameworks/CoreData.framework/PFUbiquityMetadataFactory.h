/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableDictionary, NSRecursiveLock, NSManagedObjectModel;

@interface PFUbiquityMetadataFactory : NSObject {

	NSMutableDictionary* _rootLocationToPeerIDToEntry;
	NSRecursiveLock* _rootLocationToPeerIDToEntryLock;
	NSManagedObjectModel* _cachedModel;

}
+(void)initialize;
+(void)_invalidateStaticCaches;
+(id)sharedFactory;
-(id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(BOOL)arg4 isToMany:(BOOL)arg5 andDeleteRule:(unsigned long long)arg6 ;
-(id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(BOOL)arg3 isTransient:(BOOL)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7 ;
-(id)init;
-(id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)description;
-(id)createMetadataModel;
-(id)newEntityForName:(id)arg1 ;
-(void)addModelingToolUserInfoToEntity:(id)arg1 ;
-(void)addModelingToolUserInfoToProperty:(id)arg1 ;
-(void)removeAllCoordinatorsForRootLocation:(id)arg1 ;
-(id)newMetadataManagedObjectModel;
-(void)dealloc;
@end

