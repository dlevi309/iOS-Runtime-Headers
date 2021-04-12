/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaDestinationControllerLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSUUID;

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMDCoreAnalyticsLogging> {

	NSUUID* _stagedDestinationIdentifier;

}

@property (copy,readonly) NSUUID * stagedDestinationIdentifier;              //@synthesize stagedDestinationIdentifier=_stagedDestinationIdentifier - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithStagedDestinationIdentifier:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;
-(NSUUID *)stagedDestinationIdentifier;
@end

