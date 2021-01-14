/*
* Generated on Thursday, January 14, 2021 at 2:29:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/SearchPartyAccountNotificationPlugin.bundle/SearchPartyAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;
@class AKAccountManager, NSObject, FMXPCServiceDescription, FMXPCSession, NSString;

@interface SearchPartyAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	AKAccountManager* _akAccountManager;
	NSObject*<OS_dispatch_queue> _serialQueue;
	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPBeaconManagerXPCProtocol> _proxy;
	id<SPBeaconManagerXPCProtocol> _userAgentProxy;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                   //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;               //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> proxy;                       //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) id<SPBeaconManagerXPCProtocol> userAgentProxy;              //@synthesize userAgentProxy=_userAgentProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(FMXPCServiceDescription *)serviceDescription;
-(FMXPCSession *)session;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)primaryAccountModified;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

