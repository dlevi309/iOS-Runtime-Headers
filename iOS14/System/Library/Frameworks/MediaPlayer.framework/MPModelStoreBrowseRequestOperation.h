/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(void)_produceCarPlayResponseWithParser:(id)arg1 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)adjustTimeoutInterval:(double)arg1 ;
-(id)_nestedRequestsOperationQueue;
-(void)_produceRegularResponseWithParser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_produceResponseWithParser:(id)arg1 results:(id)arg2 changeDetails:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancel;
@end

