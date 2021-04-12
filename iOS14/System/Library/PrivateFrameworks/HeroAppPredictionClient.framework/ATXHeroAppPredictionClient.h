/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeroAppPredictionClient.framework/HeroAppPredictionClient
*/

#import <libobjc.A.dylib/ATXHeroAppPredictionXPCInterface.h>

@class NSXPCConnection;

@interface ATXHeroAppPredictionClient : NSObject <ATXHeroAppPredictionXPCInterface> {

	NSXPCConnection* _xpcConnection;

}
-(id)init;
-(void)addHardRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openAppClipWithHeroAppPrediction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addConfirmForAppClipWithHeroAppPrediction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addSoftRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateHeroAppPredictions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

