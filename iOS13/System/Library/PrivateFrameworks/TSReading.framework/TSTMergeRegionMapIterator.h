/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject {

	TSTMergeRegionMap* mMergeRegionMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> >* mMergeRegionIterator;

}
-(void)dealloc;
-(void)reset;
-(SCD_Struct_TS142)nextMergeRegion;
-(id)initWithMergeRegionMap:(id)arg1 ;
-(BOOL)hasNextMergeRegion;
@end

