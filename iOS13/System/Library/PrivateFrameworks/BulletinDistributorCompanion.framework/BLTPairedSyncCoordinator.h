/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/PSYInitialSyncStateObserverDelegate.h>
#import <libobjc.A.dylib/PSYSyncSessionObserverDelegate.h>

@class PSYSyncCoordinator, PSYInitialSyncStateObserver, PSYSyncSessionObserver, NSString;

@interface BLTPairedSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate> {

	BOOL _clientSyncComplete;
	PSYSyncCoordinator* _pairedSyncCoordinator;
	PSYInitialSyncStateObserver* _pairedInitialSyncObserver;
	PSYSyncSessionObserver* _pairedSyncObserver;

}

@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;                           //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (nonatomic,retain) PSYInitialSyncStateObserver * pairedInitialSyncObserver;              //@synthesize pairedInitialSyncObserver=_pairedInitialSyncObserver - In the implementation block
@property (nonatomic,retain) PSYSyncSessionObserver * pairedSyncObserver;                          //@synthesize pairedSyncObserver=_pairedSyncObserver - In the implementation block
@property (assign,nonatomic) BOOL clientSyncComplete;                                              //@synthesize clientSyncComplete=_clientSyncComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reportProgress:(double)arg1 ;
+(void)syncDidComplete;
+(id)syncState;
-(id)init;
-(void)_reportProgress:(double)arg1 ;
-(void)_syncDidComplete;
-(void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2 ;
-(void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2 ;
-(void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2 ;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)_initInitialSyncStateComplete;
-(PSYInitialSyncStateObserver *)pairedInitialSyncObserver;
-(void)setPairedInitialSyncObserver:(PSYInitialSyncStateObserver *)arg1 ;
-(PSYSyncSessionObserver *)pairedSyncObserver;
-(void)setPairedSyncObserver:(PSYSyncSessionObserver *)arg1 ;
-(BOOL)clientSyncComplete;
-(void)setClientSyncComplete:(BOOL)arg1 ;
@end

