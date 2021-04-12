/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isNetworkReachable;
-(void)setNetworkObserver:(GEONetworkObserver *)arg1 ;
-(void)setLastErrorDate:(NSDate *)arg1 ;
-(void)subscribeToNetworkChangeNotifications;
-(id)init;
-(id<MSPCloudSynchronizerRunConditionsDelegate>)delegate;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(double)currentRetryDelay;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GEONetworkObserver *)networkObserver;
-(void)setDelegate:(id<MSPCloudSynchronizerRunConditionsDelegate>)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)networkConditionsChanged;
-(void)subscribeToAccountChangeNotifications;
-(BOOL)isDeviceToDeviceEncryptionReady;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)announceRunConditionsChanged;
-(double)delayRetryingAfterError:(id)arg1 ;
-(void)refreshAccountStatus;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(double)lastRetryDelayInSeconds;
-(BOOL)shouldRetryAfterError:(id)arg1 ;
-(BOOL)shouldRun;
-(NSDate *)lastErrorDate;
-(void)setLastRetryDelayInSeconds:(double)arg1 ;
-(BOOL)hasiCloudAccount;
-(void)setIsDeviceToDeviceEncryptionReady:(BOOL)arg1 ;
@end

