/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(unsigned long long)state;
-(NSString *)title;
-(double)duration;
-(NSUUID *)timerID;
-(NSDate *)lastModifiedDate;
-(double)remainingTime;
-(NSDictionary *)siriContext;

@end

