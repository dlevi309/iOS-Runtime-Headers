/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTCellRegionIterating.h>

@class NSString;

@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating> {

	set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> >* mCellRangeSet;
	SCD_Struct_TS140 mCellID;
	SCD_Struct_TS141 mBoundingCellRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)terminate;
-(id)initWithCellRegion:(id)arg1 ;
-(SCD_Struct_TS140)getNext;
@end

