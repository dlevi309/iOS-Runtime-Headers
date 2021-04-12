/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@interface PHASleepWakeMonitor : NSObject {

	unsigned _powerAssertionID;

}

@property (assign) unsigned powerAssertionID;              //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
+(BOOL)isSystemInDarkWake;
-(unsigned)powerAssertionID;
-(void)setPowerAssertionID:(unsigned)arg1 ;
-(void)releaseUserIdlePowerAssertion;
-(void)takeUserIdlePowerAssertion;
@end

