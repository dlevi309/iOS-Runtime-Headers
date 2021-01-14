/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, CUSystemMonitor;

@interface ENDeviceIdentityUtility : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	CUSystemMonitor* _systemMonitor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) CUSystemMonitor * systemMonitor;                       //@synthesize systemMonitor=_systemMonitor - In the implementation block
-(CUSystemMonitor *)systemMonitor;
-(void)setSystemMonitor:(CUSystemMonitor *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithSystemMonitor:(id)arg1 ;
-(void)signDataWithDeviceIdentity:(id)arg1 ignoreExistingKeys:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_signDataWithDeviceIdentity:(id)arg1 ignoreExistingKeys:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

