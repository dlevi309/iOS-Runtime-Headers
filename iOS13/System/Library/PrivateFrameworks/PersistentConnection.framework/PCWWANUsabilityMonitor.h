/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUTWeakReference, NSString, PCInterfaceUsabilityMonitor, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface PCWWANUsabilityMonitor : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	BOOL _isInCall;
	BOOL _isInHighPowerState;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSString* _interfaceName;
	PCInterfaceUsabilityMonitor* _interfaceMonitor;
	int _currentRAT;
	int _powerlogCDRXToken;
	CTServerConnectionRef _ctServerConnection;
	CoreTelephonyClient* _ctClient;
	int _wwanContextID;
	NSObject*<OS_dispatch_queue> _ctServerQueue;
	CTXPCServiceSubscriptionContext* _currentDataSimContext;

}

@property (nonatomic,readonly) int currentRAT;                                              //@synthesize currentRAT=_currentRAT - In the implementation block
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) BOOL isNetworkingPowerExpensiveToUse; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
-(void)dealloc;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(int)linkQuality;
-(CFStringRef)wwanInterfaceName;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_processCallStatusChanged:(id)arg1 ;
-(BOOL)isInterfaceUsable;
-(BOOL)isInternetReachable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(id)_currentDataSimContext;
-(long long)interfaceIdentifier;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(BOOL)isRadioHot;
-(int)currentRAT;
-(BOOL)isLTEWithCDRX;
-(NSString *)networkCode;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(void)_forwardConfigurationOnIvarQueue;
-(id)initWithDelegateQueue:(id)arg1 ;
-(void)_setupWWANMonitor;
-(void)_processDataConnectionStatus:(id)arg1 forContext:(id)arg2 ;
-(void)_processDataStatus:(id)arg1 forContext:(id)arg2 ;
-(BOOL)_isCurrentDataSimContextOnIvarQueue:(id)arg1 ;
-(void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3 ;
@end

