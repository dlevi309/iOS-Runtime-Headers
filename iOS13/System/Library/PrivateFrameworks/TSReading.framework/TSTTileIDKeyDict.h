/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	unordered_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(void)dealloc;
-(long long)count;
-(id)initWithOwner:(id)arg1 ;
-(void)removeAllTiles;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 ;
-(id)tileForID:(SCD_Struct_TS122)arg1 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS122)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS122)arg1 ;
-(void)makeTilesPerformSelector:(SEL)arg1 ;
@end

