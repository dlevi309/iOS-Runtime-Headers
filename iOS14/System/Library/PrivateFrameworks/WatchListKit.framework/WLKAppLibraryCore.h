/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PSSSSubscriptionManagerInternal;

@interface WLKAppLibraryCore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	PSSSSubscriptionManagerInternal* _subscriptionManager;

}
+(id)sharedInstance;
-(id)init;
-(id)_connection;
-(void)_fetchApplicationsInProcess:(/*^block*/id)arg1 ;
-(void)fetchApplications:(/*^block*/id)arg1 ;
-(id)_nonConformingBundleList;
-(id)_otherBundlesOfInterest;
@end

