/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@protocol CARSessionDelegate;
#import <CarKit/CarKit-Structs.h>
@class CARSessionConfiguration, NSData, CARInputDeviceManager, NSNumber, CARObserverHashTable, NSDictionary, NSString;

@interface CARSession : NSObject {

	OpaqueFigEndpointRef _endpoint;
	BOOL _authenticated;
	BOOL _requiresCarCapabilitiesValues;
	int _nightFallbackNotifyToken;
	CARSessionConfiguration* _configuration;
	id<CARSessionDelegate> _sessionDelegate;
	NSData* _MFiCertificateSerialNumber;
	CARInputDeviceManager* _inputDeviceManager;
	NSNumber* _fallbackNightMode;
	CARObserverHashTable* _observers;

}

@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;                      //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,nonatomic,__weak) id<CARSessionDelegate> sessionDelegate;                    //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSData * MFiCertificateSerialNumber;                       //@synthesize MFiCertificateSerialNumber=_MFiCertificateSerialNumber - In the implementation block
@property (nonatomic,retain) CARInputDeviceManager * inputDeviceManager;                       //@synthesize inputDeviceManager=_inputDeviceManager - In the implementation block
@property (nonatomic,retain) NSNumber * fallbackNightMode;                                     //@synthesize fallbackNightMode=_fallbackNightMode - In the implementation block
@property (assign,nonatomic) int nightFallbackNotifyToken;                                     //@synthesize nightFallbackNotifyToken=_nightFallbackNotifyToken - In the implementation block
@property (nonatomic,retain) CARObserverHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL requiresCarCapabilitiesValues;                               //@synthesize requiresCarCapabilitiesValues=_requiresCarCapabilitiesValues - In the implementation block
@property (nonatomic,readonly) CARSessionConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,copy,readonly) NSNumber * electronicTollCollectionAvailable; 
@property (nonatomic,copy,readonly) NSNumber * nightMode; 
@property (nonatomic,copy,readonly) NSNumber * limitUserInterfaces; 
@property (nonatomic,copy,readonly) NSDictionary * APEndPointInfo; 
@property (nonatomic,copy,readonly) NSString * sourceVersion; 
+(long long)_siriRequestEventForEndpointAction:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(OpaqueFigEndpointRef)endpoint;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(CARSessionConfiguration *)configuration;
-(BOOL)isAuthenticated;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(CARObserverHashTable *)observers;
-(CARInputDeviceManager *)inputDeviceManager;
-(NSNumber *)nightMode;
-(void)setInputMode:(unsigned long long)arg1 forInputDevice:(id)arg2 ;
-(NSNumber *)limitUserInterfaces;
-(void)setSessionDelegate:(id<CARSessionDelegate>)arg1 ;
-(NSString *)sourceVersion;
-(BOOL)isPaired;
-(BOOL)recognizingSpeech;
-(NSData *)MFiCertificateSerialNumber;
-(void)requestCarUI;
-(void)requestCarUIForURL:(id)arg1 ;
-(id)borrowScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForConnection;
-(void)sendCommand:(id)arg1 withParameters:(id)arg2 ;
-(void)_performExtendedEndpointAction:(/*^block*/id)arg1 ;
-(void)_newObserverAdded:(id)arg1 ;
-(void)_fetchAuthenticationStatus;
-(void)_updateConfiguration;
-(void)_handleViewAreaChangeWithPayload:(id)arg1 ;
-(void)_updateScreenInfo:(id)arg1 currentViewAreaToViewArea:(id)arg2 duration:(double)arg3 transitionControlType:(unsigned long long)arg4 ;
-(void)_fetchFallbackIsNightWithToken:(int)arg1 ;
-(NSNumber *)electronicTollCollectionAvailable;
-(id)_capabilitiesIdentifier;
-(BOOL)requiresCarCapabilitiesValues;
-(void)setRequiresCarCapabilitiesValues:(BOOL)arg1 ;
-(id)_endpointValueForKey:(CFStringRef)arg1 ;
-(id)systemNightMode;
-(NSNumber *)fallbackNightMode;
-(void)setFallbackNightMode:(NSNumber *)arg1 ;
-(void)_setEndpointValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(id)lastNavigatingBundleIdentifier;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 requiresCarCapabilities:(BOOL)arg2 ;
-(id)_fig_safe_description;
-(NSDictionary *)APEndPointInfo;
-(void)_handleOpenURL:(id)arg1 ;
-(void)_handleSiriRequestEvent:(long long)arg1 withPayload:(id)arg2 ;
-(void)requestAdjacentViewAreaForScreenID:(id)arg1 ;
-(void)_handleShowUIWithParameters:(id)arg1 ;
-(void)_handleStopUIWithParameters:(id)arg1 ;
-(void)setSiriForwardingEnabled:(BOOL)arg1 ;
-(BOOL)carOwnsScreen;
-(BOOL)carOwnsMainAudio;
-(unsigned long long)navigationOwner;
-(void)requestTurnByTurnOwnership;
-(void)releaseTurnByTurnOwnership;
-(void)unborrowScreenForToken:(id)arg1 ;
-(void)suggestUI:(id)arg1 ;
-(id<CARSessionDelegate>)sessionDelegate;
-(void)setInputDeviceManager:(CARInputDeviceManager *)arg1 ;
-(int)nightFallbackNotifyToken;
-(void)setNightFallbackNotifyToken:(int)arg1 ;
@end

