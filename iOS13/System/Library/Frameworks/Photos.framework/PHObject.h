/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLLocalUUIDConverter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID, PHPhotoLibrary, PHObjectReference;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying> {

	BOOL _deleted;
	NSString* _uuid;
	NSManagedObjectID* _objectID;
	unsigned long long _propertyHint;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHObjectReference * objectReference; 
@property (readonly) NSManagedObjectID * objectID;                               //@synthesize objectID=_objectID - In the implementation block
@property (readonly) id identifier; 
@property (getter=isDeleted,readonly) BOOL deleted;                              //@synthesize deleted=_deleted - In the implementation block
@property (assign) unsigned long long propertyHint;                              //@synthesize propertyHint=_propertyHint - In the implementation block
@property (readonly) NSString * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (getter=isTransient,readonly) BOOL transient; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)propertyKeyForEntityKey:(id)arg1 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsVisibilityState;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsMontage;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsKeyFaces;
+(id)localIdentifierExpressionForFetchRequests;
+(BOOL)managedObjectSupportsFaceState;
+(void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2 ;
+(void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2 ;
+(id)identifierPropertiesToFetch;
+(BOOL)managedObjectSupportsMomentShareTrashedState;
+(BOOL)managedObjectSupportsMomentShareExpiredState;
+(id)uuidFromLocalIdentifier:(id)arg1 ;
+(id)identifierCodeFromLocalIdentifier:(id)arg1 ;
+(void)assertAllObjects:(id)arg1 forSelector:(SEL)arg2 areOfType:(Class)arg3 ;
+(id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)identifier;
-(NSString *)uuid;
-(NSManagedObjectID *)objectID;
-(BOOL)isTransient;
-(NSString *)localIdentifier;
-(BOOL)isDeleted;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)hasLoadedPropertySet:(id)arg1 ;
-(id)_shortObjectIDURI;
-(unsigned long long)propertyHint;
-(void)setPropertyHint:(unsigned long long)arg1 ;
-(PHObjectReference *)objectReference;
@end

