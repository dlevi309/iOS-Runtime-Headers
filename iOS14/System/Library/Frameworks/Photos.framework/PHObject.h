/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PLLocalUUIDConverter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID, PHPhotoLibrary, PHObjectReference;

@interface PHObject : NSObject <PLLocalUUIDConverter, NSCopying> {

	NSString* _uuid;
	BOOL _deleted;
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
+(BOOL)managedObjectSupportsFaceState;
+(id)entityKeyMap;
+(void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2 ;
+(void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2 ;
+(id)identifierPropertiesToFetch;
+(id)uuidFromLocalIdentifier:(id)arg1 ;
+(id)identifierCodeFromLocalIdentifier:(id)arg1 ;
+(void)assertAllObjects:(id)arg1 forSelector:(SEL)arg2 areOfType:(Class)arg3 ;
+(id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(BOOL)managedObjectSupportsShareTrashedState;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)identifierCode;
+(BOOL)managedObjectSupportsShareExpiredState;
+(id)fetchType;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(BOOL)managedObjectSupportsHiddenState;
+(BOOL)managedObjectSupportsVisibilityState;
+(BOOL)managedObjectSupportsBursts;
+(BOOL)managedObjectSupportsSavedAssetType;
+(BOOL)managedObjectSupportsMontage;
+(BOOL)managedObjectSupportsAllowedForAnalysis;
+(BOOL)managedObjectSupportsContributor;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)propertyKeyForEntityKey:(id)arg1 ;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsKeyFaces;
+(id)localIdentifierExpressionForFetchRequests;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)managedEntityName;
-(NSString *)localIdentifier;
-(NSString *)uuid;
-(BOOL)isTransient;
-(PHPhotoLibrary *)photoLibrary;
-(BOOL)hasLoadedPropertySet:(id)arg1 ;
-(id)_shortObjectIDURI;
-(unsigned long long)propertyHint;
-(void)setPropertyHint:(unsigned long long)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSManagedObjectID *)objectID;
-(BOOL)isDeleted;
-(NSString *)description;
-(unsigned long long)hash;
-(id)identifier;
-(PHObjectReference *)objectReference;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

