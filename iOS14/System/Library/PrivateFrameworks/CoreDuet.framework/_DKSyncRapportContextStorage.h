/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)fetchContextValuesFromPeer:(id)arg1 forKeyPaths:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendContextValuesToPeer:(id)arg1 registrationIdentifier:(id)arg2 archivedObjects:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<_DKSyncRemoteContextStorageDelegate>)arg1 ;
-(void)subscribeToContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)arg1 registrationIdentifier:(id)arg2 predicate:(id)arg3 highPriority:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)registerRequestIDsWithClient:(id)arg1 ;
@end

