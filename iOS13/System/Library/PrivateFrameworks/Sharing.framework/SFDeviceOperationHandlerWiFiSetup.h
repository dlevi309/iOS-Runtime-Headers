/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class CUBonjourAdvertiser, CUReachabilityMonitor, NSDictionary, NSError, NSString, NSData, NSObject, SFSession;

@interface SFDeviceOperationHandlerWiFiSetup : NSObject {

	CUBonjourAdvertiser* _bonjourAdvertiser;
	BOOL _invalidateCalled;
	CUReachabilityMonitor* _reachabilityMonitor;
	/*^block*/id _responseHandler;
	NSDictionary* _scanResult;
	int _state;
	BOOL _stepDone;
	NSError* _stepError;
	BOOL _reachabilityEnabled;
	unsigned _repairFlags;
	unsigned _setupFlags;
	int _wifiChannel;
	BOOL _wifiDirected;
	id _wifiEAPConfig;
	id _wifiEAPTrustExceptions;
	BOOL _wifiHomeNetwork;
	NSString* _wifiPassword;
	NSData* _wifiPSK;
	NSString* _wifiSSID;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFSession* _sfSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFSession * sfSession;                                   //@synthesize sfSession=_sfSession - In the implementation block
-(id)init;
-(void)_activate;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)_run;
-(SFSession *)sfSession;
-(void)setSfSession:(SFSession *)arg1 ;
-(void)_handleRequestBonjourTestStart:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleRequestBonjourTestDone:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleWiFiSetupRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_runScanStart:(int)arg1 ;
-(void)_runJoinStart:(int)arg1 ;
-(void)_runReachabilityStart;
-(void)_completeError:(id)arg1 ;
-(void)_runScanResults:(id)arg1 error:(id)arg2 channel:(int)arg3 ;
@end

