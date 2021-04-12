/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
*/


@class NSUUID, NSDate;

@interface ADStatusConditionRateLimitedObject : NSObject {

	NSUUID* _statusCondition;
	NSDate* _setTime;
	long long _operation;

}

@property (nonatomic,readonly) NSUUID * statusCondition;              //@synthesize statusCondition=_statusCondition - In the implementation block
@property (nonatomic,readonly) NSDate * setTime;                      //@synthesize setTime=_setTime - In the implementation block
@property (nonatomic,readonly) long long operation;                   //@synthesize operation=_operation - In the implementation block
-(long long)operation;
-(NSUUID *)statusCondition;
-(id)init:(id)arg1 at:(id)arg2 kind:(long long)arg3 ;
-(NSDate *)setTime;
@end

