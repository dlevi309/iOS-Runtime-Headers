/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol MSPCloudSynchronizerRunConditionsDelegate, OS_dispatch_queue;
@class NSObject, NSDate, GEONetworkObserver;

@interface MSPCloudSynchronizerRunConditions : NSObject {

	BOOL _hasiCloudAccount;
	BOOL _isDeviceToDeviceEncryptionReady;
	BOOL _isNetworkReachable;
	id<MSPCloudSynchronizerRunConditionsDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSDate* _lastErrorDate;
	double _lastRetryDelayInSeconds;
	GEONetworkObserver* _networkObserver;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSDate * lastErrorDate;                                                     //@synthesize lastErrorDate=_lastErrorDate - In the implementation block
@property (assign,nonatomic) double lastRetryDelayInSeconds;                                             //@synthesize lastRetryDelayInSeconds=_lastRetryDelayInSeconds - In the implementation block
@property (nonatomic,retain) GEONetworkObserver * networkObserver;                                       //@synthesize networkObserver=_networkObserver - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                                                      //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL isNetworkReachable;                                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL isDeviceToDeviceEncryptionReady;                                       //@synthesize isDeviceToDeviceEncryptionReady=_isDeviceToDeviceEncryptionReady - In the implementation block
@property (assign,nonatomic,__weak) id<MSPCloudSynchronizerRunConditionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldRun; 
-(id)init;
-(id<MSPCloudSynchronizerRunConditionsDelegate>)delegate;
-(void)setDelegate:(id<MSPCloudSynchronizerRunConditionsDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isNetworkReachable;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(BOOL)hasiCloudAccount;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(BOOL)shouldRetryAfterError:(id)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(void)subscribeToNetworkChangeNotifications;
-(void)subscribeToAccountChangeNotifications;
-(void)refreshAccountStatus;
-(BOOL)isDeviceToDeviceEncryptionReady;
-(void)setLastErrorDate:(NSDate *)arg1 ;
-(void)setLastRetryDelayInSeconds:(double)arg1 ;
-(void)announceRunConditionsChanged;
-(double)currentRetryDelay;
-(NSDate *)lastErrorDate;
-(double)lastRetryDelayInSeconds;
-(GEONetworkObserver *)networkObserver;
-(void)networkConditionsChanged;
-(void)setIsDeviceToDeviceEncryptionReady:(BOOL)arg1 ;
-(BOOL)shouldRun;
-(double)delayRetryingAfterError:(id)arg1 ;
-(void)setNetworkObserver:(GEONetworkObserver *)arg1 ;
@end

