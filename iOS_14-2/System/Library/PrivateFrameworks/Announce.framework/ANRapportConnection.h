/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANRapportConnectionProvider.h>

@protocol ANRapportConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSArray, RPCompanionLinkDevice, RPCompanionLinkClient, NSObject, NSMutableDictionary, NSDate, NSMutableArray, NSString;

@interface ANRapportConnection : NSObject <ANRapportConnectionProvider> {

	BOOL _isTimerSuspended;
	id<ANRapportConnectionDelegate> _delegate;
	RPCompanionLinkClient* _companionLinkClient;
	NSObject*<OS_dispatch_queue> _rapportQueue;
	NSMutableDictionary* _clients;
	NSArray* _activeDevices;
	NSDate* _lastScanStartTimestamp;
	NSMutableArray* _deviceDelegates;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) RPCompanionLinkClient * companionLinkClient;                  //@synthesize companionLinkClient=_companionLinkClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> rapportQueue;                    //@synthesize rapportQueue=_rapportQueue - In the implementation block
@property (retain) NSMutableDictionary * clients;                                          //@synthesize clients=_clients - In the implementation block
@property (retain) NSArray * activeDevices;                                                //@synthesize activeDevices=_activeDevices - In the implementation block
@property (retain) NSDate * lastScanStartTimestamp;                                        //@synthesize lastScanStartTimestamp=_lastScanStartTimestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceDelegates;                             //@synthesize deviceDelegates=_deviceDelegates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                          //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL isTimerSuspended;                                        //@synthesize isTimerSuspended=_isTimerSuspended - In the implementation block
@property (assign,nonatomic,__weak) id<ANRapportConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkDevice * localDevice; 
@property (nonatomic,readonly) NSArray * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(RPCompanionLinkDevice *)localDevice;
-(NSMutableDictionary *)clients;
-(NSArray *)devices;
-(NSObject*<OS_dispatch_source>)timer;
-(NSArray *)activeDevices;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(id<ANRapportConnectionDelegate>)delegate;
-(void)setDelegate:(id<ANRapportConnectionDelegate>)arg1 ;
-(void)_cancelTimer;
-(void)_startTimer;
-(void)setClients:(NSMutableDictionary *)arg1 ;
-(RPCompanionLinkClient *)companionLinkClient;
-(NSObject*<OS_dispatch_queue>)rapportQueue;
-(void)setRapportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateLinkWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)activateLinkWithOptions:(unsigned long long)arg1 ;
-(void)_handleTimerExpired;
-(void)sendDailyRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)registerDailyRequest:(/*^block*/id)arg1 ;
-(void)removeDeviceDelegate:(id)arg1 ;
-(void)deactivateLinkWithOptions:(unsigned long long)arg1 ;
-(void)addDeviceDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setIsTimerSuspended:(BOOL)arg1 ;
-(BOOL)_needsScan;
-(void)setLastScanStartTimestamp:(NSDate *)arg1 ;
-(void)_setupLink:(/*^block*/id)arg1 ;
-(double)_remainingScanTimeInterval;
-(void)_tearDownLink;
-(NSMutableArray *)deviceDelegates;
-(void)_simulateDeliveryFailureForMessage:(id)arg1 ;
-(void)_sendMessage:(id)arg1 linkClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_linkForDevice:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_sendDailyRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setActiveDevices:(NSArray *)arg1 ;
-(void)_handleLinkInvalidation;
-(void)_updateDevices;
-(void)_notifyDeviceDelegatesConnectionDidFindDevice:(id)arg1 ;
-(void)_notifyDeviceDelegatesConnectionDidLoseDevice:(id)arg1 ;
-(void)_registerHandlers;
-(void)_registerMessageRequestHandler;
-(void)_registerHomeLocationStatusRequestHandler;
-(void)_incrementMessageCountForCompanionLinkClient:(id)arg1 ;
-(void)_decrementMessageCountForCompanionLinkClient:(id)arg1 ;
-(NSDate *)lastScanStartTimestamp;
-(BOOL)isTimerSuspended;
-(id)sendMessage:(id)arg1 device:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)sendHomeLocationStatusRequestToDevice:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setCompanionLinkClient:(RPCompanionLinkClient *)arg1 ;
-(void)setDeviceDelegates:(NSMutableArray *)arg1 ;
@end

