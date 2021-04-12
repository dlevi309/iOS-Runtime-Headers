/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SBSImplementer.h>

@protocol SBSAppleCareImplementer, SBSStereoLeaderRoleImplementer, SBSDebugInfoImplementer, SBSSystemImplementer, SBSCannedDemoServiceImplementer, SBSSysdiagnoseImplementer, SBSSettingsImplementer;
@class NSXPCListener, NSMutableArray, NSMutableSet, NSString;

@interface SBSServer : NSObject <NSXPCListenerDelegate, SBSImplementer> {

	NSXPCListener* _serverListener;
	NSMutableArray* _clients;
	NSMutableSet* _delegates;
	id<SBSAppleCareImplementer> _appleCareDelegate;
	id<SBSStereoLeaderRoleImplementer> _stereoLeaderDelegate;
	id<SBSDebugInfoImplementer> _debugInfoDelegate;
	id<SBSSystemImplementer> _systemDelegate;
	id<SBSCannedDemoServiceImplementer> _cannedDemoServerDelegate;
	id<SBSSysdiagnoseImplementer> _sysdiagnoseDelegate;
	id<SBSSettingsImplementer> _settingsDelegate;

}

@property (assign,nonatomic,__weak) id<SBSAppleCareImplementer> appleCareDelegate;                             //@synthesize appleCareDelegate=_appleCareDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSStereoLeaderRoleImplementer> stereoLeaderDelegate;                   //@synthesize stereoLeaderDelegate=_stereoLeaderDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSDebugInfoImplementer> debugInfoDelegate;                             //@synthesize debugInfoDelegate=_debugInfoDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSSystemImplementer> systemDelegate;                                   //@synthesize systemDelegate=_systemDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSCannedDemoServiceImplementer> cannedDemoServerDelegate;              //@synthesize cannedDemoServerDelegate=_cannedDemoServerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSSysdiagnoseImplementer> sysdiagnoseDelegate;                         //@synthesize sysdiagnoseDelegate=_sysdiagnoseDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSSettingsImplementer> settingsDelegate;                               //@synthesize settingsDelegate=_settingsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)reboot:(id)arg1 ;
-(void)handleClientDisconnection:(id)arg1 ;
-(void)setSettingsDelegate:(id<SBSSettingsImplementer>)arg1 ;
-(id<SBSSettingsImplementer>)settingsDelegate;
-(void)requestDeferredReboot;
-(void)setAppleCareIsEnabled:(BOOL)arg1 withOptions:(id)arg2 ;
-(void)setDeviceAsStereoLeader:(BOOL)arg1 withOptions:(id)arg2 ;
-(void)getAllDebugInfo:(/*^block*/id)arg1 ;
-(void)getTuningInfo:(/*^block*/id)arg1 ;
-(void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3 ;
-(void)playTone:(unsigned)arg1 ;
-(void)stopTone:(unsigned)arg1 ;
-(void)sysdiagnoseHasStarted:(BOOL)arg1 ;
-(void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)getUserDefaults:(/*^block*/id)arg1 ;
-(void)setUserDefaults:(id)arg1 withValue:(id)arg2 ;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg1 ;
-(void)homeKitSettingForKeyPathChanged:(id)arg1 updatedValue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deviceAttributeChanged:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<SBSAppleCareImplementer>)appleCareDelegate;
-(id<SBSSysdiagnoseImplementer>)sysdiagnoseDelegate;
-(void)findConnectionAndSetClientType:(unsigned long long)arg1 ;
-(id<SBSStereoLeaderRoleImplementer>)stereoLeaderDelegate;
-(id)_gatherXPCClientInfo:(id)arg1 ;
-(id<SBSDebugInfoImplementer>)debugInfoDelegate;
-(id<SBSSystemImplementer>)systemDelegate;
-(id<SBSCannedDemoServiceImplementer>)cannedDemoServerDelegate;
-(id)_processNameForPID:(int)arg1 ;
-(void)setAppleCareDelegate:(id<SBSAppleCareImplementer>)arg1 ;
-(void)setStereoLeaderDelegate:(id<SBSStereoLeaderRoleImplementer>)arg1 ;
-(void)setDebugInfoDelegate:(id<SBSDebugInfoImplementer>)arg1 ;
-(void)setSystemDelegate:(id<SBSSystemImplementer>)arg1 ;
-(void)setCannedDemoServerDelegate:(id<SBSCannedDemoServiceImplementer>)arg1 ;
-(void)setSysdiagnoseDelegate:(id<SBSSysdiagnoseImplementer>)arg1 ;
@end

