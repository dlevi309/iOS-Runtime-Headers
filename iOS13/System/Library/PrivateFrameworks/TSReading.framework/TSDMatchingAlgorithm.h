/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject {

	long long* mCostMatrix;
	char* mMaskMatrix;
	BOOL* mIsStarInColumn;
	BOOL* mIsStarInRow;
	BOOL* mIsColCovered;
	BOOL* mIsRowCovered;
	id* mObjectMapping;
	long long mMatrixDimension;
	long long mZ0Row;
	long long mZ0Col;
	NSMutableArray* mResults;

}
+(id)bestMatchesFromArray:(id)arg1 ;
-(BOOL)p_step4FindAZeroAndReturnRow:(int*)arg1 column:(int*)arg2 ;
-(int)p_step4IndexOfStarredZeroInRow:(int)arg1 ;
-(void)p_allocateMatrices;
-(int)p_doStep1;
-(int)p_doStep2;
-(int)p_doStep3;
-(int)p_doStep4;
-(int)p_doStep5;
-(int)p_doStep6;
-(void)p_deallocateMatrices;
-(id)p_bestMatchesFromArray:(id)arg1 ;
@end

