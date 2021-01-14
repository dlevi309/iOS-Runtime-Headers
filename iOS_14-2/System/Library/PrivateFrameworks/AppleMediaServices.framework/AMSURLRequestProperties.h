/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol AMSBagProtocol, AMSResponseDecoding;
@class ACAccount, NSDictionary, AMSProcessInfo, AMSKeychainOptions, NSString, AMSPurchaseInfo, NSMutableDictionary;

@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying> {

	BOOL _disableLoadURLMetrics;
	BOOL _knownToBeTrusted;
	BOOL _remoteSecuritySigningEnabled;
	BOOL _disableResponseDecoding;
	BOOL _shouldSetCookiesFromResponse;
	BOOL _shouldSetStorefrontFromResponse;
	ACAccount* _account;
	NSDictionary* _additionalMetrics;
	long long _anisetteType;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	long long _dialogOptions;
	AMSKeychainOptions* _keychainOptions;
	NSString* _logUUID;
	long long _maxRetryCount;
	long long _mescalType;
	AMSPurchaseInfo* _purchaseInfo;
	id<AMSResponseDecoding> _responseDecoder;
	long long _reversePushType;
	NSMutableDictionary* _userInfo;

}

@property (nonatomic,retain) ACAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMetrics;                     //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
@property (assign,nonatomic) long long anisetteType;                               //@synthesize anisetteType=_anisetteType - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                               //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                          //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,nonatomic) long long dialogOptions;                              //@synthesize dialogOptions=_dialogOptions - In the implementation block
@property (assign,nonatomic) BOOL disableLoadURLMetrics;                           //@synthesize disableLoadURLMetrics=_disableLoadURLMetrics - In the implementation block
@property (nonatomic,retain) AMSKeychainOptions * keychainOptions;                 //@synthesize keychainOptions=_keychainOptions - In the implementation block
@property (assign,nonatomic) BOOL knownToBeTrusted;                                //@synthesize knownToBeTrusted=_knownToBeTrusted - In the implementation block
@property (nonatomic,retain) NSString * logUUID;                                   //@synthesize logUUID=_logUUID - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                              //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (assign,nonatomic) long long mescalType;                                 //@synthesize mescalType=_mescalType - In the implementation block
@property (nonatomic,retain) AMSPurchaseInfo * purchaseInfo;                       //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (assign,nonatomic) BOOL remoteSecuritySigningEnabled;                    //@synthesize remoteSecuritySigningEnabled=_remoteSecuritySigningEnabled - In the implementation block
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder;              //@synthesize responseDecoder=_responseDecoder - In the implementation block
@property (assign,nonatomic) BOOL disableResponseDecoding;                         //@synthesize disableResponseDecoding=_disableResponseDecoding - In the implementation block
@property (assign,nonatomic) long long reversePushType;                            //@synthesize reversePushType=_reversePushType - In the implementation block
@property (assign,nonatomic) BOOL shouldSetCookiesFromResponse;                    //@synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse - In the implementation block
@property (assign,nonatomic) BOOL shouldSetStorefrontFromResponse;                 //@synthesize shouldSetStorefrontFromResponse=_shouldSetStorefrontFromResponse - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
-(long long)mescalType;
-(long long)dialogOptions;
-(void)setLogUUID:(NSString *)arg1 ;
-(NSString *)logUUID;
-(void)setKeychainOptions:(AMSKeychainOptions *)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(ACAccount *)account;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(void)setRemoteSecuritySigningEnabled:(BOOL)arg1 ;
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(void)setReversePushType:(long long)arg1 ;
-(AMSKeychainOptions *)keychainOptions;
-(id)init;
-(AMSProcessInfo *)clientInfo;
-(BOOL)disableLoadURLMetrics;
-(AMSPurchaseInfo *)purchaseInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setMaxRetryCount:(long long)arg1 ;
-(BOOL)shouldSetStorefrontFromResponse;
-(NSDictionary *)additionalMetrics;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setDialogOptions:(long long)arg1 ;
-(long long)maxRetryCount;
-(BOOL)disableResponseDecoding;
-(void)setDisableResponseDecoding:(BOOL)arg1 ;
-(void)setAnisetteType:(long long)arg1 ;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(BOOL)shouldSetCookiesFromResponse;
-(id<AMSResponseDecoding>)responseDecoder;
-(BOOL)knownToBeTrusted;
-(long long)reversePushType;
-(void)setPurchaseInfo:(AMSPurchaseInfo *)arg1 ;
-(BOOL)remoteSecuritySigningEnabled;
-(void)setShouldSetCookiesFromResponse:(BOOL)arg1 ;
-(long long)anisetteType;
-(void)setMescalType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldSetStorefrontFromResponse:(BOOL)arg1 ;
-(void)setDisableLoadURLMetrics:(BOOL)arg1 ;
-(void)setKnownToBeTrusted:(BOOL)arg1 ;
@end

