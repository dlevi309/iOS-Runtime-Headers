/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isNetworkingPowerExpensiveToUse; 
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(NSString *)networkCode;
-(long long)interfaceIdentifier;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceUsable;
-(CFStringRef)wwanInterfaceName;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(BOOL)isLTEWithCDRX;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(BOOL)isBadLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(NSString *)linkQualityString;
-(void)_forwardConfigurationOnIvarQueue;
-(int)linkQuality;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(id)_currentDataSimContext;
-(BOOL)_isCurrentDataSimContextOnIvarQueue:(id)arg1 ;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(void)_setupWWANMonitor;
-(BOOL)isInternetReachable;
-(void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3 ;
-(void)_processCallStatusChanged:(id)arg1 ;
-(void)_processDataConnectionStatus:(id)arg1 forContext:(id)arg2 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(id)initWithDelegateQueue:(id)arg1 ;
-(void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3 ;
-(void)_processDataStatus:(id)arg1 forContext:(id)arg2 ;
-(BOOL)isRadioHot;
-(int)currentRAT;
-(void)dealloc;
@end

