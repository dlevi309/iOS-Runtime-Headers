/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeroAppPredictionClient.framework/HeroAppPredictionClient
*/


@class NSXPCConnection;

@interface ATXHeroAppPredictionClient : NSObject {

	NSXPCConnection* _xpcConnection;

}
-(id)init;
-(void)dealloc;
-(void)donateHeroAppPredictionsWithBundleIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidatePredictionsWithCompletion:(/*^block*/id)arg1 ;
@end

