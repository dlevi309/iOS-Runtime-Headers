/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPAnalyticsEvent.h>

@class NSString, NSDictionary;

@interface HKSPAnalyticsSleepScheduleChangeEvent : NSObject <HKSPAnalyticsEvent> {

	NSString* _eventName;
	NSDictionary* _eventPayload;

}

@property (nonatomic,retain) NSString * eventName;                     //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSDictionary * eventPayload;              //@synthesize eventPayload=_eventPayload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)eventPayload;
-(id)initWithContext:(unsigned long long)arg1 watchSleepTrackingEnabled:(BOOL)arg2 ;
@end

