/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger {

	BOOL _hasDeviceBeenUnlockedSinceBoot;

}

@property (assign) BOOL hasDeviceBeenUnlockedSinceBoot;              //@synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot - In the implementation block
+(id)instance;
-(void)setHasDeviceBeenUnlockedSinceBoot:(BOOL)arg1 ;
-(id)init;
-(void)reFetch;
-(void)cacheUnlockSinceBootState;
-(BOOL)hasDeviceBeenUnlockedSinceBoot;
-(void)setupMobileKeyBag;
@end

