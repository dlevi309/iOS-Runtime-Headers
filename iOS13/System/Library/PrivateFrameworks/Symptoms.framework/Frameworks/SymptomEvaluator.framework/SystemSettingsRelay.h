/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyShimDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, SDRDiagnosticReporter, NSObject, NSString;

@interface SystemSettingsRelay : NSObject <CoreTelephonyShimDelegate> {

	CTServerConnectionRef _serverConnection;
	BOOL _wifiEnabled;
	BOOL _airplaneModeSwitchEnabled;
	BOOL _cellDataSwitchEnabled;
	BOOL _rnfEnabled;
	BOOL _noBackhaulEnabled;
	BOOL _autoBugCaptureEnabled;
	BOOL _autoFeedbackAssistantEnable;
	BOOL _autoBugCaptureAvailable;
	BOOL _registeredForAutoBugCaptureChangeNotifications;
	NSDictionary* _autoBugCaptureConfiguration;
	SDRDiagnosticReporter* _collectorClient;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSDictionary * autoBugCaptureConfiguration;                       //@synthesize autoBugCaptureConfiguration=_autoBugCaptureConfiguration - In the implementation block
@property (nonatomic,retain) SDRDiagnosticReporter * collectorClient;                          //@synthesize collectorClient=_collectorClient - In the implementation block
@property (assign,nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications;              //@synthesize registeredForAutoBugCaptureChangeNotifications=_registeredForAutoBugCaptureChangeNotifications - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                               //@synthesize queue=_queue - In the implementation block
@property (readonly) BOOL wifiEnabled;                                                         //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (readonly) BOOL airplaneModeSwitchEnabled;                                           //@synthesize airplaneModeSwitchEnabled=_airplaneModeSwitchEnabled - In the implementation block
@property (readonly) BOOL cellDataSwitchEnabled;                                               //@synthesize cellDataSwitchEnabled=_cellDataSwitchEnabled - In the implementation block
@property (readonly) BOOL rnfEnabled;                                                          //@synthesize rnfEnabled=_rnfEnabled - In the implementation block
@property (readonly) BOOL noBackhaulEnabled;                                                   //@synthesize noBackhaulEnabled=_noBackhaulEnabled - In the implementation block
@property (readonly) BOOL autoBugCaptureEnabled;                                               //@synthesize autoBugCaptureEnabled=_autoBugCaptureEnabled - In the implementation block
@property (readonly) BOOL autoFeedbackAssistantEnable;                                         //@synthesize autoFeedbackAssistantEnable=_autoFeedbackAssistantEnable - In the implementation block
@property (readonly) BOOL autoBugCaptureAvailable;                                             //@synthesize autoBugCaptureAvailable=_autoBugCaptureAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultRelay;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)wifiEnabled;
-(void)registerForAutoBugCaptureChangeNotifications;
-(BOOL)autoBugCaptureEnabled;
-(BOOL)autoFeedbackAssistantEnable;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(void)rnfSettingChangedToFeatureEnabled:(BOOL)arg1 userEnabled:(BOOL)arg2 ;
-(BOOL)rnfEnabled;
-(NSDictionary *)autoBugCaptureConfiguration;
-(BOOL)autoBugCaptureAvailable;
-(BOOL)airplaneModeSwitchEnabled;
-(BOOL)cellDataSwitchEnabled;
-(void)_setAirplaneModeSwitchEnabled:(BOOL)arg1 ;
-(void)_setWifiEnabled:(BOOL)arg1 ;
-(void)_setCellDataSwitchEnabled:(BOOL)arg1 ;
-(void)_setRnfEnabled:(BOOL)arg1 ;
-(BOOL)noBackhaulEnabled;
-(void)_setNoBackhaulEnabled:(BOOL)arg1 ;
-(void)setAutoBugCaptureConfiguration:(NSDictionary *)arg1 ;
-(void)_setAutoBugCaptureEnabled:(BOOL)arg1 ;
-(void)_setAutoBugCaptureAvailable:(BOOL)arg1 ;
-(void)_setAutoFeedbackAssistantEnable:(BOOL)arg1 ;
-(SDRDiagnosticReporter *)collectorClient;
-(void)setCollectorClient:(SDRDiagnosticReporter *)arg1 ;
-(BOOL)registeredForAutoBugCaptureChangeNotifications;
-(void)setRegisteredForAutoBugCaptureChangeNotifications:(BOOL)arg1 ;
@end

