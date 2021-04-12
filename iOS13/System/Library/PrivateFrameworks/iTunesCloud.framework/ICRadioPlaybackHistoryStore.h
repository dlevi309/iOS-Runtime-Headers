/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSOperationQueue, ICUserIdentityStore;

@interface ICRadioPlaybackHistoryStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURL* _containerURL;
	NSOperationQueue* _identityResolutionQueue;
	ICUserIdentityStore* _identityStore;

}

@property (nonatomic,copy,readonly) NSURL * containerDirectoryURL;                   //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * userIdentityStore;              //@synthesize identityStore=_identityStore - In the implementation block
+(id)_defaultContainerURL;
-(id)init;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(ICUserIdentityStore *)userIdentityStore;
-(id)initWithContainerDirectoryURL:(id)arg1 ;
-(id)initWithContainerDirectoryURL:(id)arg1 identityStore:(id)arg2 ;
-(id)_playbackHistoryOfClass:(Class)arg1 forStationWithIdentifier:(id)arg2 identityKey:(id)arg3 error:(id*)arg4 ;
-(void)_getCacheKeyForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fileURLForStationWithIdentifier:(id)arg1 identityKey:(id)arg2 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithIdentityStore:(id)arg1 ;
-(void)getHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSURL *)containerDirectoryURL;
@end

