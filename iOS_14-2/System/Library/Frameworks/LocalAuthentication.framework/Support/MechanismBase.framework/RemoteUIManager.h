/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/LARemoteUIHost.h>

@protocol LAUIMechanismLARemoteUIHost;
@class MechanismBase, SBSRemoteAlertHandle, NSString;

@interface RemoteUIManager : NSObject <SBSRemoteAlertHandleObserver, LARemoteUIHost> {

	MechanismBase*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	/*^block*/id _pendingShowUiReply;
	/*^block*/id _pendingUiActivationBlock;
	id _pendingUiMechanism;
	id _dismissingUi;
	BOOL _uiDismissedBeforeConnection;
	int _showUiCounter;
	int _dismissUiCounter;
	BOOL _remoteAlertWasInvalidated;
	SBSRemoteAlertHandle* _activatingHandle;
	SBSRemoteAlertHandle* _activeHandle;

}

@property (assign,nonatomic,__weak) SBSRemoteAlertHandle * activatingHandle;              //@synthesize activatingHandle=_activatingHandle - In the implementation block
@property (assign,nonatomic,__weak) SBSRemoteAlertHandle * activeHandle;                  //@synthesize activeHandle=_activeHandle - In the implementation block
@property (assign,nonatomic) BOOL remoteAlertWasInvalidated;                              //@synthesize remoteAlertWasInvalidated=_remoteAlertWasInvalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(SBSRemoteAlertHandle *)activeHandle;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)setActiveHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)_assignPendingMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_activatePlatformUIWithParams:(id)arg1 ;
-(void)_setupUiActivationTimeout;
-(void)_activateUi;
-(void)setActivatingHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)setRemoteAlertWasInvalidated:(BOOL)arg1 ;
-(SBSRemoteAlertHandle *)activatingHandle;
-(void)_replyOnceToShowUi:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)remoteAlertWasInvalidated;
-(void)showUIWithParams:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectionToViewServiceInvalidated;
-(void)dismissRemoteUI:(id)arg1 uiMechanism:(id)arg2 uiDisappeared:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
@end

