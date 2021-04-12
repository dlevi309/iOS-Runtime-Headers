/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBProximitySensorControlling <NSObject>
@property (assign,getter=isProximityDetectionEnabled,nonatomic) BOOL proximityDetectionEnabled; 
@property (assign,nonatomic) BOOL pocketTouchesExpected; 
@required
-(BOOL)pocketTouchesExpected;
-(void)setPocketTouchesExpected:(BOOL)arg1;
-(BOOL)isProximityDetectionEnabled;
-(void)resetProximityCalibration;
-(id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;
-(id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(BOOL)arg2 reason:(id)arg3;
-(id)suspendMultitouchForSource:(long long)arg1 reason:(id)arg2;
-(void)setProximityDetectionEnabled:(BOOL)arg1;

@end

