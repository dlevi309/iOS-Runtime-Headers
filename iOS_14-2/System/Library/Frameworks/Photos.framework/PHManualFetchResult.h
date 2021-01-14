/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHFetchResult.h>

@class NSOrderedSet, PHPhotoLibrary, NSArray, NSString;

@interface PHManualFetchResult : PHFetchResult {

	NSOrderedSet* _objectIDs;
	PHPhotoLibrary* _photoLibrary;
	NSArray* _objects;
	NSString* _identifier;

}

@property (readonly) NSArray * objects;                     //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs; 
@property (readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
+(id)emptyFetchResultWithPhotoLibrary:(id)arg1 ;
-(NSArray *)objects;
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)fetchedObjects;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)fetchRequest;
-(id)photoLibrary;
-(BOOL)isFullyBackedByObjectIDs;
-(NSOrderedSet *)objectIDs;
-(void)getMediaTypeCounts;
-(id)containerIdentifier;
-(id)fetchedObjectIDs;
-(id)description;
-(id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 ;
-(id)fetchSortDescriptors;
-(id)fetchUpdatedObjects;
-(unsigned long long)hash;
-(id)fetchedObjectIDsSet;
-(id)copyWithOptions:(id)arg1 ;
-(id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 photosCount:(unsigned long long)arg7 videosCount:(unsigned long long)arg8 audiosCount:(unsigned long long)arg9 ;
-(id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 ;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(NSString *)identifier;
-(id)changeHandlingKey;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
@end

