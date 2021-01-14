/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface _DPSubmissionRateLimiter : NSObject {

	NSObject*<OS_dispatch_queue> _limiterQueue;
	NSMutableDictionary* _limitDictionary;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> limiterQueue;              //@synthesize limiterQueue=_limiterQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * limitDictionary;                    //@synthesize limitDictionary=_limitDictionary - In the implementation block
+(id)sharedInstance;
+(id)rateLimitsFromBudgetProperties;
+(id)budgetNameForKey:(id)arg1 ;
-(id)init;
-(id)initWithLimits:(id)arg1 ;
-(NSMutableDictionary *)limitDictionary;
-(unsigned long long)debit:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)credit:(id)arg1 amount:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)limiterQueue;
-(void)setLimitDictionary:(NSMutableDictionary *)arg1 ;
@end

