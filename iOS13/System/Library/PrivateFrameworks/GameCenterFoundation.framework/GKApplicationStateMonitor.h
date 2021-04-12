/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,copy) id handler; 
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(BOOL)observingStateChangesForBundleID:(id)arg1 ;
-(void)startObservingStateChangesForBundleID:(id)arg1 ;
@end

