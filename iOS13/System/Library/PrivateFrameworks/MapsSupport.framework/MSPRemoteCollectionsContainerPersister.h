/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainerPersister.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>

@class NSUUID, NSString;

@interface MSPRemoteCollectionsContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver> {

	BOOL _hasRemoteProxy;
	NSUUID* _lastOperationIdentifier;

}

@property (assign,nonatomic) BOOL hasRemoteProxy;                           //@synthesize hasRemoteProxy=_hasRemoteProxy - In the implementation block
@property (nonatomic,retain) NSUUID * lastOperationIdentifier;              //@synthesize lastOperationIdentifier=_lastOperationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)favoritesDidChange;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasRemoteProxy;
-(void)setHasRemoteProxy:(BOOL)arg1 ;
-(NSUUID *)lastOperationIdentifier;
-(void)setLastOperationIdentifier:(NSUUID *)arg1 ;
@end

