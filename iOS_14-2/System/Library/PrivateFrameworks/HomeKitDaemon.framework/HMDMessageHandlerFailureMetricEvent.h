/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMessageHandlerFailureMetricEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _messageName;
	NSString* _type;

}

@property (copy,readonly) NSString * messageName;              //@synthesize messageName=_messageName - In the implementation block
@property (copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
+(id)identifier;
-(NSString *)messageName;
-(id)eventName;
-(NSString *)type;
-(id)serializedEvent;
-(id)initWithFailureType:(unsigned long long)arg1 messageName:(id)arg2 ;
@end

