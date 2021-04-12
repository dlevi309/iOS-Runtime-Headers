/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)currentBatchCount;
-(id)drainBatches;
-(BOOL)isAboveMaximumResourceBudget;
-(void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2 ;
-(id)description;
-(void)reset;
-(void)addRecord:(id)arg1 ;
-(void)dealloc;
@end

