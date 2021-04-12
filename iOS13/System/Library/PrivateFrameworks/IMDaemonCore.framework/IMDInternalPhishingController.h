/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol OS_dispatch_queue;
@class IMRemoteURLConnection, NSArray, NSObject;

@interface IMDInternalPhishingController : NSObject {

	IMRemoteURLConnection* _remoteURLConnection;
	NSArray* _blacklist;
	double _lastBlacklistSync;
	NSObject*<OS_dispatch_queue> _blacklistDiskQueue;

}

@property (retain) IMRemoteURLConnection * remoteURLConnection;                  //@synthesize remoteURLConnection=_remoteURLConnection - In the implementation block
@property (retain) NSArray * blacklist;                                          //@synthesize blacklist=_blacklist - In the implementation block
@property (assign) double lastBlacklistSync;                                     //@synthesize lastBlacklistSync=_lastBlacklistSync - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> blacklistDiskQueue;              //@synthesize blacklistDiskQueue=_blacklistDiskQueue - In the implementation block
+(id)sharedInstance;
+(BOOL)_isAppleInternal;
+(BOOL)_hasAppleConnect;
+(BOOL)allowPhishingCheck;
-(id)init;
-(void)dealloc;
-(id)_endpoint;
-(void)setBlacklist:(NSArray *)arg1 ;
-(NSArray *)blacklist;
-(IMRemoteURLConnection *)remoteURLConnection;
-(void)setBlacklistDiskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadBlacklistFromDiskAsync:(BOOL)arg1 ;
-(void)fetchBlacklistFromNetworkWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)blacklistDiskQueue;
-(double)lastBlacklistSync;
-(void)setLastBlacklistSync:(double)arg1 ;
-(void)setRemoteURLConnection:(IMRemoteURLConnection *)arg1 ;
-(id)_apiKey;
-(void)_persistBlacklist:(BOOL)arg1 ;
-(BOOL)blacklistMessage:(id)arg1 ;
@end

