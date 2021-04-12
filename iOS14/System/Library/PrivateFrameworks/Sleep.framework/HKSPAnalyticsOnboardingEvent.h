/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPAnalyticsEvent.h>

@class NSString, NSDictionary;

@interface HKSPAnalyticsOnboardingEvent : NSObject <HKSPAnalyticsEvent> {

	NSString* _eventName;
	NSDictionary* _eventPayload;

}

@property (nonatomic,retain) NSString * eventName;                     //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSDictionary * eventPayload;              //@synthesize eventPayload=_eventPayload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_payloadValueForOnboardingStep:(unsigned long long)arg1 ;
+(id)_payloadValueForOnboardingEntryPoint:(unsigned long long)arg1 ;
+(id)_payloadValueForOnboardingAction:(unsigned long long)arg1 atStep:(unsigned long long)arg2 ;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(NSString *)description;
-(void)setEventPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)eventPayload;
-(id)_initWithOnboardingStep:(unsigned long long)arg1 entryPoint:(unsigned long long)arg2 action:(unsigned long long)arg3 launchContext:(id)arg4 ;
-(id)initWithOnboardingEntryPoint:(unsigned long long)arg1 launchSource:(id)arg2 ;
-(id)initWithOnboardingStep:(unsigned long long)arg1 entryPoint:(unsigned long long)arg2 action:(unsigned long long)arg3 ;
@end

