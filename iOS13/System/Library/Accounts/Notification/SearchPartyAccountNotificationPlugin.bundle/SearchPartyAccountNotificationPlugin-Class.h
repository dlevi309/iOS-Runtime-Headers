/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(void)setProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)proxy;
-(FMXPCServiceDescription *)serviceDescription;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(id<SPBeaconManagerXPCProtocol>)userAgentProxy;
-(void)setUserAgentProxy:(id<SPBeaconManagerXPCProtocol>)arg1 ;
-(void)primaryAccountModified;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

