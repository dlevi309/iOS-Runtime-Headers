/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSObject;

@interface MSConnection : NSObject {

	NSXPCConnection* _center;
	NSMutableDictionary* _serverSideConfig;
	NSObject*<OS_dispatch_queue> _serverSideConfigQueue;
	int _serverSideConfigNotificationToken;

}
+(id)sharedConnection;
-(void)resume:(id)arg1 ;
-(id)init;
-(id)pause;
-(void)deleteAssetCollections:(id)arg1 personID:(id)arg2 ;
-(void)forgetPersonID:(id)arg1 ;
-(void)resetServerStateForPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(BOOL)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)dealloc;
-(void)_waitForMessageToBeSent;
-(void)checkForOutstandingActivities;
-(void)handleSubscriptionPushForPersonID:(id)arg1 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(void)abortActivitiesForPersonID:(id)arg1 ;
-(id)_machErrorWithUnderlyingError:(id)arg1 ;
@end

