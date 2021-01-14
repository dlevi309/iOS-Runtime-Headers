/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UABestAppSuggestionManagerResponseProtocol.h>

@protocol UABestAppSuggestionManagerDelegate;
@class UABestAppSuggestion, NSXPCConnection, UABestAppSuggestionManagerProxy, NSString;

@interface UABestAppSuggestionManager : NSObject <UABestAppSuggestionManagerResponseProtocol> {

	id<UABestAppSuggestionManagerDelegate> _delegate;
	BOOL _listeningForBestAppSuggestions;
	int _bestAppNotificationCount;
	UABestAppSuggestion* _lastBestAppSuggestion;
	NSXPCConnection* _connection;
	UABestAppSuggestionManagerProxy* _proxyManager;

}

@property (retain) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (retain) UABestAppSuggestionManagerProxy * proxyManager;               //@synthesize proxyManager=_proxyManager - In the implementation block
@property (__weak) id<UABestAppSuggestionManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bestAppSuggestions:(long long)arg1 ;
-(id)init;
-(id<UABestAppSuggestionManagerDelegate>)delegate;
-(UABestAppSuggestionManagerProxy *)proxyManager;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 ;
-(void)startListeningForBestAppSuggestions;
-(void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2 ;
-(id)bestAppSuggestion;
-(void)setProxyManager:(UABestAppSuggestionManagerProxy *)arg1 ;
-(BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<UABestAppSuggestionManagerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1 ;
-(BOOL)isActivityInfo:(id)arg1 atTime:(id)arg2 similarToAppSuggestion:(id)arg3 ;
-(void)launchAppWithBestAppSuggestion:(id)arg1 ;
-(BOOL)fetchAllNearbyAppSuggestions;
-(void)bestAppSuggestionLaunchWasCancelled:(id)arg1 ;
-(void)removeBestAppByUUID:(id)arg1 options:(id)arg2 ;
-(void)removeBestApp:(id)arg1 options:(id)arg2 ;
-(void)stopListeningForBestAppSuggestions;
-(void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceIdentifier:(id)arg5 deviceType:(id)arg6 ;
-(id)createAppSuggestionFromActivityInfo:(id)arg1 atTime:(id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(unsigned long long)arg2 ;
-(void)notifyBestAppsChanged:(id)arg1 when:(id)arg2 confidence:(double)arg3 ;
-(void)dealloc;
@end

