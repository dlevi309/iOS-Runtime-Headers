/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/BTCloudPairingAccountNotificationPlugin.bundle/BTCloudPairingAccountNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CloudPairingAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	BOOL _isAccountActive;
	NSObject*<OS_xpc_object> _cloudKitConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> cloudKitConnection;              //@synthesize cloudKitConnection=_cloudKitConnection - In the implementation block
@property (assign,nonatomic) BOOL isAccountActive;                                     //@synthesize isAccountActive=_isAccountActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2 ;
-(BOOL)isAccountActive;
-(void)setIsAccountActive:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)cloudKitConnection;
-(void)setCloudKitConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)accountModified;
-(id)daemonConection;
@end

