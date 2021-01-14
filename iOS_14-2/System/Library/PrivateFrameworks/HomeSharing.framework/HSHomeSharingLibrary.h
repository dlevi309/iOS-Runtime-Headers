/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURL, NSNetService, HSConnection;

@interface HSHomeSharingLibrary : NSObject {

	NSObject*<OS_dispatch_queue> _connectionAccessQueue;
	BOOL _requiresPassword;
	BOOL _available;
	BOOL __hasPendingUpdateRequest;
	unsigned _version;
	NSString* _name;
	NSString* _uniqueIdentifier;
	NSString* _homeSharingGroupID;
	NSURL* _baseURL;
	NSNetService* _service;
	long long _connectionType;
	HSConnection* _connection;

}

@property (assign,nonatomic) BOOL _hasPendingUpdateRequest;                     //@synthesize _hasPendingUpdateRequest=__hasPendingUpdateRequest - In the implementation block
@property (nonatomic,retain) HSConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL requiresPassword;                           //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID;              //@synthesize homeSharingGroupID=_homeSharingGroupID - In the implementation block
@property (nonatomic,retain,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (getter=isAvailable,nonatomic,readonly) BOOL available;               //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) NSNetService * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) unsigned databaseID; 
@property (nonatomic,readonly) unsigned basePlaylistContainerID; 
@property (nonatomic,readonly) long long connectionType;                        //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,readonly) NSString * deviceGUID; 
-(void)disconnect;
-(BOOL)isAvailable;
-(long long)connectionState;
-(NSURL *)baseURL;
-(BOOL)requiresPassword;
-(long long)connectionType;
-(id)signedRequestFromURLRequest:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)name;
-(NSString *)homeSharingGroupID;
-(HSConnection *)connection;
-(NSString *)deviceGUID;
-(void)setService:(NSNetService *)arg1 ;
-(unsigned long long)hash;
-(unsigned)databaseID;
-(void)setConnection:(HSConnection *)arg1 ;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)urlForRequest:(id)arg1 ;
-(id)securityInfoForURL:(id)arg1 ;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
-(NSNetService *)service;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned)arg3 baseURL:(id)arg4 homeSharingGroupID:(id)arg5 connectionType:(long long)arg6 ;
-(unsigned)basePlaylistContainerID;
-(void)_sendUpdateRequest;
-(void)_onQueue_ensureConnection;
-(void)set_hasPendingUpdateRequest:(BOOL)arg1 ;
-(BOOL)_hasPendingUpdateRequest;
@end

