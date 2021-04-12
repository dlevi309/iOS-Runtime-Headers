/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface ATLockdownListener : ATMessageLinkListener {

	NSObject*<OS_xpc_object> _connection;
	NSString* _serviceName;

}

@property (nonatomic,copy,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
-(BOOL)start;
-(id)initWithServiceName:(id)arg1 ;
-(void)stop;
-(void)_handleNewConnection:(id)arg1 ;
-(NSString *)serviceName;
@end

