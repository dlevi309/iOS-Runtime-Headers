/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

