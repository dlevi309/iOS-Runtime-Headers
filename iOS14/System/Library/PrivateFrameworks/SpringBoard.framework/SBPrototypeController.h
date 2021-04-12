/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRestartManager:(SBRestartManager *)arg1 ;
-(void)_sendEvent:(long long)arg1 ;
-(id)init;
-(void)_updateKeyHIDEventRouters;
-(id)rootSettings;
-(SBRestartManager *)restartManager;
-(BOOL)_handlePrototypingEvent:(long long)arg1 ;
-(BOOL)handleVolumeIncreaseEvent;
-(void)killSpringBoard;
-(void)_acquireRemotePrototypingAssertion;
-(void)restartSpringBoard;
-(BOOL)handleRingerSwitchEvent;
-(BOOL)handleVolumeDecreaseEvent;
-(BOOL)_shouldSendEvent:(long long)arg1 ;
-(void)_updateRemoteEditingState;
-(BOOL)_handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_invalidateRemotePrototypingAssertion;
-(BOOL)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_createConnection;
@end

