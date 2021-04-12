/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>

@protocol OS_dispatch_queue, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_interface;
@class NSObject, CUTWeakReference, NSMutableArray, NSRecursiveLock, NSString;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	long long _interfaceIdentifier;
	CUTWeakReference* _delegateReference;
	NSObject*<OS_nw_parameters> _pathParameters;
	NSObject*<OS_nw_path_evaluator> _evaluator;
	NSObject*<OS_nw_interface> _lastInterface;
	NSObject*<OS_nw_interface> _lastDelegateInterface;
	BOOL _isPathSatisfied;
	void* _dynamicStore;
	CFRunLoopSourceRef _linkQualitySource;
	CFStringRef _lqKey;
	int _linkQuality;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _offTransitions;
	NSRecursiveLock* _recursiveLock;

}

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
@property (nonatomic,readonly) int currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
+(BOOL)isBadLinkQuality:(int)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(int)linkQuality;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isInterfaceUsable;
-(BOOL)isInternetReachable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(long long)interfaceIdentifier;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(BOOL)isBadLinkQuality;
-(void)_updatePathParameters;
-(void)_unscheduleLinkQualityMonitor;
-(void)_unschedulePathEvaluator;
-(void)_flushStaleTransitions;
-(BOOL)_isInterfaceUsable;
-(BOOL)_isInterfaceHistoricallyUsable;
-(void)_pathUpdate:(id)arg1 ;
-(BOOL)_createLinkQualityMonitor:(BOOL)arg1 ;
-(void)_createPathEvaluator;
-(void)_updateOffTransitionsForLinkQualityChange;
-(void)_processLinkQualityUpdateWithChangedKey:(id)arg1 updatedLinkQuality:(int)arg2 ;
-(void)_dynamicStoreCallback:(id)arg1 ;
-(BOOL)isRadioHot;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(id)initWithInterfaceIdentifier:(long long)arg1 delegateQueue:(id)arg2 ;
-(id)currentInterfaceName;
-(void)_dynamicStoreCallbackForKeys:(id)arg1 ;
@end

