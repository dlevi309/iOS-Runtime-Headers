/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMKappaInternal;

@interface CMKappa : NSObject {

	CMKappaInternal* _internal;

}

@property (nonatomic,readonly) CMKappaInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)areStatsAvailable;
-(CMKappaInternal *)_internal;
-(id)init;
-(void)sendCmd:(int)arg1 ;
-(void)sendAPCmd:(int)arg1 ;
-(void)startKappaUpdatesForItem:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopKappaUpdates;
-(void)sendConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5 ;
-(void)sendAPConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5 ;
-(int)getState;
-(void)dealloc;
@end

