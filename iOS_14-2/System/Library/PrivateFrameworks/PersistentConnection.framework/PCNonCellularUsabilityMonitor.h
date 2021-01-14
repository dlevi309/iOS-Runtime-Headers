/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUTWeakReference, NSString, PCInterfaceUsabilityMonitor;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	NSString* _demoOverrideInterface;
	int _previousLinkQuality;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	PCInterfaceUsabilityMonitor* _monitor;

}

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
@property (nonatomic,readonly) int currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(long long)interfaceIdentifier;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceUsable;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(BOOL)isBadLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(NSString *)linkQualityString;
-(void)_forwardConfigurationOnIvarQueue;
-(int)linkQuality;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(BOOL)isInternetReachable;
-(void)_addMonitor;
-(void)setTrackUsability:(BOOL)arg1 ;
-(int)_linkQualityOnIvarQueue;
-(id)initWithDelegateQueue:(id)arg1 ;
-(BOOL)isRadioHot;
-(void)dealloc;
@end

