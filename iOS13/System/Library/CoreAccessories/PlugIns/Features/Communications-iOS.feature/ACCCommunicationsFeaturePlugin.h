/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isRunning;
-(void)airplaneModeChanged;
-(BOOL)isAirplaneModeEnabled;
-(void)setIsRunning:(BOOL)arg1 ;
-(void)addNotificationObservers;
-(void)removeNotificationObservers;
-(unsigned long long)currentCallCount;
-(id)currentAudioAndVideoCalls;
-(BOOL)swapCalls;
-(RadiosPreferences *)radiosPreferences;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(BOOL)initiateCallToDestination:(id)arg1 withService:(int)arg2 addressBookID:(id)arg3 ;
-(BOOL)initiateCallToVoicemail;
-(BOOL)initiateRedial;
-(BOOL)acceptCallWithAction:(int)arg1 callUUID:(id)arg2 ;
-(BOOL)endCallWithAction:(int)arg1 callUUID:(id)arg2 ;
-(BOOL)endAllCalls;
-(BOOL)mergeCalls;
-(BOOL)updateHoldStatus:(BOOL)arg1 forCallWithUUID:(id)arg2 ;
-(BOOL)updateMuteStatus:(BOOL)arg1 ;
-(BOOL)sendDTMF:(int)arg1 forCallWithUUID:(id)arg2 ;
-(id)currentRecentsListWithCoalescing:(BOOL)arg1 limit:(unsigned long long)arg2 ;
-(id)currentFavoritesListWithLimit:(unsigned long long)arg1 ;
-(id)currentCallStates;
-(id)currentCommunicationsStatus;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(void)setCommCenter:(ACCCommunicationsCenter *)arg1 ;
-(void)setVmManager:(VMVoicemailManager *)arg1 ;
-(void)setChManager:(CHManager *)arg1 ;
-(ACCCommunicationsCenter *)commCenter;
-(void)callStateDidChangeNotification:(id)arg1 ;
-(void)commStatusDidChangeNotification:(id)arg1 ;
-(void)recentsListDidChangeNotification:(id)arg1 ;
-(void)favoritesListDidChangeNotification:(id)arg1 ;
-(void)callStateDidChangeForCall:(id)arg1 ;
-(id)currentLocalizedCarrierName;
-(int)currentSignalStrength;
-(int)currentRegistrationStatus;
-(BOOL)currentMuteStatus;
-(VMVoicemailManager *)vmManager;
-(BOOL)isInitiateCallAllowed;
-(BOOL)isEndAndAcceptAvailable;
-(BOOL)isHoldAndAcceptAvailable;
-(BOOL)isSwapAvailable;
-(BOOL)isMergeAvailable;
-(BOOL)isHoldAvailable;
-(BOOL)isCellularSupported;
-(BOOL)isTelephonyEnabled;
-(BOOL)isFaceTimeAudioEnabled;
-(BOOL)isFaceTimeVideoEnabled;
-(unsigned long long)currentUnreadVoicemailCount;
-(id)currentCarrierName;
-(CHManager *)chManager;
@end

