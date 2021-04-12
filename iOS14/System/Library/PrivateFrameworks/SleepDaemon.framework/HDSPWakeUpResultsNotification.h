/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@class NSDictionary, NSString;

@interface HDSPWakeUpResultsNotification : NSObject {

	NSDictionary* _userInfo;
	long long _endMorningIndex;
	NSString* _category;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) long long endMorningIndex;                 //@synthesize endMorningIndex=_endMorningIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(NSString *)category;
-(NSString *)identifier;
-(id)initWithCategory:(id)arg1 endMorningIndex:(long long)arg2 userInfo:(id)arg3 ;
-(long long)endMorningIndex;
@end

