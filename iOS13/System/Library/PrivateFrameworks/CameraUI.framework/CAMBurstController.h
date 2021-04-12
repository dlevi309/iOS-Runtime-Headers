/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSCountedSet, CAMBurstSession, CAMPersistenceController, CAMProtectionController, CAMPowerController, CAMRemoteShutterController, NSString;

@interface CAMBurstController : NSObject {

	NSObject*<OS_dispatch_queue> __mutexQueue;
	NSMutableDictionary* __sessionsByIdentifier;
	NSCountedSet* __inflightRequestsByIdentifier;
	NSCountedSet* __requestsPendingPersistenceByIdentifier;
	NSMutableDictionary* __faceResultsByIdentifier;
	CAMBurstSession* __activeSession;
	NSObject*<OS_dispatch_queue> __analysisQueue;
	CAMPersistenceController* __persistenceController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMRemoteShutterController* __remoteShutterController;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _mutexQueue;                              //@synthesize _mutexQueue=__mutexQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionsByIdentifier;                           //@synthesize _sessionsByIdentifier=__sessionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inflightRequestsByIdentifier;                          //@synthesize _inflightRequestsByIdentifier=__inflightRequestsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _requestsPendingPersistenceByIdentifier;                //@synthesize _requestsPendingPersistenceByIdentifier=__requestsPendingPersistenceByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _faceResultsByIdentifier;                        //@synthesize _faceResultsByIdentifier=__faceResultsByIdentifier - In the implementation block
@property (setter=_setActiveSession:,nonatomic,retain) CAMBurstSession * _activeSession;              //@synthesize _activeSession=__activeSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _analysisQueue;                           //@synthesize _analysisQueue=__analysisQueue - In the implementation block
@property (nonatomic,__weak,readonly) CAMPersistenceController * _persistenceController;              //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                       //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                 //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * _remoteShutterController;                 //@synthesize _remoteShutterController=__remoteShutterController - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentBurstIdentifier; 
@property (nonatomic,readonly) unsigned long long currentBurstCount; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(void)setPersistenceController:(id)arg1 ;
-(CAMPersistenceController *)_persistenceController;
-(NSMutableDictionary *)_sessionsByIdentifier;
-(CAMPowerController *)_powerController;
-(CAMBurstSession *)_activeSession;
-(CAMRemoteShutterController *)_remoteShutterController;
-(CAMProtectionController *)_protectionController;
-(void)processPersistedRequest:(id)arg1 withResult:(id)arg2 ;
-(unsigned long long)estimatedCountForIdentifier:(id)arg1 ;
-(NSString *)currentBurstIdentifier;
-(void)processEnqueuedRequest:(id)arg1 ;
-(unsigned long long)currentBurstCount;
-(id)startBurstCapture;
-(void)finishBurstCaptureForDevice:(long long)arg1 ;
-(void)processCapturedRequest:(id)arg1 withResult:(id)arg2 ;
-(void)processFaceResults:(id)arg1 ;
-(id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3 ;
-(void)_setActiveSession:(id)arg1 ;
-(NSCountedSet *)_requestsPendingPersistenceByIdentifier;
-(NSMutableDictionary *)_faceResultsByIdentifier;
-(NSObject*<OS_dispatch_queue>)_analysisQueue;
-(void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2 ;
-(NSCountedSet *)_inflightRequestsByIdentifier;
-(void)cancelBurstCapture;
-(unsigned long long)inflightCountForIdentifier:(id)arg1 ;
@end

