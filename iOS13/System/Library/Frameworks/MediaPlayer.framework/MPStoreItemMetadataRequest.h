/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)reason;
-(NSString *)platform;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(double)retryDelay;
-(void)setReason:(unsigned long long)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(NSNumber *)timeoutInterval;
-(NSArray *)itemIdentifiers;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(NSString *)clientIdentifier;
-(ICClientInfo *)clientInfo;
-(void)setClientInfo:(ICClientInfo *)arg1 ;
-(BOOL)isPersonalized;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(ICUserIdentityStore *)userIdentityStore;
-(ICStorePlatformRequest *)storePlatformRequest;
-(BOOL)allowLocalEquivalencies;
-(void)setAllowLocalEquivalencies:(BOOL)arg1 ;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(void)setRetryDelay:(double)arg1 ;
-(BOOL)shouldIgnoreCache;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(BOOL)shouldIgnoreExpiration;
-(void)setShouldIgnoreExpiration:(BOOL)arg1 ;
-(BOOL)shouldRequireCachedResults;
-(void)setShouldRequireCachedResults:(BOOL)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(ICUserIdentity *)delegatedUserIdentity;
-(void)setDelegatedUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setUserIdentityStore:(ICUserIdentityStore *)arg1 ;
@end

