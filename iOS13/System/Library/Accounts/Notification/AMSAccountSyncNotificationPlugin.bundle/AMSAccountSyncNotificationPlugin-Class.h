/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Accounts/Notification/AMSAccountSyncNotificationPlugin.bundle/AMSAccountSyncNotificationPlugin
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AMSAccountSyncNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldProcessChangeForAccount:(id)arg1 oldAccount:(id)arg2 changeType:(int)arg3 store:(id)arg4 ;
+(BOOL)_shouldConsiderAccountActive:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_synciTunesAccountAddition:(id)arg1 inStore:(id)arg2 allowAccountRepair:(BOOL)arg3 ;
-(void)_synciTunesAccountDeletion:(id)arg1 inStore:(id)arg2 ;
-(void)_synciTunesAccountModification:(id)arg1 inStore:(id)arg2 allowAccountRepair:(BOOL)arg3 ;
-(BOOL)_sendRemoteDeviceCommand:(id)arg1 forAccount:(id)arg2 inStore:(id)arg3 error:(id*)arg4 ;
@end

