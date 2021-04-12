/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSMappedBundleInfo : NSObject {

	NSString* _bundleIdentifier;
	NSString* _clientName;
	NSString* _clientVersion;
	NSString* _scheme;
	NSString* _secureScheme;
	NSString* _accountMediaType;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientName;                    //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * scheme;                        //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) NSString * secureScheme;                  //@synthesize secureScheme=_secureScheme - In the implementation block
@property (nonatomic,retain) NSString * accountMediaType;              //@synthesize accountMediaType=_accountMediaType - In the implementation block
+(id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2 ;
+(id)currentBundleInfo;
+(id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2 ;
+(id)bundleInfoForProcessInfo:(id)arg1 ;
+(id)_clientNameFromProcessInfo:(id)arg1 ;
+(id)accountMediaTypeInfoForProcessInfo:(id)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(NSString *)scheme;
-(void)setSecureScheme:(NSString *)arg1 ;
-(NSString *)clientName;
-(id)_initWithClient:(long long)arg1 processInfo:(id)arg2 ;
-(NSString *)clientVersion;
-(void)setAccountMediaType:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)accountMediaType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)secureScheme;
@end

