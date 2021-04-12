/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDDataStreamBulkSendListener.h>
#import <libobjc.A.dylib/HMDSiriAccessoryMonitorDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDNotificationRegistration, HMDSiriRemoteInputServer, HMDSiriAccessoryMonitor, HMDSiriSession, NSString;

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging> {

	unsigned _targetControlIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	HMDNotificationRegistration* _notificationRegistration;
	HMDSiriRemoteInputServer* _siriInputServer;
	HMDSiriAccessoryMonitor* _siriAccessoryMonitor;
	HMDSiriSession* _siriUISession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;              //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,retain) HMDSiriRemoteInputServer * siriInputServer;                            //@synthesize siriInputServer=_siriInputServer - In the implementation block
@property (nonatomic,retain) HMDSiriAccessoryMonitor * siriAccessoryMonitor;                        //@synthesize siriAccessoryMonitor=_siriAccessoryMonitor - In the implementation block
@property (nonatomic,retain) HMDSiriSession * siriUISession;                                        //@synthesize siriUISession=_siriUISession - In the implementation block
@property (assign,nonatomic) unsigned targetControlIdentifier;                                      //@synthesize targetControlIdentifier=_targetControlIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedSiriServer;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)registerForMessages;
-(void)monitor:(id)arg1 needsSiriCapabilityForAccessory:(id)arg2 ;
-(void)monitor:(id)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2 ;
-(void)monitorHasNoAccessoriesForDragonSiri:(id)arg1 ;
-(void)monitor:(id)arg1 willAllowAccessoryForDragonSiri:(id)arg2 ;
-(void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2 ;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(void)handleAccessoryIsNotReachable:(id)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg1 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(HMDSiriAccessoryMonitor *)siriAccessoryMonitor;
-(unsigned)targetControlIdentifier;
-(void)setTargetControlIdentifier:(unsigned)arg1 ;
-(void)handleAccessoryHasBulkSendDataStream:(id)arg1 ;
-(void)handleAccessoryRemoved:(id)arg1 ;
-(void)_checkSiriSupportByAccessory:(id)arg1 ;
-(HMDSiriRemoteInputServer *)siriInputServer;
-(void)setSiriInputServer:(HMDSiriRemoteInputServer *)arg1 ;
-(HMDSiriSession *)siriUISession;
-(void)setSiriUISession:(HMDSiriSession *)arg1 ;
-(BOOL)_doesAccessorySupportDragonSiri:(id)arg1 siriAudioConfiguration:(id)arg2 ;
-(id)_getBestAudioCodecConfiguration:(id)arg1 ;
-(BOOL)_isAudioCodecSupported:(id)arg1 ;
-(void)_setupSiriPlugin;
-(void)_setupSiriUIContext;
-(void)_tearDownSiriUIContext;
-(void)_tearDownSiriPlugin;
-(void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2 ;
-(void)accessoryDidStartListening:(id)arg1 ;
-(void)setSiriAccessoryMonitor:(HMDSiriAccessoryMonitor *)arg1 ;
@end

