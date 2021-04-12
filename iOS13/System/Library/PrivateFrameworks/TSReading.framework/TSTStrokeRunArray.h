/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSTStrokeRunArray : NSObject {

	BOOL mHasCustomStrokes;
	double mMaxWidth;
	unsigned mCount;
	unsigned mAllocCount;
	unsigned mLastLookup;
	TSTStrokeRun* mStrokes;
	opaque_pthread_rwlock_t mRWLock;

}

@property (nonatomic,readonly) double maxWidth; 
-(void)dealloc;
-(id)description;
-(id)initWithCount:(unsigned)arg1 ;
-(double)maxWidth;
@end

