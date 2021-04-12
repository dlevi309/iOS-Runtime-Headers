/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSSet, NSMutableDictionary;

@interface CKUploadRequestManagerResponseActionThrottler : NSObject {

	double _throttlePeriod;
	long long _minimumThrottleCount;
	double _maximumThrottleTime;
	double _minimumRetryTime;
	NSSet* _actionsToThrottle;
	NSMutableDictionary* _responseActionToMetadata;

}

@property (nonatomic,retain) NSMutableDictionary * responseActionToMetadata;              //@synthesize responseActionToMetadata=_responseActionToMetadata - In the implementation block
@property (assign,nonatomic) double throttlePeriod;                                       //@synthesize throttlePeriod=_throttlePeriod - In the implementation block
@property (assign,nonatomic) long long minimumThrottleCount;                              //@synthesize minimumThrottleCount=_minimumThrottleCount - In the implementation block
@property (assign,nonatomic) double maximumThrottleTime;                                  //@synthesize maximumThrottleTime=_maximumThrottleTime - In the implementation block
@property (assign,nonatomic) double minimumRetryTime;                                     //@synthesize minimumRetryTime=_minimumRetryTime - In the implementation block
@property (nonatomic,copy) NSSet * actionsToThrottle;                                     //@synthesize actionsToThrottle=_actionsToThrottle - In the implementation block
+(double)currentTime;
+(void)sleep:(double)arg1 ;
-(id)init;
-(void)setMaximumThrottleTime:(double)arg1 ;
-(double)maximumThrottleTime;
-(void)setActionsToThrottle:(NSSet *)arg1 ;
-(void)gateResponseAction:(long long)arg1 isRetry:(BOOL)arg2 ;
-(void)gateResponseAction:(long long)arg1 isRetry:(BOOL)arg2 currentTime:(double)arg3 ;
-(NSMutableDictionary *)responseActionToMetadata;
-(double)throttlePeriod;
-(NSSet *)actionsToThrottle;
-(double)throttleTimeForCount:(long long)arg1 isRetry:(BOOL)arg2 ;
-(long long)minimumThrottleCount;
-(double)minimumRetryTime;
-(void)setThrottlePeriod:(double)arg1 ;
-(void)setMinimumThrottleCount:(long long)arg1 ;
-(void)setMinimumRetryTime:(double)arg1 ;
-(void)setResponseActionToMetadata:(NSMutableDictionary *)arg1 ;
@end

