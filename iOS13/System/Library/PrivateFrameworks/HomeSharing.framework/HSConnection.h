/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSURLSession, NSURL, HSFairPlayInfo, NSString;

@interface HSConnection : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_source> _activityTimerSource;
	NSURLSession* _connectionSession;
	unsigned _databaseID;
	unsigned _databaseRevision;
	unsigned _basePlaylistContainerID;
	unsigned _sessionID;
	NSURL* _baseURL;
	long long _connectionType;
	long long _connectionState;
	HSFairPlayInfo* _fairPlayInfo;
	NSString* _homeSharingGroupID;

}

@property (assign,nonatomic) unsigned basePlaylistContainerID;              //@synthesize basePlaylistContainerID=_basePlaylistContainerID - In the implementation block
@property (assign,nonatomic) long long connectionState;                     //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned databaseID;                           //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned databaseRevision;                     //@synthesize databaseRevision=_databaseRevision - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) long long connectionType;                    //@synthesize connectionType=_connectionType - In the implementation block
@property (retain) HSFairPlayInfo * fairPlayInfo;                           //@synthesize fairPlayInfo=_fairPlayInfo - In the implementation block
@property (copy) NSString * homeSharingGroupID;                             //@synthesize homeSharingGroupID=_homeSharingGroupID - In the implementation block
-(void)dealloc;
-(NSURL *)baseURL;
-(void)disconnect;
-(long long)connectionType;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
-(long long)connectionState;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(unsigned)databaseID;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDatabaseID:(unsigned)arg1 ;
-(NSString *)homeSharingGroupID;
-(id)signedRequestFromURLRequest:(id)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
-(void)setDatabaseRevision:(unsigned)arg1 ;
-(unsigned)databaseRevision;
-(id)initWithBaseURL:(id)arg1 connectionType:(long long)arg2 ;
-(void)setHomeSharingGroupID:(NSString *)arg1 ;
-(void)setFairPlayInfo:(HSFairPlayInfo *)arg1 ;
-(HSFairPlayInfo *)fairPlayInfo;
-(unsigned)_sapVersionForConnectionType;
-(void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadDatabaseWithInternalConnectionCompletionHandler:(/*^block*/id)arg1 ;
-(void)_sendRequest:(id)arg1 withInternalResponseHandler:(/*^block*/id)arg2 ;
-(void)setBasePlaylistContainerID:(unsigned)arg1 ;
-(unsigned)basePlaylistContainerID;
-(void)checkForDatabaseUpdatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onSerialQueue_sendRequest:(id)arg1 withInternalResponseHandler:(/*^block*/id)arg2 ;
-(id)_onSerialQueue_connectionSession;
@end

