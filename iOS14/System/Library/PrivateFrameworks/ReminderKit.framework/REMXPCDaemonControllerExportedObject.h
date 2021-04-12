/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMXPCClient.h>

@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;
@interface REMXPCDaemonControllerExportedObject : NSObject <REMXPCClient> {

	id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> _cloudKitNetworkActivityDelegate;

}

@property (assign,nonatomic,__weak) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;              //@synthesize cloudKitNetworkActivityDelegate=_cloudKitNetworkActivityDelegate - In the implementation block
-(void)setCloudKitNetworkActivityDelegate:(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)arg1 ;
-(void)cloudKitNetworkActivityDidUpdate:(id)arg1 ;
-(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)cloudKitNetworkActivityDelegate;
@end

