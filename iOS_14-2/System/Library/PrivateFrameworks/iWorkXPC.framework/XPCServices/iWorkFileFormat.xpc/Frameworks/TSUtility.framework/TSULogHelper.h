/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSDate;

@interface TSULogHelper : NSObject {

	unsigned long long _throttleCount;
	NSDate* _lastThrottleCheck;

}

@property (assign) unsigned long long throttleCount;              //@synthesize throttleCount=_throttleCount - In the implementation block
@property (retain) NSDate * lastThrottleCheck;                    //@synthesize lastThrottleCheck=_lastThrottleCheck - In the implementation block
+(id)sharedInstance;
-(unsigned long long)throttleCount;
-(void)setThrottleCount:(unsigned long long)arg1 ;
-(NSDate *)lastThrottleCheck;
-(void)setLastThrottleCheck:(NSDate *)arg1 ;
-(BOOL)incrementThrottleCountAndCheckThottleMax:(unsigned long long)arg1 ;
@end

