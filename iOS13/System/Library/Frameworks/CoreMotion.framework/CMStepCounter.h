/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMStepCounterProxy;

@interface CMStepCounter : NSObject {

	CMStepCounterProxy* _stepcounterProxy;

}

@property (nonatomic,readonly) CMStepCounterProxy * stepcounterProxy;              //@synthesize stepcounterProxy=_stepcounterProxy - In the implementation block
@property (assign) BOOL enabled; 
+(BOOL)isStepCountingAvailable;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(CMStepCounterProxy *)stepcounterProxy;
-(void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopStepCountingUpdates;
-(void)getTotalCountToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)deleteHistory;
@end

