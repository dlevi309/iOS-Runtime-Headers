/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)accountMediaTypeInfoForProcessInfo:(id)arg1 ;
+(id)bundleInfoForProcessInfo:(id)arg1 ;
+(id)currentBundleInfo;
+(id)_clientNameFromProcessInfo:(id)arg1 ;
+(id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2 ;
+(id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2 ;
-(NSString *)scheme;
-(NSString *)bundleIdentifier;
-(void)setScheme:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)accountMediaType;
-(void)setAccountMediaType:(NSString *)arg1 ;
-(id)_initWithClient:(long long)arg1 processInfo:(id)arg2 ;
-(NSString *)secureScheme;
-(void)setSecureScheme:(NSString *)arg1 ;
@end

