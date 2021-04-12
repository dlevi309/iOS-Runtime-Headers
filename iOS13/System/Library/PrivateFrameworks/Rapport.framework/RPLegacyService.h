/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue;
#import <Rapport/Rapport-Structs.h>
@class NSMutableDictionary, NSObject, NSString, NSDictionary;

@interface RPLegacyService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _requestMap;
	BonjourAdvertiserPrivateRef _bonjourAdvertiser;
	int _listenerPort;
	int _tcpSockV4;
	int _tcpSockV6;
	unsigned char _deviceActionType;
	BOOL _needsSetup;
	unsigned _advertiseRate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _label;
	NSString* _serviceType;
	NSDictionary* _txtDictionary;
	/*^block*/id _errorHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _sessionStartedHandler;
	/*^block*/id _sessionEndedHandler;
	/*^block*/id _showPINHandler;
	/*^block*/id _hidePINHandler;

}

@property (assign,nonatomic) unsigned advertiseRate;                                  //@synthesize advertiseRate=_advertiseRate - In the implementation block
@property (assign,nonatomic) unsigned char deviceActionType;                          //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * label;                                        //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL needsSetup;                                         //@synthesize needsSetup=_needsSetup - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSDictionary * txtDictionary;                              //@synthesize txtDictionary=_txtDictionary - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id sessionStartedHandler;                                  //@synthesize sessionStartedHandler=_sessionStartedHandler - In the implementation block
@property (nonatomic,copy) id sessionEndedHandler;                                    //@synthesize sessionEndedHandler=_sessionEndedHandler - In the implementation block
@property (nonatomic,copy) id showPINHandler;                                         //@synthesize showPINHandler=_showPINHandler - In the implementation block
@property (nonatomic,copy) id hidePINHandler;                                         //@synthesize hidePINHandler=_hidePINHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_cleanup;
-(void)_invalidated;
-(BOOL)needsSetup;
-(void)setServiceType:(NSString *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setTxtDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)txtDictionary;
-(void)setDeviceActionType:(unsigned char)arg1 ;
-(id)showPINHandler;
-(void)setShowPINHandler:(id)arg1 ;
-(id)hidePINHandler;
-(void)setHidePINHandler:(id)arg1 ;
-(void)setNeedsSetup:(BOOL)arg1 ;
-(unsigned char)deviceActionType;
-(void)setAdvertiseRate:(unsigned)arg1 ;
-(void)setSessionStartedHandler:(id)arg1 ;
-(void)setSessionEndedHandler:(id)arg1 ;
-(id)sessionStartedHandler;
-(id)sessionEndedHandler;
-(unsigned)advertiseRate;
-(int)_tcpStart;
-(int)_bonjourUpdateService;
-(int)_bonjourUpdateTXT;
@end

