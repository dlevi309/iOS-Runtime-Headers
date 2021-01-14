/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _existingDestinationType;

}

@property (copy,readonly) NSString * existingDestinationType;              //@synthesize existingDestinationType=_existingDestinationType - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithExistingDestinationType:(id)arg1 ;
-(NSString *)existingDestinationType;
@end

