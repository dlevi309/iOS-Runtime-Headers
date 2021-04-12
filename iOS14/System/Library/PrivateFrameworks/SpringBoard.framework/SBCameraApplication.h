/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBApplication.h>

@interface SBCameraApplication : SBApplication {

	BOOL _hasPreHeatInFlight;

}

@property (assign,nonatomic) BOOL hasPreHeatInFlight;              //@synthesize hasPreHeatInFlight=_hasPreHeatInFlight - In the implementation block
-(BOOL)hasPreHeatInFlight;
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)setHasPreHeatInFlight:(BOOL)arg1 ;
-(void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(void)_cancelPreheatForUserLaunchIfNecessary;
@end

