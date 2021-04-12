/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSArray *)objects;
-(id)fetchRequest;
-(id)containerIdentifier;
-(id)fetchedObjects;
-(id)photoLibrary;
-(NSOrderedSet *)objectIDs;
-(long long)collectionFetchType;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)copyWithOptions:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)fetchedObjectIDs;
-(id)fetchedObjectIDsSet;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)getMediaTypeCounts;
-(BOOL)isFullyBackedByObjectIDs;
-(id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 ;
-(id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 ;
-(id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(BOOL)arg6 photosCount:(unsigned long long)arg7 videosCount:(unsigned long long)arg8 audiosCount:(unsigned long long)arg9 ;
-(id)fetchUpdatedObjects;
@end

