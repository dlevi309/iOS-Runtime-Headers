/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray, NSNumber, NSString, ICClientInfo, ICUserIdentity, ICUserIdentityStore, ICStorePlatformRequest;

@interface MPStoreItemMetadataRequest : NSObject {

	BOOL _allowLocalEquivalencies;
	BOOL _shouldIgnoreCache;
	BOOL _shouldIgnoreExpiration;
	BOOL _shouldRequireCachedResults;
	unsigned long long _reason;
	NSArray* _itemIdentifiers;
	NSNumber* _timeoutInterval;
	NSString* _platform;
	double _retryDelay;
	NSString* _clientIdentifier;
	long long _personalizationStyle;
	ICClientInfo* _clientInfo;
	ICUserIdentity* _delegatedUserIdentity;
	ICUserIdentity* _userIdentity;
	ICUserIdentityStore* _userIdentityStore;

}

@property (nonatomic,copy) ICClientInfo * clientInfo;                                           //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) ICUserIdentity * delegatedUserIdentity;                              //@synthesize delegatedUserIdentity=_delegatedUserIdentity - In the implementation block
@property (nonatomic,copy) ICUserIdentity * userIdentity;                                       //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,retain) ICUserIdentityStore * userIdentityStore;                           //@synthesize userIdentityStore=_userIdentityStore - In the implementation block
@property (nonatomic,copy,readonly) ICStorePlatformRequest * storePlatformRequest; 
@property (assign,nonatomic) BOOL allowLocalEquivalencies;                                      //@synthesize allowLocalEquivalencies=_allowLocalEquivalencies - In the implementation block
@property (assign,nonatomic) unsigned long long reason;                                         //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * itemIdentifiers;                                           //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,copy) NSNumber * timeoutInterval;                                          //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) NSString * platform;                                                 //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) double retryDelay;                                                 //@synthesize retryDelay=_retryDelay - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                                            //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreExpiration;                                       //@synthesize shouldIgnoreExpiration=_shouldIgnoreExpiration - In the implementation block
@property (assign,nonatomic) BOOL shouldRequireCachedResults;                                   //@synthesize shouldRequireCachedResults=_shouldRequireCachedResults - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (getter=isPersonalized,nonatomic,readonly) BOOL personalized; 
@property (assign,nonatomic) long long personalizationStyle;                                    //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
-(BOOL)shouldIgnoreCache;
-(ICUserIdentityStore *)userIdentityStore;
-(NSString *)platform;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(NSArray *)itemIdentifiers;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(id)init;
-(void)setPlatform:(NSString *)arg1 ;
-(BOOL)shouldRequireCachedResults;
-(ICClientInfo *)clientInfo;
-(void)setClientInfo:(ICClientInfo *)arg1 ;
-(ICStorePlatformRequest *)storePlatformRequest;
-(void)setDelegatedUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setShouldRequireCachedResults:(BOOL)arg1 ;
-(void)setRetryDelay:(double)arg1 ;
-(void)setShouldIgnoreExpiration:(BOOL)arg1 ;
-(BOOL)isPersonalized;
-(double)retryDelay;
-(NSNumber *)timeoutInterval;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(ICUserIdentity *)delegatedUserIdentity;
-(void)setUserIdentityStore:(ICUserIdentityStore *)arg1 ;
-(unsigned long long)reason;
-(long long)personalizationStyle;
-(BOOL)allowLocalEquivalencies;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(BOOL)shouldIgnoreExpiration;
-(NSString *)clientIdentifier;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setAllowLocalEquivalencies:(BOOL)arg1 ;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
@end

