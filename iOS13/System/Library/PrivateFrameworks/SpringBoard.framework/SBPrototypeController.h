/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/PTUIClient.h>

@class NSXPCConnection, SBPrototypeDumpingGround, SBRootSettings, SBSStatusBarStyleOverridesAssertion, SBRestartManager, NSString;

@interface SBPrototypeController : NSObject <PTUIClient> {

	NSXPCConnection* _prototypingUIServerConnection;
	BOOL _hasActiveKeyHIDEventRouters;
	SBPrototypeDumpingGround* _dumpingGround;
	SBRootSettings* _rootSettings;
	SBSStatusBarStyleOverridesAssertion* _remotePrototypingAssertion;
	SBRestartManager* _restartManager;

}

@property (assign,nonatomic,__weak) SBRestartManager * restartManager;              //@synthesize restartManager=_restartManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)rootSettings;
-(BOOL)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_createConnection;
-(void)_sendEvent:(long long)arg1 ;
-(void)killSpringBoard;
-(void)setRestartManager:(SBRestartManager *)arg1 ;
-(BOOL)handleRingerSwitchEvent;
-(SBRestartManager *)restartManager;
-(void)restartSpringBoard;
-(BOOL)handleVolumeIncreaseEvent;
-(BOOL)handleVolumeDecreaseEvent;
-(void)_updateKeyHIDEventRouters;
-(void)_updateRemoteEditingState;
-(BOOL)_handlePrototypingEvent:(long long)arg1 ;
-(BOOL)_handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)_shouldSendEvent:(long long)arg1 ;
-(void)_acquireRemotePrototypingAssertion;
-(void)_invalidateRemotePrototypingAssertion;
@end

