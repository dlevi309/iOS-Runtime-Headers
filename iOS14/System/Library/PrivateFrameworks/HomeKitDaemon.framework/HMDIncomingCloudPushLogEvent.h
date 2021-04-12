/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDIncomingCloudPushLogEvent : HMDLogEvent {

	NSString* _topic;

}

@property (nonatomic,readonly) NSString * topic;              //@synthesize topic=_topic - In the implementation block
+(id)uuid;
+(id)incomingCloudPush:(id)arg1 ;
-(NSString *)topic;
-(id)initWithTopic:(id)arg1 ;
@end

