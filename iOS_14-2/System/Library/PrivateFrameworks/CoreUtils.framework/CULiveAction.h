/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUXPCCodable.h>
#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class AVAudioSession, RPCompanionLinkClient, RPCompanionLinkDevice, NSObject, NSArray, CUHomeKitManager, NSString, NSMutableSet, NSMutableDictionary, NSURL;

@interface CULiveAction : NSObject <CUXPCCodable, CUActivatable> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	AVAudioSession* _audioSession;
	BOOL _clinkActivated;
	RPCompanionLinkClient* _clinkClient;
	RPCompanionLinkDevice* _clinkLocalDevice;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _destinationDevices;
	CUHomeKitManager* _homeKitManager;
	NSString* _homeKitSelfID;
	NSObject*<OS_dispatch_source> _homeKitTimer;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _peersActivated;
	BOOL _peersSetupDone;
	BOOL _peersPerformDone;
	NSMutableSet* _peerSessionSet;
	BOOL _performLocally;
	BOOL _prefStereoSpeak;
	NSMutableDictionary* _request;
	int _sessionState;
	BOOL _sentTimingInfo;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _xpcDone;
	BOOL _direct;
	int _alertType;
	/*^block*/id _invalidationHandler;
	NSArray* _destinationIDs;
	NSString* _originatingHomeKitAccessoryID;
	NSURL* _soundFileURL;
	NSString* _speakText;

}

@property (assign,nonatomic) int alertType;                                           //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSArray * destinationIDs;                                  //@synthesize destinationIDs=_destinationIDs - In the implementation block
@property (assign,nonatomic) BOOL direct;                                             //@synthesize direct=_direct - In the implementation block
@property (nonatomic,copy) NSString * originatingHomeKitAccessoryID;                  //@synthesize originatingHomeKitAccessoryID=_originatingHomeKitAccessoryID - In the implementation block
@property (nonatomic,copy) NSURL * soundFileURL;                                      //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,copy) NSString * speakText;                                      //@synthesize speakText=_speakText - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_run;
-(BOOL)direct;
-(int)alertType;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDirect:(BOOL)arg1 ;
-(void)_reportError:(id)arg1 where:(const char*)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setAlertType:(int)arg1 ;
-(void)_invalidated;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(NSURL *)soundFileURL;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)speakText;
-(void)_invalidate:(BOOL)arg1 ;
-(void)_runXPCStart;
-(void)_runHomeKitStart;
-(void)_runCLinkActivateStart;
-(BOOL)_runPrepareRequest;
-(void)_runCLinkActivateCompleted;
-(void)_runCLinkPeersActivateStart;
-(void)_runCLinkPeersSetupStart;
-(void)_runCLinkPeersPerformStart;
-(void)_runFinish;
-(NSArray *)destinationIDs;
-(id)_findStereoCounterpart:(id)arg1 ;
-(BOOL)_shouldPerformLocally;
-(void)setDestinationIDs:(NSArray *)arg1 ;
-(NSString *)originatingHomeKitAccessoryID;
-(void)setOriginatingHomeKitAccessoryID:(NSString *)arg1 ;
-(void)setSoundFileURL:(NSURL *)arg1 ;
-(void)setSpeakText:(NSString *)arg1 ;
@end

