/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _inBackground;
	BOOL _active;
	unsigned long long _observerCount;
	BOOL _forceBackboardServicesMonitoring;

}

@property (assign,nonatomic) BOOL forceBackboardServicesMonitoring;                  //@synthesize forceBackboardServicesMonitoring=_forceBackboardServicesMonitoring - In the implementation block
@property (getter=isInBackground,nonatomic,readonly) BOOL inBackground;              //@synthesize inBackground=_inBackground - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                          //@synthesize active=_active - In the implementation block
+(id)sharedInstance;
-(void)startObserving;
-(void)stopObserving;
-(void)_resignActive;
-(BOOL)isActive;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_performSynchronouslyOnMainQueue:(/*^block*/id)arg1 ;
-(void)_becomeActive;
-(void)_handleApplicationStateChange:(id)arg1 interestedPID:(int)arg2 ;
-(BOOL)forceBackboardServicesMonitoring;
-(BOOL)isInBackground;
-(void)dealloc;
-(void)setForceBackboardServicesMonitoring:(BOOL)arg1 ;
@end

