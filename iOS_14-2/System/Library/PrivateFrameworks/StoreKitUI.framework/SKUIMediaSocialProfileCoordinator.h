/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDate, SKUIMediaSocialProfile, NSOperationQueue, NSMutableArray;

@interface SKUIMediaSocialProfileCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _lastAuthenticationAttempt;
	SKUIMediaSocialProfile* _lastKnownProfile;
	NSDate* _lastRequestDate;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _profileBlocks;
	BOOL _waitingForAuthentication;

}
+(id)sharedCoordinator;
-(id)init;
-(void)reset;
-(void)dealloc;
-(void)getProfileWithOptions:(id)arg1 profileBlock:(/*^block*/id)arg2 ;
-(void)_accountStoreChangeNotification:(id)arg1 ;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(void)_queueProfileBlock:(/*^block*/id)arg1 ;
-(void)_requestProfile;
-(void)_handleOperationResponseWithProfile:(id)arg1 error:(id)arg2 ;
-(void)_fireProfileBlocksWithProfile:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
@end

