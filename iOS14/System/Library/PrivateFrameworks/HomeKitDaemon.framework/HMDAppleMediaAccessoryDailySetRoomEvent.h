/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _currentRoom;
	NSString* _previousRoom;

}

@property (copy,readonly) NSString * currentRoom;               //@synthesize currentRoom=_currentRoom - In the implementation block
@property (copy,readonly) NSString * previousRoom;              //@synthesize previousRoom=_previousRoom - In the implementation block
+(id)uuid;
+(id)filterToAllowedRoomName:(id)arg1 ;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithCurrentRoom:(id)arg1 previousRoom:(id)arg2 ;
-(NSString *)currentRoom;
-(NSString *)previousRoom;
@end

