/*
* Generated on Thursday, January 14, 2021 at 2:29:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Accounts/Notification/BTCloudPairingAccountNotificationPlugin.bundle/BTCloudPairingAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CloudPairingAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_xpc_object> _cloudKitConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> cloudKitConnection;              //@synthesize cloudKitConnection=_cloudKitConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2 ;
-(void)accountModified;
-(NSObject*<OS_xpc_object>)cloudKitConnection;
-(void)setCloudKitConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)daemonConection;
@end

