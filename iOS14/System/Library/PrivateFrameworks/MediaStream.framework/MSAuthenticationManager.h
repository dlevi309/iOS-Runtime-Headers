/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@class MSAlertManager, ACAccountStore;

@interface MSAuthenticationManager : NSObject {

	int _state;
	MSAlertManager* _alertManager;
	ACAccountStore* _acAccountStore;
	int _bagRefetchCount;
	BOOL _isListeningToKeybagChanges;
	int _keybagChangeNotifyToken;

}

@property (assign,nonatomic) BOOL isListeningToKeybagChanges;                            //@synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges - In the implementation block
@property (assign,nonatomic) int keybagChangeNotifyToken;                                //@synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken - In the implementation block
@property (getter=isWaitingForAuth,nonatomic,readonly) BOOL waitingForAuth; 
+(id)sharedManager;
-(void)dealloc;
-(id)initWithAlertManager:(id)arg1 ;
-(void)_renewCredentialsForAccount:(id)arg1 ;
-(void)waitForDeviceUnlock;
-(void)didEncounterAuthenticationFailureForPersonID:(id)arg1 ;
-(void)_didReceiveAccountConfigChangedNotification;
-(void)didEncounterAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)rearmAuthenticationAlert;
-(BOOL)isWaitingForAuth;
-(BOOL)isListeningToKeybagChanges;
-(void)setIsListeningToKeybagChanges:(BOOL)arg1 ;
-(int)keybagChangeNotifyToken;
-(void)setKeybagChangeNotifyToken:(int)arg1 ;
@end

