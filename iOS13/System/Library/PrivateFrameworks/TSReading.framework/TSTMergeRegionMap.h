/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>

@interface TSTMergeRegionMap : TSPObject {

	unordered_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mCellIDToMergeRegionTopLeft;
	unordered_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > >* mMergeRegionTopLeftToMergeRegionSize;
	SCD_Struct_TS141 mUnionedMergeRange;

}
+(id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS142)arg2 ;
-(id)description;
-(unsigned long long)count;
-(BOOL)find:(SCD_Struct_TS142)arg1 ;
-(BOOL)remove:(SCD_Struct_TS142)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(BOOL)insert:(SCD_Struct_TS142)arg1 ;
-(SCD_Struct_TS142)mergedRangeForCellID:(SCD_Struct_TS140)arg1 ;
-(id)iterator;
-(BOOL)partiallyIntersectsCellRange:(SCD_Struct_TS142)arg1 ;
-(id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2 ;
-(SCD_Struct_TS142)unionedMergeRange;
-(id)mergedGridIndicesForDimension:(int)arg1 ;
-(id)initRegionMapFromMap:(id)arg1 intersectingRange:(SCD_Struct_TS142)arg2 ;
-(BOOL)partiallyIntersectsCellRegion:(id)arg1 ;
-(BOOL)hasRangeSpanningRows;
@end

