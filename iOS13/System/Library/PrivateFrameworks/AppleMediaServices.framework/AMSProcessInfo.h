/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	AMSMappedBundleInfo* _mappedBundleInfo;

}

@property (nonatomic,readonly) AMSMappedBundleInfo * mappedBundleInfo;              //@synthesize mappedBundleInfo=_mappedBundleInfo - In the implementation block
@property (nonatomic,retain) NSString * accountMediaType;                           //@synthesize accountMediaType=_accountMediaType - In the implementation block
@property (nonatomic,retain) NSData * auditTokenData;                               //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                              //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * executableName;                             //@synthesize executableName=_executableName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * partnerHeader; 
@property (nonatomic,retain) NSString * proxyAppBundleID;                           //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)valueForEntitlement:(id)arg1 ;
+(id)currentProcess;
+(id)defaultMediaTypeForCurrentProcess;
+(BOOL)isBuddyRunning;
+(BOOL)boolForEntitlement:(id)arg1 ;
+(id)_cachedProcessInfoForIdentifier:(id)arg1 ;
+(void)copyPropertiesFrom:(id)arg1 to:(id)arg2 ;
+(id)bundleForIdentifier:(id)arg1 ;
+(void)_cacheProcessInfo:(id)arg1 ;
+(id)_currentProcessBundleIdentifier;
+(id)defaultMediaTypeAccessQueue;
+(void)_accessProcessInfoCache:(/*^block*/id)arg1 ;
+(BOOL)boolForMachLookupAccess:(id)arg1 ;
+(void)setDefaultMediaTypeForCurrentProcess:(id)arg1 ;
+(id)stringForEntitlement:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)localizedName;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)executableName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)accountMediaType;
-(NSString *)proxyAppBundleID;
-(void)setAccountMediaType:(NSString *)arg1 ;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(NSData *)auditTokenData;
-(NSString *)partnerHeader;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(id)generateConfiguration;
-(id)generateConfigurationFromBag:(id)arg1 ;
-(id)generateConfigurationFromBagContract:(id)arg1 ;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(void)setExecutableName:(NSString *)arg1 ;
-(AMSMappedBundleInfo *)mappedBundleInfo;
@end

