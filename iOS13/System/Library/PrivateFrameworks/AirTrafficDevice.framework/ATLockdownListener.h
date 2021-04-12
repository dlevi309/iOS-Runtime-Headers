/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)stop;
-(BOOL)start;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(void)_handleNewConnection:(id)arg1 ;
@end

