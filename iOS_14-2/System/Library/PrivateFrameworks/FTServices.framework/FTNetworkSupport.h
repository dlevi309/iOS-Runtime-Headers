/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject {

	Class _APSConnectionClass;
	APSConnection* _apsConnection;
	NSTimer* _reliabilityAttemptTimer;
	BOOL _enableCriticalReliability;
	BOOL _criticalReliabilityEnabledState;

}

@property (nonatomic,readonly) BOOL allowAnyNetwork; 
@property (nonatomic,readonly) BOOL validNetworkEnabled; 
@property (nonatomic,readonly) BOOL validNetworkActive; 
@property (nonatomic,readonly) BOOL validNetworkReachable; 
@property (nonatomic,readonly) BOOL wiFiActiveAndReachable; 
@property (nonatomic,readonly) BOOL willSearchForNetwork; 
@property (nonatomic,readonly) BOOL dataActiveAndReachable; 
@property (nonatomic,readonly) BOOL networkEnabled; 
@property (nonatomic,readonly) BOOL networkActive; 
@property (nonatomic,readonly) BOOL networkReachable; 
@property (assign,nonatomic) BOOL enableCriticalReliability; 
+(id)sharedInstance;
-(BOOL)enableCriticalReliability;
-(void)_setReliabilityTimeoutInterval;
-(BOOL)willSearchForNetworkForBundleId:(id)arg1 ;
-(void)_clearReliabilityTimeoutInterval;
-(void)setEnableCriticalReliability:(BOOL)arg1 ;
-(BOOL)wiFiActiveAndReachable;
-(void)_tryToEnableReliability;
-(BOOL)willSearchForNetwork;
-(BOOL)validNetworkEnabled;
-(BOOL)dataActiveAndReachable;
-(BOOL)validNetworkActiveForBundleId:(id)arg1 ;
-(BOOL)networkEnabled;
-(BOOL)validNetworkReachable;
-(BOOL)allowAnyNetwork;
-(void)_reallySetCriticalReliability:(BOOL)arg1 ;
-(BOOL)networkReachable;
-(void)_createAPSConnectionIfNeeded;
-(BOOL)networkActive;
-(BOOL)validNetworkEnabledForBundleId:(id)arg1 ;
-(BOOL)validNetworkActive;
-(BOOL)validNetworkReachableForBundleId:(id)arg1 ;
@end

