/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger {

	BOOL _hasDeviceBeenUnlockedSinceBoot;

}

@property (assign) BOOL hasDeviceBeenUnlockedSinceBoot;              //@synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot - In the implementation block
+(id)instance;
-(id)init;
-(void)reFetch;
-(BOOL)hasDeviceBeenUnlockedSinceBoot;
-(void)setupMobileKeyBag;
-(void)cacheUnlockSinceBootState;
-(void)setHasDeviceBeenUnlockedSinceBoot:(BOOL)arg1 ;
@end

