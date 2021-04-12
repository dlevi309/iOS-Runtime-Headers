/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBBiometricMonitorDataSource <NSObject>
@property (nonatomic,readonly) BOOL presenceDetectRunning; 
@property (nonatomic,readonly) BOOL matchRunning; 
@property (nonatomic,readonly) BOOL poseIsMarginal; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(BOOL)matchRunning;
-(BOOL)presenceDetectRunning;
-(BOOL)poseIsMarginal;

@end

