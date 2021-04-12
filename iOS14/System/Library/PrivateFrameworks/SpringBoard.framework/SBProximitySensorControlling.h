/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBProximitySensorControlling <NSObject>
@property (assign,getter=isProximityDetectionEnabled,nonatomic) BOOL proximityDetectionEnabled; 
@property (assign,nonatomic) BOOL pocketTouchesExpected; 
@required
-(id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;
-(id)suspendMultitouchForSource:(long long)arg1 reason:(id)arg2;
-(void)setProximityDetectionEnabled:(BOOL)arg1;
-(void)setPocketTouchesExpected:(BOOL)arg1;
-(void)resetProximityCalibration;
-(BOOL)pocketTouchesExpected;
-(BOOL)isProximityDetectionEnabled;
-(id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(BOOL)arg2 reason:(id)arg3;

@end

