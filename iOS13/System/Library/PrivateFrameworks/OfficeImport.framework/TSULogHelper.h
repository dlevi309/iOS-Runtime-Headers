/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
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

