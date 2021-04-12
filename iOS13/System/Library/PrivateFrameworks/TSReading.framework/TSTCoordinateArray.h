/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {

	unsigned mOffset;
	unsigned mCount;
	double* mCoordinates;
	double mAverage;
	NSMutableIndexSet* mVisibleIndices;
	BOOL mLayoutDirectionIsLeftToRight;
	double mTableWidth;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)hasRightToLeftOrderingWithWidth:(double)arg1 ;
-(id)initWithCount:(unsigned)arg1 atOffset:(unsigned)arg2 ;
@end

