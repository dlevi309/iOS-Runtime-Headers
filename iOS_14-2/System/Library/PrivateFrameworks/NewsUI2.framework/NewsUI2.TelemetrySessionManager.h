/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCNetworkEventObserving.h>
#import <libobjc.A.dylib/NSSNewsAnalyticsSessionManagerObserving.h>

@class NSString;

@interface NewsUI2.TelemetrySessionManager : NSObject <FCNetworkEventObserving, NSSNewsAnalyticsSessionManagerObserving> {

	 sessionManager;
	 sessionObserver;
	 sceneSessionIdentifier;

}

@property (copy,nonatomic) NSString * sceneSessionIdentifier; 
-(void)networkEventMonitor:(id)arg1 loggedEvent:(id)arg2 inSession:(id)arg3 ;
-(void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2 ;
-(void)sessionWillResignActive;
-(void)sessionWillEndWithEndReason:(id)arg1 ;
-(id)init;
-(NSString *)sceneSessionIdentifier;
-(void)setSceneSessionIdentifier:(NSString *)arg1 ;
@end

