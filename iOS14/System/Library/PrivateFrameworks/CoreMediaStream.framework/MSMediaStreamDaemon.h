/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSDaemon.h>

@protocol MSMediaStreamDaemonDelegate;
@class NSCountedSet;

@interface MSMediaStreamDaemon : MSDaemon {

	id<MSMediaStreamDaemonDelegate> _delegate;
	NSCountedSet* _retainedObjects;

}

@property (assign,nonatomic) id<MSMediaStreamDaemonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MSMediaStreamDaemonDelegate>)delegate;
-(void)start;
-(void)retryOutstandingActivities;
-(void)stop;
-(void)forgetPersonID:(id)arg1 ;
-(id)serverSideConfigurationForPersonID:(id)arg1 ;
-(void)pollForSubscriptionUpdatesForPersonID:(id)arg1 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)setDelegate:(id<MSMediaStreamDaemonDelegate>)arg1 ;
-(void)didIdle;
-(void)refreshServerSideConfigurationForPersonID:(id)arg1 ;
-(void)abortAllActivityForPersonID:(id)arg1 ;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1 ;
-(id)nextActivityDate;
-(BOOL)hasOutstandingActivity;
-(BOOL)personIDHasOutstandingPublications:(id)arg1 ;
-(BOOL)isInRetryState;
-(void)didUnidle;
-(id)_boundPublisherForPersonID:(id)arg1 ;
-(id)_boundSubscriberForPersonID:(id)arg1 ;
-(id)_boundDeleterForPersonID:(id)arg1 ;
-(id)_boundServerSideConfigManagerForPersonID:(id)arg1 ;
-(void)reenqueueQuarantinedActivitiesWithReason:(id)arg1 ;
-(void)stopAllActivities;
-(BOOL)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id*)arg3 ;
-(void)resetSubscriberSyncForPersonID:(id)arg1 ;
-(void)computeHashForAsset:(id)arg1 personID:(id)arg2 ;
-(id)subscribedStreamsForPersonID:(id)arg1 ;
-(id)ownSubscribedStreamForPersonID:(id)arg1 ;
-(void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2 ;
-(void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3 ;
-(void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2 ;
-(void)didReceiveAuthenticationFailureForPersonID:(id)arg1 ;
-(void)didReceiveAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg1 ;
-(void)didReceivePushNotificationForPersonID:(id)arg1 ;
-(BOOL)mayDownloadPersonID:(id)arg1 ;
@end

