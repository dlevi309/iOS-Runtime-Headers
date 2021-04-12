/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/


@interface FLReachabilityObserver : NSObject {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)isNetworkReachable;
+(BOOL)isAirplaneModeActiveWithoutWifi;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)disableAirplaneModeAndWaitForNetworkWithCompletionHandler:(/*^block*/id)arg1 ;
@end

