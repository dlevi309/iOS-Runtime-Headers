/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ICMusicSubscriptionLeaseSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSOperationQueue;

@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableDictionary* _accountDSIDToFairPlayKeyStatus;
	NSMutableDictionary* _cacheKeyToLeaseSession;
	BOOL _hasReceivedUserInteractionEvent;
	BOOL _isRemoteServerLikelyReachable;
	BOOL _isServerReachable;
	NSString* _lastKnownHouseholdID;
	int _leaseDidEndNotificationToken;
	NSOperationQueue* _leaseSessionPreparationOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)_init;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)getLeaseSessionWithRequestContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)musicLeaseSession:(id)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(/*^block*/id)arg2 ;
-(void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_handlePlaybackLeaseDidEndPushNotification;
-(void)getLastKnownHouseholdIDWithCompletion:(/*^block*/id)arg1 ;
-(void)receivedUserInteractionEvent;
@end

