/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/RPCompanionLinkXPCClientInterface.h>
#import <libobjc.A.dylib/RPAuthenticatable.h>
#import <libobjc.A.dylib/RPMessageable.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSXPCConnection, RPCompanionLinkDevice, NSObject, NSDictionary, NSArray;

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable> {

	BOOL _activateCalled;
	NSMutableSet* _assertions;
	NSMutableDictionary* _deviceDictionary;
	NSMutableDictionary* _eventRegistrations;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableOrderedSet* _registeredProfileIDs;
	NSMutableDictionary* _requestRegistrations;
	NSXPCConnection* _xpcCnx;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	int _passwordType;
	int _passwordTypeActual;
	unsigned _flags;
	unsigned _clientID;
	unsigned _internalAuthFlags;
	NSString* _password;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _showPasswordHandler;
	/*^block*/id _hidePasswordHandler;
	/*^block*/id _promptForPasswordHandler;
	NSString* _appID;
	long long _bleClientUseCase;
	NSString* _cloudServiceID;
	unsigned long long _controlFlags;
	RPCompanionLinkDevice* _destinationDevice;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _serviceType;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	RPCompanionLinkDevice* _localDevice;
	/*^block*/id _localDeviceUpdatedHandler;
	NSDictionary* _siriInfo;

}

@property (nonatomic,readonly) NSDictionary * activeAccessoryDevicesSupportingAnnounce; 
@property (nonatomic,readonly) NSArray * activeDevicesSupportingAnnounce; 
@property (nonatomic,readonly) RPCompanionLinkDevice * pairedCompanion; 
@property (assign,nonatomic) unsigned clientID;                                                      //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) unsigned internalAuthFlags;                                           //@synthesize internalAuthFlags=_internalAuthFlags - In the implementation block
@property (retain) RPCompanionLinkDevice * localDevice;                                              //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,copy) NSString * appID;                                                         //@synthesize appID=_appID - In the implementation block
@property (assign,nonatomic) long long bleClientUseCase;                                             //@synthesize bleClientUseCase=_bleClientUseCase - In the implementation block
@property (nonatomic,copy) NSString * cloudServiceID;                                                //@synthesize cloudServiceID=_cloudServiceID - In the implementation block
@property (assign,nonatomic) unsigned long long controlFlags;                                        //@synthesize controlFlags=_controlFlags - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * destinationDevice;                              //@synthesize destinationDevice=_destinationDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                             //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) unsigned flags;                                                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                                   //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                   //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                                   //@synthesize serviceType=_serviceType - In the implementation block
@property (copy,readonly) NSArray * activeDevices; 
@property (readonly) RPCompanionLinkDevice * activePersonalCompanion; 
@property (nonatomic,copy) id deviceFoundHandler;                                                    //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                                     //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                                  //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,copy) id localDeviceUpdatedHandler;                                             //@synthesize localDeviceUpdatedHandler=_localDeviceUpdatedHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * siriInfo;                                                  //@synthesize siriInfo=_siriInfo - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                                //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                               //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (nonatomic,copy) NSString * password;                                                      //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) int passwordType;                                                       //@synthesize passwordType=_passwordType - In the implementation block
@property (nonatomic,readonly) int passwordTypeActual;                                               //@synthesize passwordTypeActual=_passwordTypeActual - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                                 //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id showPasswordHandler;                                                   //@synthesize showPasswordHandler=_showPasswordHandler - In the implementation block
@property (nonatomic,copy) id hidePasswordHandler;                                                   //@synthesize hidePasswordHandler=_hidePasswordHandler - In the implementation block
@property (nonatomic,copy) id promptForPasswordHandler;                                              //@synthesize promptForPasswordHandler=_promptForPasswordHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)activeAccessoryDevicesSupportingAnnounce;
-(NSArray *)activeDevicesSupportingAnnounce;
-(RPCompanionLinkDevice *)pairedCompanion;
-(void)setPasswordType:(int)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(RPCompanionLinkDevice *)localDevice;
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)tryPassword:(id)arg1 ;
-(int)passwordTypeActual;
-(id)promptForPasswordHandler;
-(int)passwordType;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(id)deviceChangedHandler;
-(unsigned long long)controlFlags;
-(unsigned)clientID;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(id)arg1 ;
-(void)_reregisterEvents;
-(void)setClientID:(unsigned)arg1 ;
-(id)deviceLostHandler;
-(void)_lostAllDevices;
-(void)_registerProfileID:(id)arg1 reregister:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 reactivate:(BOOL)arg2 ;
-(void)_invokeBlockActivateSafe:(/*^block*/id)arg1 ;
-(NSArray *)activeDevices;
-(id)init;
-(void)_registerRequestID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)appID;
-(unsigned)flags;
-(unsigned)pairVerifyFlags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)activateAssertionID:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)_ensureXPCStarted;
-(void)setServiceType:(NSString *)arg1 ;
-(void)companionLinkReceivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(id)description;
-(RPCompanionLinkDevice *)destinationDevice;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHidePasswordHandler:(id)arg1 ;
-(void)deregisterEventID:(id)arg1 ;
-(NSString *)cloudServiceID;
-(void)launchAppWithBundleID:(id)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_registerEventID:(id)arg1 options:(id)arg2 reregister:(BOOL)arg3 ;
-(void)_reregisterAssertions;
-(void)setDestinationDevice:(RPCompanionLinkDevice *)arg1 ;
-(void)_interrupted;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)hidePasswordHandler;
-(void)companionLinkReceivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 ;
-(BOOL)shouldReportDevice:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)companionLinkLostDevice:(id)arg1 ;
-(RPCompanionLinkDevice *)activePersonalCompanion;
-(void)launchAppWithURL:(id)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_invalidated;
-(void)setBleClientUseCase:(long long)arg1 ;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(id)authCompletionHandler;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)internalAuthFlags;
-(void)invalidate;
-(void)deregisterRequestID:(id)arg1 ;
-(void)setLocalDevice:(RPCompanionLinkDevice *)arg1 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)setCloudServiceID:(NSString *)arg1 ;
-(void)deregisterProfileID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateAssertion:(id)arg1 ;
-(void)setPromptForPasswordHandler:(id)arg1 ;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLocalDeviceUpdatedHandler:(id)arg1 ;
-(void)companionLinkAuthCompleted:(id)arg1 ;
-(void)companionLinkFoundDevice:(id)arg1 ;
-(void)registerProfileID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)serviceType;
-(id)localDeviceUpdatedHandler;
-(void)companionLinkLocalDeviceUpdated:(id)arg1 ;
-(void)setControlFlags:(unsigned long long)arg1 ;
-(unsigned)pairSetupFlags;
-(void)setSiriInfo:(NSDictionary *)arg1 ;
-(void)_reregisterRequests;
-(id)invalidationHandler;
-(void)companionLinkChangedDevice:(id)arg1 changes:(unsigned)arg2 ;
-(NSDictionary *)siriInfo;
-(void)setAppID:(NSString *)arg1 ;
-(id)showPasswordHandler;
-(id)interruptionHandler;
-(long long)bleClientUseCase;
-(void)setShowPasswordHandler:(id)arg1 ;
-(void)_reregisterProfileIDs;
-(void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned)arg2 throttleSeconds:(int)arg3 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

