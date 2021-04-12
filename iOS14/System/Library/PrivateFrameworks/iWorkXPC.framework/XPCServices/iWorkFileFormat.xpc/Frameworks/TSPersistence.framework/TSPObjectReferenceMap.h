/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPExternalReferenceDelegate;
#import <TSPersistence/TSPersistence-Structs.h>
@class TSPObjectContext;

@interface TSPObjectReferenceMap : NSObject {

	TSPObjectContext* _context;
	id<TSPExternalReferenceDelegate> _delegate;
	unordered_map<const long long, TSP::ReferenceMapInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ReferenceMapInfo> > >* _inverseReferenceMap;
	unordered_map<const long long, __unsafe_unretained Class, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, __unsafe_unretained Class> > >* _classMap;

}
-(id)init;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 ;
-(id)descriptionOfAllPossiblePathsToObjectIdentifier:(long long)arg1 withLimit:(unsigned long long)arg2 ;
-(void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectIdentifier:(long long)arg2 ;
-(id)parentObjectsForObjectIdentifier:(long long)arg1 ;
-(unsigned long long)visitObjectWithIdentifier:(long long)arg1 level:(unsigned long long)arg2 mode:(int)arg3 limit:(unsigned long long)arg4 pathSuffix:(id)arg5 visitedObjectIdentifiers:(id)arg6 updatingParentObjectPaths:(id)arg7 ;
-(id)parentObjectPathsForObjectIdentifier:(long long)arg1 limit:(unsigned long long)arg2 totalParentObjects:(unsigned long long*)arg3 ;
-(void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectOrLazyReference:(id)arg2 ;
-(id)initWithContext:(id)arg1 delegate:(id)arg2 externalReferencesFromComponent:(id)arg3 ;
-(id)parentObjectsForObject:(id)arg1 ;
-(id)descriptionOfAllPossiblePathsToObject:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(BOOL)hasParentsForObjectIdentifier:(long long)arg1 ;
-(void)addReferencesFromObject:(id)arg1 archiver:(id)arg2 ;
-(void)mergeWithObjectReferenceMap:(id)arg1 ;
-(void)addObjectReferenceMap:(id)arg1 ;
@end

