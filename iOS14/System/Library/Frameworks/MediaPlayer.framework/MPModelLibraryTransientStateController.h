/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray;

@interface MPModelLibraryTransientStateController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _registeredTransientState;

}
+(id)sharedDeviceLibraryController;
-(void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performLibraryImportChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 ;
-(id)init;
-(void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 ;
-(void)addOperation:(id)arg1 ;
-(void)unregisterTransientState:(id)arg1 ;
-(void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)registerTransientKeepLocalState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3 ;
-(long long)transientKeepLocalStateForModelObject:(id)arg1 ;
-(void)performKeepLocalChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 ;
-(void)performDeleteEntityChangeRequest:(id)arg1 withRelatedModelObjects:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)registerTransientAddState:(long long)arg1 forModelObjects:(id)arg2 relatedModelObjects:(id)arg3 ;
-(long long)transientAddStateForModelObject:(id)arg1 ;
@end

