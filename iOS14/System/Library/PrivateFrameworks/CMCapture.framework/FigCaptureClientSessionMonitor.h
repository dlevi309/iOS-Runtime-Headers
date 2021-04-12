/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@class NSString, NSArray, FigCaptureDisplayLayoutMonitor;

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver> {

	/*^block*/id _applicationAndLayoutStateHandler;
	/*^block*/id _interruptionHandler;
	opaqueCMSessionRef _session;
	SCD_Struct_Fi80 _clientAuditToken;
	int _pid;
	NSString* _applicationID;
	BOOL _isForThirdPartyTorch;
	NSArray* _avconferenceClientApplicationIDs;
	BOOL _clientCanInheritApplicationState;
	int _pidToInheritAppStateFrom;
	unsigned _bksApplicationState;
	BOOL _bksApplicationStateInitialized;
	NSString* _cachedApplicationIDToInheritAppStateFrom;
	NSString* _extensionHostApplicationID;
	OpaqueFigSimpleMutexRef _stateChangeLock;
	OpaqueFigSimpleMutexRef _sessionLock;
	int _applicationState;
	int _layoutState;
	BOOL _layoutStateInitialized;
	id _applicationStateChangeNotificationToken;
	id _interruptionStateChangeNotificationToken;
	BOOL _invalid;
	BOOL _haveExternalCMSession;
	int _clientType;
	FigCaptureDisplayLayoutMonitor* _displayLayoutMonitor;

}

@property (nonatomic,readonly) opaqueCMSessionRef session;              //@synthesize session=_session - In the implementation block
@property (readonly) NSString * applicationID; 
@property (readonly) int applicationState; 
@property (readonly) int clientType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)_isSupportedExtensionClientType:(int)arg1 ;
+(int)_applicationStateForBKSApplicationState:(unsigned)arg1 clientType:(int)arg2 ;
+(id)_stringForClientLayoutState:(int)arg1 ;
+(void)stopPrewarmingMonitor;
+(void)startPrewarmingMonitorWithHandler:(/*^block*/id)arg1 ;
+(int)_applicationStateForClientLayoutState:(int)arg1 clientType:(int)arg2 ;
+(id)_stringForApplicationState:(int)arg1 ;
+(id)_stringForClientType:(int)arg1 ;
+(id)_stringForBKSApplicationState:(unsigned)arg1 ;
-(int)applicationState;
-(NSString *)applicationID;
-(BOOL)_isDisplayLayoutMonitoringRequiredForClient;
-(int)observeSession:(opaqueCMSessionRef)arg1 ;
-(int)_resolveApplicationState;
-(id)initWithAVConferenceClientApplicationIDs:(id)arg1 applicationAndLayoutStateHandler:(/*^block*/id)arg2 interruptionHandler:(/*^block*/id)arg3 ;
-(void)_handleAudioInterruptionChange:(int)arg1 ;
-(NSString *)debugDescription;
-(opaqueCMSessionRef)session;
-(void)_deregisterAndReleaseCMSession;
-(BOOL)_isApplicationStateMonitoringRequiredForClient;
-(NSString *)description;
-(void)_handleApplicationStateChange:(unsigned)arg1 ;
-(BOOL)_isCMSessionInterruptionObservingRequiredForClient;
-(id)initWithClientAuditToken:(SCD_Struct_Fi80)arg1 forThirdPartyTorch:(BOOL)arg2 applicationAndLayoutStateHandler:(/*^block*/id)arg3 interruptionHandler:(/*^block*/id)arg4 ;
-(void)_updateApplicationState;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3 transitioningApps:(id)arg4 pipApps:(id)arg5 ;
-(void)invalidate;
-(void)_setUpApplicationInfo;
-(int)clientType;
-(id)_resolveApplicationID;
-(void)_updateClientStateCondition:(void*)arg1 newValue:(id)arg2 ;
-(id)_initWithClientAuditToken:(SCD_Struct_Fi80)arg1 forThirdPartyTorch:(BOOL)arg2 avconferenceClientApplicationIDs:(id)arg3 applicationAndLayoutStateHandler:(/*^block*/id)arg4 interruptionHandler:(/*^block*/id)arg5 ;
-(int)_registerCMSessionForObservation;
-(id)loggingPrefix;
-(int)_createAndObserveCMSession;
-(void)dealloc;
-(void)_handleCMSessionManagerNofification:(id)arg1 ;
@end

