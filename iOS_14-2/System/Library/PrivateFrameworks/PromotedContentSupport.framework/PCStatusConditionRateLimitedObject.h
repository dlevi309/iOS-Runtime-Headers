/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
*/


@class NSUUID, NSDate;

@interface PCStatusConditionRateLimitedObject : NSObject {

	NSUUID* _statusCondition;
	NSDate* _setTime;
	long long _operation;

}

@property (nonatomic,readonly) NSUUID * statusCondition;              //@synthesize statusCondition=_statusCondition - In the implementation block
@property (nonatomic,readonly) NSDate * setTime;                      //@synthesize setTime=_setTime - In the implementation block
@property (nonatomic,readonly) long long operation;                   //@synthesize operation=_operation - In the implementation block
-(long long)operation;
-(NSDate *)setTime;
-(id)init:(id)arg1 at:(id)arg2 kind:(long long)arg3 ;
-(NSUUID *)statusCondition;
@end

