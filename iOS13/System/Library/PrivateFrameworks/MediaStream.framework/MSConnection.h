/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface MSConnection : NSObject {

	NSXPCConnection* _center;
	NSXPCConnection* _noWakeCenter;
	NSMutableDictionary* _serverSideConfig;
	NSObject*<OS_dispatch_queue> _serverSideConfigQueue;
	int _serverSideConfigNotificationToken;

}
+(id)sharedConnection;
-(id)init;
-(void)dealloc;
-(id)pause;
-(BOOL)isBusy;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)resume:(id)arg1 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)forgetPersonID:(id)arg1 ;
-(void)isBusyCompletionBlock:(/*^block*/id)arg1 ;
-(void)_waitForMessageToBeSent;
-(void)checkForOutstandingActivities;
-(void)handleSubscriptionPushForPersonID:(id)arg1 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(void)abortActivitiesForPersonID:(id)arg1 ;
-(id)_machErrorWithUnderlyingError:(id)arg1 ;
@end

