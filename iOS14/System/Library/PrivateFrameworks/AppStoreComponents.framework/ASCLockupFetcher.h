/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@protocol ASCServices;
@class ASCPendingPromises, ASCTaskCoordinator;

@interface ASCLockupFetcher : NSObject {

	id<ASCServices> _connection;
	ASCPendingPromises* _pendingRequests;
	ASCTaskCoordinator* _fetchCoordinator;

}

@property (nonatomic,readonly) id<ASCServices> connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) ASCPendingPromises * pendingRequests;               //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) ASCTaskCoordinator * fetchCoordinator;              //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
+(id)sharedFetcher;
-(id)initWithConnection:(id)arg1 ;
-(ASCPendingPromises *)pendingRequests;
-(id<ASCServices>)connection;
-(ASCTaskCoordinator *)fetchCoordinator;
-(void)dealloc;
-(void)daemonConnectionWasLost:(id)arg1 ;
-(void)daemonDidRebootstrap:(id)arg1 ;
-(id)loadedLockupWithRequest:(id)arg1 ;
-(id)lockupWithRequest:(id)arg1 ;
-(void)submitBatchRequest:(id)arg1 ;
@end

