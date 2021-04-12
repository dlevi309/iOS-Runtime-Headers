/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplication.h>

@interface SBCameraApplication : SBApplication {

	BOOL _hasPreHeatInFlight;

}

@property (assign,nonatomic) BOOL hasPreHeatInFlight;              //@synthesize hasPreHeatInFlight=_hasPreHeatInFlight - In the implementation block
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(void)_cancelPreheatForUserLaunchIfNecessary;
-(BOOL)hasPreHeatInFlight;
-(void)setHasPreHeatInFlight:(BOOL)arg1 ;
@end

