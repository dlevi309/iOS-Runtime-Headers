/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/


@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;
@class NSObject, NRDevice, NSUUID, PSYSyncCoordinator;

@interface PSYServiceSyncSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isComplete;
	BOOL _supportsMigrationSync;
	BOOL _complete;
	NRDevice* _pairedDevice;
	NSUUID* _sessionIdentifier;
	PSYSyncCoordinator* _syncCoordinator;
	unsigned long long _switchID;
	unsigned long long _syncSessionType;
	id<PSYServiceSyncSessionDelegate> _delegate;

}

@property (nonatomic,retain) NRDevice * pairedDevice;                                        //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;                             //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) PSYSyncCoordinator * syncCoordinator;                    //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<PSYServiceSyncSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long switchID;                                    //@synthesize switchID=_switchID - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete;                              //@synthesize complete=_complete - In the implementation block
-(id<PSYServiceSyncSessionDelegate>)delegate;
-(void)setDelegate:(id<PSYServiceSyncSessionDelegate>)arg1 ;
-(BOOL)isComplete;
-(void)reportProgress:(double)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(NRDevice *)pairedDevice;
-(void)syncDidComplete;
-(id)initWithQueue:(id)arg1 supportsMigrationSync:(BOOL)arg2 ;
-(void)syncDidCompleteSending;
-(void)syncDidFailWithError:(id)arg1 ;
-(unsigned long long)syncSessionType;
-(PSYSyncCoordinator *)syncCoordinator;
-(void)setSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(unsigned long long)switchID;
-(void)setSwitchID:(unsigned long long)arg1 ;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
@end

