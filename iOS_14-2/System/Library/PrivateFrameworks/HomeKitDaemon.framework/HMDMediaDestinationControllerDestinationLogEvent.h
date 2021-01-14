/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaDestinationControllerLogEvent.h>

@class NSString;

@interface HMDMediaDestinationControllerDestinationLogEvent : HMDMediaDestinationControllerLogEvent {

	NSString* _existingDestinationType;
	NSString* _destinationType;

}

@property (copy,readonly) NSString * existingDestinationType;              //@synthesize existingDestinationType=_existingDestinationType - In the implementation block
@property (copy,readonly) NSString * destinationType;                      //@synthesize destinationType=_destinationType - In the implementation block
+(id)identifier;
-(NSString *)destinationType;
-(NSString *)existingDestinationType;
-(id)initWithEventType:(id)arg1 existingDestinationType:(id)arg2 destinationType:(id)arg3 isTriggeredOnControllerDevice:(id)arg4 userPrivilege:(id)arg5 ;
@end

