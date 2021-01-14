/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHFetchResult.h>

@class PHFetchOptions, NSArray, NSOrderedSet, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult {

	/*^block*/id _fetchBlock;
	PHFetchOptions* _options;
	NSArray* _objects;
	NSOrderedSet* _objectIDs;
	NSString* _identifier;

}

@property (copy,readonly) id fetchBlock;                         //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (copy,readonly) PHFetchOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSArray * objects;                          //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs;                   //@synthesize objectIDs=_objectIDs - In the implementation block
@property (readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
-(NSArray *)objects;
-(long long)collectionFetchType;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)fetchedObjects;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)fetchRequest;
-(id)photoLibrary;
-(BOOL)isFullyBackedByObjectIDs;
-(id)initWithOptions:(id)arg1 status:(long long)arg2 fetchBlock:(/*^block*/id)arg3 ;
-(id)fetchBlock;
-(PHFetchOptions *)options;
-(NSOrderedSet *)objectIDs;
-(void)getMediaTypeCounts;
-(id)containerIdentifier;
-(id)fetchedObjectIDs;
-(id)description;
-(id)fetchSortDescriptors;
-(unsigned long long)hash;
-(id)copyWithOptions:(id)arg1 ;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(NSString *)identifier;
-(id)changeHandlingKey;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
@end

