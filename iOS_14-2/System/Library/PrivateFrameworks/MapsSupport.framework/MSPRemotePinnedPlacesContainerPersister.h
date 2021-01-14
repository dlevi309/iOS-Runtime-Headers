/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPContainerPersister.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>

@class NSUUID, NSString;

@interface MSPRemotePinnedPlacesContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver> {

	BOOL _hasRemoteProxy;
	NSUUID* _lastOperationIdentifier;

}

@property (assign,nonatomic) BOOL hasRemoteProxy;                           //@synthesize hasRemoteProxy=_hasRemoteProxy - In the implementation block
@property (nonatomic,retain) NSUUID * lastOperationIdentifier;              //@synthesize lastOperationIdentifier=_lastOperationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)favoritesDidChange;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)dealloc;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasRemoteProxy;
-(void)setHasRemoteProxy:(BOOL)arg1 ;
-(NSUUID *)lastOperationIdentifier;
-(void)setLastOperationIdentifier:(NSUUID *)arg1 ;
@end

