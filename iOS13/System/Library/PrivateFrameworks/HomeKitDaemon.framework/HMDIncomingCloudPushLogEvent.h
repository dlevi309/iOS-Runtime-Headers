/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

