/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@protocol OS_dispatch_queue, EFCancelable;
@class NSObject, NSCountedSet, EFObservable, NSString;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerQueue;
	int _pluggedIn;
	int _powerToken;
	int _batteryNotificationToken;
	NSCountedSet* _identifiers;
	id<EFCancelable> _appStateCancelable;
	BOOL _isForeground;
	float _batteryLevel;
	IONotificationPortRef _pmPort;
	unsigned _pmNotifier;

}

@property (nonatomic,readonly) EFObservable * pluggedInObservable; 
@property (nonatomic,readonly) EFObservable * lowPowerModeObservable; 
@property (nonatomic,readonly) EFObservable * batteryLevelObservable; 
@property (nonatomic,readonly) float batteryLevel;                                               //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (getter=isBatterySaverModeEnabled,readonly) BOOL batterySaverModeEnabled; 
@property (getter=isHoldingAssertion,readonly) BOOL holdingAssertion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)powerlog:(id)arg1 eventData:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(float)batteryLevel;
-(BOOL)isPluggedIn;
-(id)copyDiagnosticInformation;
-(BOOL)isBatterySaverModeEnabled;
-(void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2 ;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
-(EFObservable *)lowPowerModeObservable;
-(EFObservable *)pluggedInObservable;
-(EFObservable *)batteryLevelObservable;
-(void)_setPluggedIn:(unsigned)arg1 ;
-(void)_registerForBatteryLevelChanges;
-(void)_applicationForegroundStateChanged:(BOOL)arg1 ;
-(void)_unregisterForBatteryLevelChanges;
-(void)_releasePowerAssertion_nts;
-(void)_retainPowerAssertion_nts;
-(void)_lowPowerModeChangedNotification:(id)arg1 ;
-(double)_assertionTimeout;
-(void)_setupAssertionTimer:(double)arg1 ;
-(void)_retainTaskAssertion_nts;
-(void)retainAssertionWithIdentifier:(id)arg1 ;
-(void)_releaseTaskAssertion_nts;
-(void)_applicationForegroundStateChanged_nts:(BOOL)arg1 ;
-(id)powerObservable;
-(id)batteryLevelStateChangeNotificationObservable;
-(void)_batteryInformationChanged;
-(BOOL)isHoldingAssertion;
-(BOOL)_isHoldingTaskAssertion;
-(void)startListeningForBatterySaverNotifications;
@end

