/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSData, NSURL, AMSMappedBundleInfo;

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _partnerHeader;
	NSString* _accountMediaType;
	NSData* _auditTokenData;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _clientVersion;
	NSString* _executableName;
	NSString* _localizedName;
	NSString* _proxyAppBundleID;
	NSString* _userAgentSuffix;
	AMSMappedBundleInfo* _mappedBundleInfo;

}

@property (getter=isAccountsDaemon,nonatomic,readonly) BOOL accountsDaemon; 
@property (nonatomic,readonly) AMSMappedBundleInfo * mappedBundleInfo;                   //@synthesize mappedBundleInfo=_mappedBundleInfo - In the implementation block
@property (nonatomic,retain) NSString * accountMediaType;                                //@synthesize accountMediaType=_accountMediaType - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                                    //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                          //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                                   //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * executableName;                                  //@synthesize executableName=_executableName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * partnerHeader; 
@property (nonatomic,retain) NSString * proxyAppBundleID;                                //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
@property (nonatomic,retain) NSString * userAgentSuffix;                                 //@synthesize userAgentSuffix=_userAgentSuffix - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isBuddyRunning;
+(id)defaultMediaTypeForCurrentProcess;
+(id)_bundleForIdentifier:(id)arg1 record:(id)arg2 ;
+(id)_currentProcessBundleIdentifier;
+(id)stringForEntitlement:(id)arg1 ;
+(BOOL)boolForMachLookupAccess:(id)arg1 ;
+(void)_accessProcessInfoCache:(/*^block*/id)arg1 ;
+(id)currentProcess;
+(BOOL)boolForEntitlement:(id)arg1 ;
+(id)_cachedProcessInfoForIdentifier:(id)arg1 ;
+(id)_bundleRecordForIdentifier:(id)arg1 ;
+(id)defaultMediaTypeAccessQueue;
+(void)copyPropertiesFrom:(id)arg1 to:(id)arg2 ;
+(id)valueForEntitlement:(id)arg1 ;
+(void)setDefaultMediaTypeForCurrentProcess:(id)arg1 ;
+(void)_cacheProcessInfo:(id)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(NSURL *)bundleURL;
-(void)setBundleURL:(NSURL *)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)clientVersion;
-(void)setAccountMediaType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)userAgentSuffix;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(void)setExecutableName:(NSString *)arg1 ;
-(NSString *)executableName;
-(id)description;
-(void)setUserAgentSuffix:(NSString *)arg1 ;
-(NSString *)accountMediaType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)generateConfigurationFromBagContract:(id)arg1 ;
-(id)generateConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)auditTokenData;
-(AMSMappedBundleInfo *)mappedBundleInfo;
-(BOOL)isAccountsDaemon;
-(NSString *)proxyAppBundleID;
-(id)generateConfigurationFromBag:(id)arg1 ;
-(NSString *)partnerHeader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

