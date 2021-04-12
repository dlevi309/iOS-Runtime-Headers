/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>
#import <libobjc.A.dylib/AMSMediaTokenServiceProtocol.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSURLSession, ACAccount, NSString, AMSProcessInfo, AMSMediaTokenServiceThrottler, NSObject, AMSMediaTokenServiceStore, AMSMediaToken;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSMediaTokenServiceProtocol> {

	BOOL _enabled;
	BOOL _URLKnownToBeTrusted;
	AMSURLSession* _session;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSString* _clientIdentifier;
	AMSProcessInfo* _clientInfo;
	NSString* _clientVersion;
	AMSMediaTokenServiceThrottler* _throttler;
	NSObject*<OS_dispatch_queue> _tokenFetchQueue;
	AMSMediaTokenServiceStore* _tokenStore;
	double _refreshPercentage;
	double _refreshTime;

}

@property (nonatomic,retain) AMSMediaToken * cachedMediaToken; 
@property (nonatomic,readonly) AMSMediaTokenServiceThrottler * throttler;                 //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> tokenFetchQueue;              //@synthesize tokenFetchQueue=_tokenFetchQueue - In the implementation block
@property (nonatomic,readonly) AMSMediaTokenServiceStore * tokenStore;                    //@synthesize tokenStore=_tokenStore - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double refreshPercentage;                                    //@synthesize refreshPercentage=_refreshPercentage - In the implementation block
@property (assign,nonatomic) double refreshTime;                                          //@synthesize refreshTime=_refreshTime - In the implementation block
@property (assign,nonatomic) BOOL URLKnownToBeTrusted;                                    //@synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted - In the implementation block
@property (nonatomic,retain) ACAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                      //@synthesize bag=_bag - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                 //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) NSString * keychainAccessGroup; 
@property (assign,nonatomic,__weak) AMSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * clientVersion;                                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)clientIdentifier;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSString *)clientVersion;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(void)invalidateMediaToken;
-(id)fetchMediaToken;
-(BOOL)URLKnownToBeTrusted;
-(void)setURLKnownToBeTrusted:(BOOL)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 bag:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3 ;
-(AMSMediaTokenServiceStore *)tokenStore;
-(NSString *)keychainAccessGroup;
-(void)setKeychainAccessGroup:(NSString *)arg1 ;
-(id)_fetchBagProperties;
-(AMSMediaToken *)cachedMediaToken;
-(BOOL)_shouldReturnMediaToken:(id)arg1 ;
-(void)_refreshMediaTokenIfNeeded:(id)arg1 ;
-(id)_fetchToken;
-(void)setCachedMediaToken:(AMSMediaToken *)arg1 ;
-(AMSMediaTokenServiceThrottler *)throttler;
-(void)setRefreshPercentage:(double)arg1 ;
-(void)setRefreshTime:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)tokenFetchQueue;
-(id)_tokenRequestWithError:(id*)arg1 ;
-(BOOL)_shouldRefreshMediaToken:(id)arg1 ;
-(double)refreshPercentage;
-(double)refreshTime;
-(id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3 ;
@end

