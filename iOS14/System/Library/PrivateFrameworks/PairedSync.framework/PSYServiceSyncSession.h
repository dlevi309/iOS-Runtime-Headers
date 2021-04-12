/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NRDevice *)pairedDevice;
-(BOOL)isComplete;
-(void)syncDidComplete;
-(id<PSYServiceSyncSessionDelegate>)delegate;
-(PSYSyncCoordinator *)syncCoordinator;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)setDelegate:(id<PSYServiceSyncSessionDelegate>)arg1 ;
-(void)reportProgress:(double)arg1 ;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(void)syncDidFailWithError:(id)arg1 ;
-(void)syncDidCompleteSending;
-(void)setSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(unsigned long long)switchID;
-(id)initWithQueue:(id)arg1 supportsMigrationSync:(BOOL)arg2 ;
-(unsigned long long)syncSessionType;
-(void)setSwitchID:(unsigned long long)arg1 ;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
@end

