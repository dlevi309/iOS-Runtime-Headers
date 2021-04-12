/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HMUserActionPredictionControllerDelegate.h>

@protocol HUCCPredictionManagerDelegate, HUCCPredictionController, OS_dispatch_queue;
@class HMHome, NSArray, NSObject;

@interface HUCCPredictionManager : NSObject <HMUserActionPredictionControllerDelegate> {

	BOOL _wasQueriedForInFlightPredictions;
	id<HUCCPredictionManagerDelegate> _delegate;
	HMHome* _home;
	NSArray* _predictions;
	id<HUCCPredictionController> _predictionController;
	unsigned long long _predictionLimit;
	NSObject*<OS_dispatch_queue> _predictionQueue;

}

@property (nonatomic,retain) NSArray * predictions;                                          //@synthesize predictions=_predictions - In the implementation block
@property (nonatomic,retain) id<HUCCPredictionController> predictionController;              //@synthesize predictionController=_predictionController - In the implementation block
@property (assign,nonatomic) unsigned long long predictionLimit;                             //@synthesize predictionLimit=_predictionLimit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> predictionQueue;                   //@synthesize predictionQueue=_predictionQueue - In the implementation block
@property (assign,nonatomic) BOOL wasQueriedForInFlightPredictions;                          //@synthesize wasQueriedForInFlightPredictions=_wasQueriedForInFlightPredictions - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCPredictionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                //@synthesize home=_home - In the implementation block
-(id)init;
-(id<HUCCPredictionManagerDelegate>)delegate;
-(NSArray *)predictions;
-(id<HUCCPredictionController>)predictionController;
-(void)setDelegate:(id<HUCCPredictionManagerDelegate>)arg1 ;
-(void)setPredictionController:(id<HUCCPredictionController>)arg1 ;
-(void)userActionPredictionController:(id)arg1 didUpdatePredictions:(id)arg2 ;
-(void)setPredictions:(NSArray *)arg1 ;
-(HMHome *)home;
-(id)fetchUserActionPredictions;
-(id)initWithHome:(id)arg1 predictionController:(id)arg2 delegate:(id)arg3 predictionLimit:(unsigned long long)arg4 ;
-(void)_queryUserActionPredictions;
-(void)setWasQueriedForInFlightPredictions:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)predictionQueue;
-(void)_queryUserActionPredictionsOnQueue;
-(id)_processUserActionPredictions:(id)arg1 ;
-(BOOL)wasQueriedForInFlightPredictions;
-(unsigned long long)predictionLimit;
-(id)_homeKitObjectForSceneUUID:(id)arg1 ;
-(id)_homeKitObjectForServiceUUID:(id)arg1 ;
-(id)_homeKitObjectForAccessoryUUID:(id)arg1 ;
-(id)_homeKitObjectForServiceGroupUUID:(id)arg1 ;
-(id)_homeKitObjectForMediaSystemUUID:(id)arg1 ;
-(void)setPredictionLimit:(unsigned long long)arg1 ;
-(void)setPredictionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

