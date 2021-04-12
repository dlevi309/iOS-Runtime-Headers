/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSWelcomeDataManagerTypeDelegate.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@interface NewsUI2.WelcomeInteractor : NSObject <TSWelcomeDataManagerTypeDelegate, FCNetworkReachabilityObserving, FCAppActivityObserving> {

	 delegate;
	 dataManager;
	 minimumTimer;
	 maximumTimer;
	 appActivityMonitor;
	 networkReachability;

}
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)activityObservingApplicationDidBecomeActive;
-(void)dataManagerFeedPrepared:(id)arg1 ;
-(void)dataManager:(id)arg1 userType:(long long)arg2 ;
-(void)dataManager:(id)arg1 error:(long long)arg2 ;
-(id)init;
@end

