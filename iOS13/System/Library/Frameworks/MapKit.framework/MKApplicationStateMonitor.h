/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isActive;
-(void)startObserving;
-(void)stopObserving;
-(BOOL)isInBackground;
-(void)_resignActive;
-(void)_enterBackground;
-(void)_exitBackground;
-(void)_becomeActive;
-(void)_handleApplicationStateChange:(id)arg1 interestedPID:(int)arg2 ;
-(void)_performSynchronouslyOnMainQueue:(/*^block*/id)arg1 ;
-(void)setForceBackboardServicesMonitoring:(BOOL)arg1 ;
-(BOOL)forceBackboardServicesMonitoring;
@end

