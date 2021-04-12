/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaDestinationControllerLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _destinationControllerErrorCode;
	NSString* _errorCode;
	NSString* _errorDomain;

}

@property (copy,readonly) NSString * destinationControllerErrorCode;              //@synthesize destinationControllerErrorCode=_destinationControllerErrorCode - In the implementation block
@property (copy,readonly) NSString * errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (copy,readonly) NSString * errorDomain;                                 //@synthesize errorDomain=_errorDomain - In the implementation block
+(id)identifier;
-(NSString *)errorDomain;
-(id)eventName;
-(NSString *)errorCode;
-(id)serializedEvent;
-(id)initWithDestinationControllerErrorCode:(id)arg1 errorCode:(id)arg2 errorDomain:(id)arg3 isTriggeredOnControllerDevice:(id)arg4 userPrivilege:(id)arg5 ;
-(NSString *)destinationControllerErrorCode;
@end

