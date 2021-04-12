/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout {

	CGRect mBounds;
	TSDDefaultPartitioner* mPartitioner;

}

@property (nonatomic,readonly) TSDDefaultPartitioner * partitioner; 
@property (nonatomic,readonly) CGRect bounds; 
-(CGRect)bounds;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(TSDDefaultPartitioner *)partitioner;
-(id)initWithInfo:(id)arg1 bounds:(CGRect)arg2 partitioner:(id)arg3 ;
@end

