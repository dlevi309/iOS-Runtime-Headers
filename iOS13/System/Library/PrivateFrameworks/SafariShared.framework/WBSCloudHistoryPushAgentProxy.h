/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSCloudHistoryPushAgent.h>

@class NSXPCConnection, NSString;

@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent> {

	NSXPCConnection* _agentConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1 ;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(id)queryMemoryFootprintWithError:(id*)arg1 ;
@end

