/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CAMPowerController *)_powerController;
-(CAMRemoteShutterController *)_remoteShutterController;
-(void)processPersistedRequest:(id)arg1 withResult:(id)arg2 ;
-(void)setPersistenceController:(id)arg1 ;
-(id)init;
-(CAMBurstSession *)_activeSession;
-(CAMProtectionController *)_protectionController;
-(id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3 ;
-(void)cancelBurstCapture;
-(NSString *)currentBurstIdentifier;
-(unsigned long long)inflightCountForIdentifier:(id)arg1 ;
-(void)processEnqueuedRequest:(id)arg1 ;
-(NSMutableDictionary *)_faceResultsByIdentifier;
-(NSCountedSet *)_inflightRequestsByIdentifier;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(CAMPersistenceController *)_persistenceController;
-(void)finishBurstCaptureForDevice:(long long)arg1 ;
-(NSMutableDictionary *)_sessionsByIdentifier;
-(unsigned long long)currentBurstCount;
-(void)processFaceResults:(id)arg1 ;
-(NSCountedSet *)_requestsPendingPersistenceByIdentifier;
-(void)processCapturedRequest:(id)arg1 withResult:(id)arg2 ;
-(unsigned long long)estimatedCountForIdentifier:(id)arg1 ;
-(void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2 ;
-(void)_setActiveSession:(id)arg1 ;
-(id)startBurstCapture;
-(NSObject*<OS_dispatch_queue>)_analysisQueue;
@end

