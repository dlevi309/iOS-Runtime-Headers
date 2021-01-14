/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ICUserIdentityStore *)userIdentityStore;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithIdentityStore:(id)arg1 ;
-(id)initWithContainerDirectoryURL:(id)arg1 ;
-(id)initWithContainerDirectoryURL:(id)arg1 identityStore:(id)arg2 ;
-(id)_playbackHistoryOfClass:(Class)arg1 forStationWithIdentifier:(id)arg2 identityKey:(id)arg3 error:(id*)arg4 ;
-(void)_getCacheKeyForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fileURLForStationWithIdentifier:(id)arg1 identityKey:(id)arg2 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)containerDirectoryURL;
-(void)removeHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

