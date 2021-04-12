/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Communications-iOS.feature/Communications-iOS
*/

#import <libobjc.A.dylib/ACCCommunicationsCenterCallStateDelegate.h>
#import <libobjc.A.dylib/ACCCommunicationsCenterCommunicationsDelegate.h>
#import <libobjc.A.dylib/ACCCommunicationsCenterCallControlsDelegate.h>
#import <libobjc.A.dylib/ACCCommunicationsCenterListUpdatesDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCCommunicationsCenter, NSObject, VMVoicemailManager, RadiosPreferences, CHManager, NSString;

@interface ACCCommunicationsFeaturePlugin : NSObject <ACCCommunicationsCenterCallStateDelegate, ACCCommunicationsCenterCommunicationsDelegate, ACCCommunicationsCenterCallControlsDelegate, ACCCommunicationsCenterListUpdatesDelegate, RadiosPreferencesDelegate, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCCommunicationsCenter* _commCenter;
	NSObject*<OS_dispatch_queue> _queue;
	VMVoicemailManager* _vmManager;
	RadiosPreferences* _radiosPreferences;
	CHManager* _chManager;

}

@property (assign,nonatomic) BOOL isRunning;                                     //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCCommunicationsCenter * commCenter;               //@synthesize commCenter=_commCenter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) VMVoicemailManager * vmManager;                     //@synthesize vmManager=_vmManager - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radiosPreferences;              //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (nonatomic,retain) CHManager * chManager;                              //@synthesize chManager=_chManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(id)currentAudioAndVideoCalls;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)isHoldAndAcceptAvailable;
-(void)commStatusDidChangeNotification:(id)arg1 ;
-(NSString *)pluginName;
-(id)currentRecentsListWithCoalescing:(BOOL)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)isCellularSupported;
-(id)currentCommunicationsStatus;
-(id)currentCarrierName;
-(BOOL)isFaceTimeVideoEnabled;
-(void)setChManager:(CHManager *)arg1 ;
-(id)currentFavoritesListWithLimit:(unsigned long long)arg1 ;
-(ACCCommunicationsCenter *)commCenter;
-(VMVoicemailManager *)vmManager;
-(void)favoritesListDidChangeNotification:(id)arg1 ;
-(void)airplaneModeChanged;
-(unsigned long long)currentUnreadVoicemailCount;
-(BOOL)currentMuteStatus;
-(BOOL)isHoldAvailable;
-(void)setCommCenter:(ACCCommunicationsCenter *)arg1 ;
-(BOOL)swapCalls;
-(id)currentCallStates;
-(NSString *)description;
-(BOOL)acceptCallWithAction:(int)arg1 callUUID:(id)arg2 ;
-(BOOL)updateMuteStatus:(BOOL)arg1 ;
-(BOOL)mergeCalls;
-(BOOL)isMergeAvailable;
-(BOOL)isTelephonyEnabled;
-(BOOL)isSwapAvailable;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(int)currentSignalStrength;
-(BOOL)endCallWithAction:(int)arg1 callUUID:(id)arg2 ;
-(int)currentRegistrationStatus;
-(CHManager *)chManager;
-(BOOL)isFaceTimeAudioEnabled;
-(BOOL)initiateCallToVoicemail;
-(BOOL)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3 ;
-(BOOL)isRunning;
-(BOOL)endAllCalls;
-(unsigned long long)currentCallCount;
-(BOOL)isInitiateCallAllowed;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stopPlugin;
-(void)removeNotificationObservers;
-(RadiosPreferences *)radiosPreferences;
-(void)initPlugin;
-(id)currentLocalizedCarrierName;
-(BOOL)initiateRedial;
-(BOOL)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2 ;
-(void)callStateDidChangeNotification:(id)arg1 ;
-(void)setVmManager:(VMVoicemailManager *)arg1 ;
-(BOOL)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2 ;
-(void)startPlugin;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addNotificationObservers;
-(void)callStateDidChangeForCall:(id)arg1 ;
-(BOOL)isEndAndAcceptAvailable;
-(void)recentsListDidChangeNotification:(id)arg1 ;
@end

