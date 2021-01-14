/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <CarKit/CarKit-Structs.h>
#import <libobjc.A.dylib/CARAppearanceManagerDelegate.h>

@class CARSessionConfiguration, NSData, CARInputDeviceManager, NSNumber, CARObserverHashTable, CARAppearanceManager, NSString;

@interface CARSession : NSObject <CARAppearanceManagerDelegate> {

	OpaqueFigEndpointRef _endpoint;
	BOOL _authenticated;
	BOOL _clientIsCarPlayShell;
	BOOL _requiresCarCapabilitiesValues;
	int _nightFallbackNotifyToken;
	CARSessionConfiguration* _configuration;
	NSData* _MFiCertificateSerialNumber;
	CARInputDeviceManager* _inputDeviceManager;
	NSNumber* _systemNightMode;
	NSNumber* _fallbackNightMode;
	CARObserverHashTable* _observers;
	CARAppearanceManager* _appearanceManager;

}

@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;                      //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,copy,readonly) NSData * MFiCertificateSerialNumber;                       //@synthesize MFiCertificateSerialNumber=_MFiCertificateSerialNumber - In the implementation block
@property (nonatomic,retain) CARInputDeviceManager * inputDeviceManager;                       //@synthesize inputDeviceManager=_inputDeviceManager - In the implementation block
@property (nonatomic,retain) NSNumber * systemNightMode;                                       //@synthesize systemNightMode=_systemNightMode - In the implementation block
@property (nonatomic,retain) NSNumber * fallbackNightMode;                                     //@synthesize fallbackNightMode=_fallbackNightMode - In the implementation block
@property (assign,nonatomic) int nightFallbackNotifyToken;                                     //@synthesize nightFallbackNotifyToken=_nightFallbackNotifyToken - In the implementation block
@property (nonatomic,retain) CARObserverHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL clientIsCarPlayShell;                                      //@synthesize clientIsCarPlayShell=_clientIsCarPlayShell - In the implementation block
@property (assign,nonatomic) BOOL requiresCarCapabilitiesValues;                               //@synthesize requiresCarCapabilitiesValues=_requiresCarCapabilitiesValues - In the implementation block
@property (nonatomic,retain) CARAppearanceManager * appearanceManager;                         //@synthesize appearanceManager=_appearanceManager - In the implementation block
@property (nonatomic,readonly) CARSessionConfiguration * configuration;                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,copy,readonly) NSNumber * electronicTollCollectionAvailable; 
@property (nonatomic,copy,readonly) NSNumber * nightMode; 
@property (nonatomic,copy,readonly) NSNumber * limitUserInterfaces; 
@property (nonatomic,copy,readonly) NSString * sourceVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stringForNightModeNumber:(id)arg1 ;
+(long long)_siriRequestEventForEndpointAction:(id)arg1 ;
-(BOOL)isPaired;
-(BOOL)isAuthenticated;
-(void)addObserver:(id)arg1 ;
-(CARObserverHashTable *)observers;
-(BOOL)clientIsCarPlayShell;
-(NSString *)sourceVersion;
-(OpaqueFigEndpointRef)endpoint;
-(NSNumber *)nightMode;
-(NSNumber *)limitUserInterfaces;
-(BOOL)carOwnsScreen;
-(long long)_carUserInterfaceStyleForAppearanceMode:(unsigned long long)arg1 ;
-(void)appearanceManager:(id)arg1 didUpdateUIAppearanceStyle:(long long)arg2 forScreenUUIDs:(id)arg3 ;
-(void)appearanceManager:(id)arg1 didUpdateMapAppearanceStyle:(long long)arg2 forScreenUUIDs:(id)arg3 ;
-(void)setInputMode:(unsigned long long)arg1 forInputDevice:(id)arg2 ;
-(void)_newObserverAdded:(id)arg1 ;
-(NSString *)description;
-(void)_performExtendedEndpointAction:(/*^block*/id)arg1 ;
-(id)_endpointValueForKey:(CFStringRef)arg1 ;
-(CARSessionConfiguration *)configuration;
-(void)_fetchAuthenticationStatus;
-(void)_fetchFallbackIsNightWithToken:(int)arg1 ;
-(NSNumber *)fallbackNightMode;
-(NSNumber *)systemNightMode;
-(void)_handleViewAreaChangeWithPayload:(id)arg1 ;
-(NSNumber *)electronicTollCollectionAvailable;
-(id)_capabilitiesIdentifier;
-(void)_updateScreenInfo:(id)arg1 currentViewAreaToViewArea:(id)arg2 duration:(double)arg3 transitionControlType:(unsigned long long)arg4 ;
-(BOOL)requiresCarCapabilitiesValues;
-(void)setRequiresCarCapabilitiesValues:(BOOL)arg1 ;
-(CARAppearanceManager *)appearanceManager;
-(void)setFallbackNightMode:(NSNumber *)arg1 ;
-(void)_handleNightModeChange;
-(id)_fig_safe_description;
-(void)_setEndpointValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(id)lastNavigatingBundleIdentifier;
-(id)initWithFigEndpoint:(OpaqueFigEndpointRef)arg1 clientIsCarPlayShell:(BOOL)arg2 ;
-(id)APEndPointInfo;
-(void)requestCarUI;
-(long long)userInterfaceStyleForScreenUUID:(id)arg1 ;
-(long long)mapInterfaceStyleForScreenUUID:(id)arg1 ;
-(void)_handleAppearanceModeUpdateWithParameters:(id)arg1 ;
-(void)_handleMapAppearanceModeUpdateWithParameters:(id)arg1 ;
-(void)_handleOpenURL:(id)arg1 ;
-(void)_handleSiriRequestEvent:(long long)arg1 withPayload:(id)arg2 ;
-(BOOL)carOwnsMainAudio;
-(void)requestAdjacentViewAreaForScreenID:(id)arg1 ;
-(void)_handleShowUIWithParameters:(id)arg1 ;
-(void)_handleStopUIWithParameters:(id)arg1 ;
-(void)setSiriForwardingEnabled:(BOOL)arg1 ;
-(unsigned long long)navigationOwner;
-(void)requestTurnByTurnOwnership;
-(void)releaseTurnByTurnOwnership;
-(void)unborrowScreenForToken:(id)arg1 ;
-(void)suggestUI:(id)arg1 ;
-(void)setCornerMaskImageData:(id)arg1 forScreenInfo:(id)arg2 ;
-(void)setInputDeviceManager:(CARInputDeviceManager *)arg1 ;
-(void)setSystemNightMode:(NSNumber *)arg1 ;
-(int)nightFallbackNotifyToken;
-(void)setNightFallbackNotifyToken:(int)arg1 ;
-(void)setAppearanceManager:(CARAppearanceManager *)arg1 ;
-(void)_updateConfiguration;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(BOOL)recognizingSpeech;
-(void)requestCarUIForURL:(id)arg1 ;
-(NSData *)MFiCertificateSerialNumber;
-(void)takeScreenForConnection;
-(id)borrowScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)takeScreenForClient:(id)arg1 reason:(id)arg2 ;
-(void)sendCommand:(id)arg1 withParameters:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(CARInputDeviceManager *)inputDeviceManager;
-(void)dealloc;
@end

