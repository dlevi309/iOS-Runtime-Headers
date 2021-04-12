/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/TSWelcomeDataManagerTypeDelegate.h>

@interface NewsUI2.WelcomeInteractor : NSObject <FCAppActivityObserving, FCNetworkReachabilityObserving, TSWelcomeDataManagerTypeDelegate> {

	 delegate;
	 dataManager;
	??? userTypePromise;
	??? feedLoadedPromise;
	??? minimumTimePromise;
	??? maximumTimePromise;
	??? isCloudKitReachablePromise;
	 minimumTimer;
	 maximumTimer;
	 emailSignupDetectionManager;
	 appActivityMonitor;
	 networkReachability;

}
-(void)activityObservingApplicationDidBecomeActive;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(void)dataManagerFeedPrepared:(id)arg1 ;
-(void)dataManager:(id)arg1 userType:(long long)arg2 ;
-(void)dataManager:(id)arg1 error:(long long)arg2 ;
-(id)init;
@end

