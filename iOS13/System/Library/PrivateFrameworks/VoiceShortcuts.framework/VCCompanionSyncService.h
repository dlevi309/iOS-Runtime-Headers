/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/VCCompanionSyncSessionDelegate.h>

@protocol VCCompanionSyncServiceDelegate, OS_dispatch_queue, VCSyncDataEndpoint;
@class SYService, NSObject, WFDebouncer, NSSet, VCCompanionSyncSession, VCNRDeviceSyncService, NSString;

@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate> {

	id<VCCompanionSyncServiceDelegate> _delegate;
	SYService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	id<VCSyncDataEndpoint> _syncDataEndpoint;
	WFDebouncer* _debouncer;
	NSSet* _currentDataHandlers;
	VCCompanionSyncSession* _currentSession;
	VCNRDeviceSyncService* _currentSyncService;

}

@property (nonatomic,readonly) SYService * service;                                           //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                       //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) WFDebouncer * debouncer;                                       //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,copy) NSSet * currentDataHandlers;                                       //@synthesize currentDataHandlers=_currentDataHandlers - In the implementation block
@property (nonatomic,retain) VCCompanionSyncSession * currentSession;                         //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,copy) VCNRDeviceSyncService * currentSyncService;                        //@synthesize currentSyncService=_currentSyncService - In the implementation block
@property (assign,nonatomic,__weak) id<VCCompanionSyncServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<VCCompanionSyncServiceDelegate>)delegate;
-(void)setDelegate:(id<VCCompanionSyncServiceDelegate>)arg1 ;
-(SYService *)service;
-(VCCompanionSyncSession *)currentSession;
-(void)requestSync;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3 ;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(void)resetSession;
-(void)requestFullResync;
-(void)companionSyncSession:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithSyncDataEndpoint:(id)arg1 ;
-(BOOL)isRunningOnWatch;
-(void)resumeServiceIfNecessary;
-(void)requestSyncImmediately;
-(void)updateSyncDataHandlers;
-(void)updateCurrentSyncServiceIfNecessary;
-(void)setCurrentSyncService:(VCNRDeviceSyncService *)arg1 ;
-(void)configureReasonForUnderlyingSession:(id)arg1 withSession:(id)arg2 ;
-(void)companionSyncSessionDidFinishSendingChanges:(id)arg1 ;
-(void)companionSyncSession:(id)arg1 didUpdateProgress:(double)arg2 ;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
-(WFDebouncer *)debouncer;
-(NSSet *)currentDataHandlers;
-(void)setCurrentDataHandlers:(NSSet *)arg1 ;
-(void)setCurrentSession:(VCCompanionSyncSession *)arg1 ;
-(VCNRDeviceSyncService *)currentSyncService;
@end

