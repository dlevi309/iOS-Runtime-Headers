/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying> {

	unordered_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation> > >* _map;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)setObjectLocation:(ObjectLocation)arg1 forUUID:(id)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPersistedObjectUUIDMap:(id)arg1 ;
-(id)descriptionForComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 delegate:(id)arg3 ;
-(id)initWithComponentsDictionary:(id)arg1 isLoadingDocument:(BOOL)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4 ;
-(ObjectLocation)objectLocationForUUID:(id)arg1 ;
-(void)didUpdateUUIDDuringRead:(id)arg1 forComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 originalUUID:(id)arg4 isDuplicatedUUID:(BOOL)arg5 delegate:(id)arg6 ;
-(void)didUpdateObjectIdentifierDuringRead:(long long)arg1 forUUID:(id)arg2 componentIdentifier:(long long)arg3 originalObjectIdentifier:(long long)arg4 delegate:(id)arg5 ;
@end

