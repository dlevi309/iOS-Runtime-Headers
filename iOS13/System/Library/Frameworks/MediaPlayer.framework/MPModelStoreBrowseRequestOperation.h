/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@protocol OS_dispatch_group;
@class NSOperation, NSObject, NSOperationQueue, NSMapTable;

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation {

	BOOL _didInitializeTimeoutIntervalAdditions;
	BOOL _errorReportingDisabled;
	NSOperation* _individualPendingNestedRequestOperation;
	NSObject*<OS_dispatch_group> _nestedRequestOperationsGroup;
	NSOperationQueue* _nestedRequestsOperationQueue;
	unsigned long long _requestType;
	NSMapTable* _sectionsToPendingNestedRequestOperations;
	double _timeoutIntervalAdditions;

}
-(void)cancel;
-(void)execute;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_nestedRequestsOperationQueue;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_produceRegularResponseWithParser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

