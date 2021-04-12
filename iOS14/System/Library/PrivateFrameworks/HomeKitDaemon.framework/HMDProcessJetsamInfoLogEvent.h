/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessJetsamInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _jetsamReason;

}

@property (nonatomic,copy,readonly) NSString * jetsamReason;              //@synthesize jetsamReason=_jetsamReason - In the implementation block
+(id)uuid;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithJetsamReason:(id)arg1 ;
-(NSString *)jetsamReason;
@end

