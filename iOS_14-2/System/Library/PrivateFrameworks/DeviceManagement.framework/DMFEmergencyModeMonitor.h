/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@class NSXPCConnection;

@interface DMFEmergencyModeMonitor : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)remoteInterface;
+(id)sharedMonitor;
-(NSXPCConnection *)xpcConnection;
-(BOOL)enableEmergencyModeForDuration:(double)arg1 withError:(id*)arg2 ;
-(BOOL)disableEmergencyModeWithError:(id*)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id)init;
-(id)emergencyModeStatusWithError:(id*)arg1 ;
-(BOOL)enableEmergencyModeWithError:(id*)arg1 ;
-(void)emergencyModeStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

