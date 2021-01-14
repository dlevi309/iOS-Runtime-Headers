/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@class NSDate;

@interface RateLimitAllowance : NSObject {

	NSDate* _lastCheckedAt;
	double _allowance;

}

@property (nonatomic,retain) NSDate * lastCheckedAt;              //@synthesize lastCheckedAt=_lastCheckedAt - In the implementation block
@property (assign,nonatomic) double allowance;                    //@synthesize allowance=_allowance - In the implementation block
-(double)allowance;
-(void)setAllowance:(double)arg1 ;
-(NSDate *)lastCheckedAt;
-(void)setLastCheckedAt:(NSDate *)arg1 ;
@end

