/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray, PLCloudPhotoLibraryBatchContainer, NSMutableSet;

@interface PLCloudPhotoLibraryBatchManager : NSObject {

	NSMutableArray* _batches;
	PLCloudPhotoLibraryBatchContainer* _currentBatch;
	BOOL _wasDrained;
	NSMutableSet* _masterHistory;
	unsigned long long _resourceBudget;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)addRecord:(id)arg1 ;
-(id)drainBatches;
-(BOOL)isAboveMaximumResourceBudget;
-(long long)currentBatchCount;
-(void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2 ;
@end

