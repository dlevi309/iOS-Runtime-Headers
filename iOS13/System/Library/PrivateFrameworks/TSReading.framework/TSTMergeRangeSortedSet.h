/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol OS_dispatch_semaphore;
#import <TSReading/TSReading-Structs.h>
@class NSObject;

@interface TSTMergeRangeSortedSet : NSObject {

	set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> >* mSet;
	tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, long>* mIter;
	NSObject*<OS_dispatch_semaphore> mSem;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)reset;
-(SCD_Struct_TS142)begin;
-(SCD_Struct_TS142)iter;
-(void)addRange:(SCD_Struct_TS142)arg1 andSize:(CGSize)arg2 andPaddingInsets:(UIEdgeInsets)arg3 andIsCheckbox:(BOOL)arg4 ;
-(CGSize)getSize;
-(BOOL)isCheckbox;
-(UIEdgeInsets)getPaddingInsets;
@end

