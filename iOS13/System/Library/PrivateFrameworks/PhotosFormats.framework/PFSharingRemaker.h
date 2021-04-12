/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSError, NSOperationQueue, PFSharingRemakerOptions, NSArray;

@interface PFSharingRemaker : NSObject {

	NSObject*<OS_dispatch_queue> _remakerQueue;
	float _progress;
	NSMutableDictionary* _inProgressOperationByUUID;
	BOOL _remakerSuccess;
	BOOL _abortedRemaker;
	BOOL _cancelledRemaker;
	NSError* _remakerError;
	NSOperationQueue* _remakeOperationQueue;
	NSObject*<OS_dispatch_source> _progressTimer;
	PFSharingRemakerOptions* __options;
	NSArray* __operations;
	/*^block*/id __progressHandler;
	/*^block*/id __completionHandler;

}

@property (setter=_setOptions:,nonatomic,retain) PFSharingRemakerOptions * _options;              //@synthesize _options=__options - In the implementation block
@property (setter=_setOperations:,nonatomic,retain) NSArray * _operations;                        //@synthesize _operations=__operations - In the implementation block
@property (setter=_setProgressHandler:,nonatomic,copy) id _progressHandler;                       //@synthesize _progressHandler=__progressHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                   //@synthesize _completionHandler=__completionHandler - In the implementation block
+(id)remakerWithOperations:(id)arg1 options:(id)arg2 ;
-(id)init;
-(PFSharingRemakerOptions *)_options;
-(void)_setOptions:(id)arg1 ;
-(NSArray *)_operations;
-(id)_progressHandler;
-(id)_completionHandler;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateProgress;
-(void)cancelRemaking;
-(void)remakeWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)_computeProgress;
-(void)_callProgressBlockWithProgress:(double)arg1 ;
-(void)_endSessionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_configureVideoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3 ;
-(void)_configurePhotoOperation:(id)arg1 withUUID:(id)arg2 dispatchGroup:(id)arg3 ;
-(void)_completeOperationWithUUID:(id)arg1 ;
-(void)_abortWithUnderlyingOperationError:(id)arg1 ;
-(void)_setOperations:(id)arg1 ;
-(void)_setProgressHandler:(/*^block*/id)arg1 ;
@end

