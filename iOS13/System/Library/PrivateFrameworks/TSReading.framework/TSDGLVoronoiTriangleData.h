/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSArray;

@interface TSDGLVoronoiTriangleData : NSObject {

	unsigned long long* _triangleIndexToCellIndexMappingTable;
	unsigned long long* _triangleIndexToCellTriangleIndexMappingTable;
	unsigned long long _triangleIndexToCellMappingTableCount;
	unsigned long long _triangleCount;
	NSArray* _cells;
	CGRect _bounds;

}

@property (nonatomic,readonly) unsigned long long triangleCount;              //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) NSArray * cells;                               //@synthesize cells=_cells - In the implementation block
@property (nonatomic,readonly) unsigned long long cellCount; 
@property (nonatomic,readonly) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
-(void)dealloc;
-(CGRect)bounds;
-(NSArray *)cells;
-(unsigned long long)triangleCount;
-(void)p_setupDataWithPointCount:(unsigned long long)arg1 clippedToRect:(CGRect)arg2 percentOfCellsToSplit:(double)arg3 ;
-(unsigned long long)cellIndexFromTriangleIndex:(unsigned long long)arg1 ;
-(id)initWithPoints:(unsigned long long)arg1 clippedToRect:(CGRect)arg2 percentOfCellsToSplit:(double)arg3 ;
-(unsigned long long)cellCount;
-(id)cellFromTriangleIndex:(unsigned long long)arg1 ;
-(unsigned long long)triangleIndexInCellFromGlobalTriangleIndex:(unsigned long long)arg1 ;
@end

