/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/AUAudioUnitXPCProtocol.h>

@protocol OS_voucher, OS_dispatch_queue, OS_dispatch_source;
@class AUAudioUnit, NSXPCConnection, NSObject, AUParameterTree, NSMutableArray, AUAudioUnitViewService;

@interface AURemoteExtensionContext : NSExtensionContext <AUAudioUnitXPCProtocol> {

	AUAudioUnit* _audioUnit;
	BOOL _isUIExtension;
	AudioComponentDescription _componentDescription;
	NSXPCConnection* _remoteHostXPCConnection;
	AUExtRenderingServer* _renderServer;
	NSObject*<OS_voucher> _initializationVoucher;
	AUParameterTree* _cachedParameterTree;
	reply_watchdog_factory* _replyWatchdogFactory;
	NSObject*<OS_dispatch_queue> _presetMonitoringQueue;
	NSObject*<OS_dispatch_source> _presetFolderWatcher;
	BOOL _isRunningInProcess;
	NSMutableArray* _userPresets;
	int _deferPropertyChangeNotifications;
	AUAudioUnitViewService* _viewService;
	NSObject*<OS_dispatch_queue> _propertyObserverQueue;
	NSMutableArray* _pendingChangedProperties;

}

@property (assign,nonatomic) AUAudioUnitViewService * viewService;                              //@synthesize viewService=_viewService - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyObserverQueue;              //@synthesize propertyObserverQueue=_propertyObserverQueue - In the implementation block
@property (assign,nonatomic) int deferPropertyChangeNotifications;                              //@synthesize deferPropertyChangeNotifications=_deferPropertyChangeNotifications - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingChangedProperties;                       //@synthesize pendingChangedProperties=_pendingChangedProperties - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset:(/*^block*/id)arg1 ;
-(void)open:(/*^block*/id)arg1 ;
-(void)close:(/*^block*/id)arg1 ;
-(void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)getBusses:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)initialize:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)setWorkIntervalPort:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)uninitialize:(/*^block*/id)arg1 ;
-(void)setBusFormat:(unsigned)arg1 scope:(unsigned)arg2 format:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)valueForProperty:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)valueForKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getParameterTree:(/*^block*/id)arg1 ;
-(void)getParameter:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)parameterStringFromValue:(float)arg1 currentValue:(BOOL)arg2 address:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)parametersForOverviewWithCount:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)supportedViewConfigurations:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)selectViewConfiguration:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(/*^block*/id)arg3 ;
-(void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(/*^block*/id)arg4 ;
-(void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(/*^block*/id)arg4 ;
-(void)loadUserPresets:(/*^block*/id)arg1 ;
-(void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deleteUserPreset:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)presetStateFor:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getBus:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)_identifyBus:(id)arg1 scope:(unsigned*)arg2 element:(unsigned*)arg3 ;
-(id)iOSViewController;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setBusName:(unsigned)arg1 scope:(unsigned)arg2 name:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)currentParameterTree;
-(id)_fetchAndClearPendingChangedProperties;
-(void)startUserPresetFolderMonitoring;
-(AUAudioUnitViewService *)viewService;
-(void)setViewService:(AUAudioUnitViewService *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyObserverQueue;
-(int)deferPropertyChangeNotifications;
-(void)setDeferPropertyChangeNotifications:(int)arg1 ;
-(NSMutableArray *)pendingChangedProperties;
@end

