/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,copy) id handler; 
-(id)init;
-(void)setHandler:(id)arg1 ;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(BOOL)observingStateChangesForBundleID:(id)arg1 ;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)startObservingStateChangesForBundleID:(id)arg1 ;
-(id)handler;
-(void)dealloc;
@end

