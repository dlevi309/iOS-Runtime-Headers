/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>

@protocol OS_dispatch_queue, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_interface;
@class NSObject, CUTWeakReference, NSMutableArray, NSRecursiveLock, NSString;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _scQueue;
	long long _interfaceIdentifier;
	CUTWeakReference* _delegateReference;
	NSObject*<OS_nw_parameters> _pathParameters;
	NSObject*<OS_nw_path_evaluator> _evaluator;
	NSObject*<OS_nw_interface> _lastInterface;
	NSObject*<OS_nw_interface> _lastDelegateInterface;
	BOOL _isPathSatisfied;
	void* _dynamicStore;
	CFStringRef _lqKey;
	int _linkQuality;
	BOOL _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _offTransitions;
	NSRecursiveLock* _recursiveLock;

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
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
+(BOOL)isBadLinkQuality:(int)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(long long)interfaceIdentifier;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceUsable;
-(BOOL)isNetworkingPowerExpensiveToUse;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(BOOL)isBadLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(NSString *)linkQualityString;
-(int)linkQuality;
-(id)initWithInterfaceIdentifier:(long long)arg1 delegateQueue:(id)arg2 ;
-(id)init;
-(void)_dynamicStoreCallbackForKeys:(id)arg1 ;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(id)currentInterfaceName;
-(BOOL)_createLinkQualityMonitor:(BOOL)arg1 ;
-(void)_updatePathParameters;
-(void)_dynamicStoreCallback:(id)arg1 ;
-(void)_unschedulePathEvaluator;
-(void)_updateOffTransitionsForLinkQualityChange;
-(BOOL)_isInterfaceUsable;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(BOOL)isInternetReachable;
-(void)_flushStaleTransitions;
-(void)setTrackUsability:(BOOL)arg1 ;
-(void)_processLinkQualityUpdateWithChangedKey:(id)arg1 updatedLinkQuality:(int)arg2 ;
-(void)_unscheduleLinkQualityMonitor;
-(void)_pathUpdate:(id)arg1 ;
-(void)_createPathEvaluator;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isRadioHot;
-(BOOL)_isInterfaceHistoricallyUsable;
-(void)dealloc;
@end

