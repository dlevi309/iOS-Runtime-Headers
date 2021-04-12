/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKSyncRapportStorage.h>
#import <libobjc.A.dylib/_DKSyncRemoteContextStorage.h>

@protocol _DKSyncRemoteContextStorageDelegate;
@interface _DKSyncRapportContextStorage : _DKSyncRapportStorage <_DKSyncRemoteContextStorage> {

	id<_DKSyncRemoteContextStorageDelegate> _delegate;

}

@property (nonatomic,retain) id<_DKSyncRemoteContextStorageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id<_DKSyncRemoteContextStorageDelegate>)delegate;
-(void)setDelegate:(id<_DKSyncRemoteContextStorageDelegate>)arg1 ;
-(void)registerRequestIDsWithClient:(id)arg1 ;
-(void)handleFetchContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleSendContextValuesWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleSubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleUnsubscribeToContextValueChangeNotificationsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)handleFetchContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleSendContextValuesWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleSubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)handleUnsubscribeToContextValueChangeNotificationsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
@end

