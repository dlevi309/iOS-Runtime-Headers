/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class NSUUID, NSDate, NSString, NSDictionary;


@protocol MTTimerIntentSupport <NSObject>
@property (nonatomic,readonly) NSUUID * timerID; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSDictionary * siriContext; 
@property (nonatomic,readonly) long long type; 
@required
-(double)remainingTime;
-(NSUUID *)timerID;
-(NSDate *)lastModifiedDate;
-(NSDictionary *)siriContext;
-(long long)type;
-(unsigned long long)state;
-(double)duration;
-(NSString *)title;

@end

