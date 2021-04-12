/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OS_dispatch_queue;
#import <Osprey/Osprey-Structs.h>
@class NSObject, NSData, OspreyGRPCChannel, NSString, NSDate, NSURL, OspreyKeychain;

@interface OspreyAbsintheAuthenticator : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NACContextOpaque_Ref _nacContext;
	NSData* _certificateData;
	OspreyGRPCChannel* _channel;
	NSString* _uuid;
	NSDate* _sessionExpireOn;
	long long _state;
	NSData* _sessionInfo;
	NSURL* _server;
	OspreyKeychain* _keychainStorage;

}

@property (assign,nonatomic) long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * sessionInfo;                                 //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,retain) NSURL * server;                                       //@synthesize server=_server - In the implementation block
@property (assign,nonatomic,__weak) OspreyKeychain * keychainStorage;              //@synthesize keychainStorage=_keychainStorage - In the implementation block
@property (nonatomic,readonly) NSDate * sessionExpireOn;                           //@synthesize sessionExpireOn=_sessionExpireOn - In the implementation block
+(void)initialize;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setServer:(NSURL *)arg1 ;
-(NSURL *)server;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
-(void)didMoveToState:(long long)arg1 ;
-(id)initWithURL:(id)arg1 channel:(id)arg2 keychainStorage:(id)arg3 ;
-(OspreyKeychain *)keychainStorage;
-(id)_prefixIdentifierWithOsprey:(id)arg1 ;
-(void)willMoveToState:(long long)arg1 ;
-(void)deleteCachedCertificateDataWithEndpoint:(id)arg1 ;
-(BOOL)_readyToSignClientData;
-(id)_signData:(id)arg1 ;
-(void)_ensureAuthenticatedWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)setCachedCertificateData:(id)arg1 endpoint:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)fetchAbsintheServerCertificate:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)getCachedCertificateDataWithEndpoint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)createClientSessionWithData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(/*^block*/id)arg2 fail:(/*^block*/id)arg3 ;
-(BOOL)isSessionInfoExpired;
-(id)initWithURL:(id)arg1 channel:(id)arg2 ;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(NSDate *)sessionExpireOn;
-(void)setKeychainStorage:(OspreyKeychain *)arg1 ;
@end

