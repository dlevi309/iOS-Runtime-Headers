/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDate, NSMutableArray, NSNumber;

@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _lastKnownAuthors;
	NSDate* _lastRequestDate;
	NSMutableArray* _resultBlocks;

}

@property (copy,readonly) NSNumber * lastKnownAdminStatus; 
@property (copy,readonly) NSArray * lastKnownAuthors; 
+(id)sharedCoordinator;
-(id)init;
-(void)reset;
-(void)getAdminStatusWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(NSNumber *)lastKnownAdminStatus;
-(NSArray *)lastKnownAuthors;
-(void)getAuthorsWithOptions:(id)arg1 authorsBlock:(/*^block*/id)arg2 ;
-(void)getAuthorsAndWaitWithOptions:(id)arg1 authorsBlock:(/*^block*/id)arg2 ;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(void)_queueResultBlock:(/*^block*/id)arg1 ;
-(void)_getAuthors;
-(void)_handleOperationResponseWithAuthors:(id)arg1 error:(id)arg2 ;
-(void)_fireResultsBlocksWithAuthors:(id)arg1 error:(id)arg2 ;
@end

