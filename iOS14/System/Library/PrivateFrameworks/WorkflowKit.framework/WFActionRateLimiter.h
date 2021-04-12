/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSDictionary;

@interface WFActionRateLimiter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSDictionary * attempts; 
+(id)sharedInstance;
+(void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDictionary *)attempts;
-(void)modify:(/*^block*/id)arg1 ;
-(void)setAttempts:(NSDictionary *)arg1 ;
@end

