/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDMediaDestinationControllerLogEvent : HMDLogEvent {

	NSString* _isTriggeredOnControllerDevice;
	NSString* _userPrivilege;

}

@property (copy,readonly) NSString * isTriggeredOnControllerDevice;              //@synthesize isTriggeredOnControllerDevice=_isTriggeredOnControllerDevice - In the implementation block
@property (copy,readonly) NSString * userPrivilege;                              //@synthesize userPrivilege=_userPrivilege - In the implementation block
+(id)identifier;
-(NSString *)isTriggeredOnControllerDevice;
-(NSString *)userPrivilege;
-(id)initWithEventType:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;
@end

