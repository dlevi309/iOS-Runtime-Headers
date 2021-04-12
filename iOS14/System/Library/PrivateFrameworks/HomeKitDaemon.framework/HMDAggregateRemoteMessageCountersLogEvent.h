/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString, NSNumber;

@interface HMDAggregateRemoteMessageCountersLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _transportType;
	NSString* _direction;
	NSString* _deviceType;
	NSString* _messageName;
	NSNumber* _count;

}

@property (nonatomic,copy,readonly) NSString * transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,copy,readonly) NSString * direction;                  //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceType;                 //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageName;                //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * count;                      //@synthesize count=_count - In the implementation block
+(id)identifier;
+(id)aggregateRemoteCountersLogEventWithMessageName:(id)arg1 deviceType:(id)arg2 transportType:(id)arg3 direction:(id)arg4 count:(id)arg5 ;
-(NSString *)direction;
-(NSString *)deviceType;
-(id)init;
-(NSString *)messageName;
-(id)eventName;
-(NSNumber *)count;
-(NSString *)transportType;
-(id)serializedEvent;
-(BOOL)shouldSubmitEvent;
-(id)__initWithMessageName:(id)arg1 deviceType:(id)arg2 transportType:(id)arg3 direction:(id)arg4 count:(id)arg5 ;
@end

