/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSUUID, CMSAuthenticationConfiguration, CMSAuthenticationCredential, NSData, NSArray;

@interface MediaService : NSObject <NSSecureCoding, NSCopying> {

	BOOL _updateListeningHistoryEnabled;
	BOOL _authFatalError;
	BOOL _serviceRemovable;
	NSString* _serviceName;
	NSString* _bundleIdentifier;
	NSString* _accountName;
	NSURL* _iconImageURL;
	NSUUID* _serviceID;
	NSString* _serviceType;
	CMSAuthenticationConfiguration* _authConfiguration;
	CMSAuthenticationCredential* _authCredential;
	NSURL* _configURL;
	NSString* _configPublicKey;
	NSString* _configETag;
	NSData* _configAsset;
	NSURL* _remoteIconURL;
	NSArray* _alternateBundleIdentifiers;

}

@property (nonatomic,copy) NSString * serviceName;                                            //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSUUID * serviceID;                                                //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountName;                                            //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                            //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) CMSAuthenticationConfiguration * authConfiguration;              //@synthesize authConfiguration=_authConfiguration - In the implementation block
@property (nonatomic,retain) CMSAuthenticationCredential * authCredential;                    //@synthesize authCredential=_authCredential - In the implementation block
@property (assign,nonatomic) BOOL authFatalError;                                             //@synthesize authFatalError=_authFatalError - In the implementation block
@property (nonatomic,retain) NSURL * configURL;                                               //@synthesize configURL=_configURL - In the implementation block
@property (nonatomic,copy) NSString * configPublicKey;                                        //@synthesize configPublicKey=_configPublicKey - In the implementation block
@property (nonatomic,copy) NSString * configETag;                                             //@synthesize configETag=_configETag - In the implementation block
@property (nonatomic,retain) NSData * configAsset;                                            //@synthesize configAsset=_configAsset - In the implementation block
@property (nonatomic,retain) NSURL * iconImageURL;                                            //@synthesize iconImageURL=_iconImageURL - In the implementation block
@property (nonatomic,retain) NSURL * remoteIconURL;                                           //@synthesize remoteIconURL=_remoteIconURL - In the implementation block
@property (nonatomic,retain) NSArray * alternateBundleIdentifiers;                            //@synthesize alternateBundleIdentifiers=_alternateBundleIdentifiers - In the implementation block
@property (assign,getter=isServiceRemovable,nonatomic) BOOL serviceRemovable;                 //@synthesize serviceRemovable=_serviceRemovable - In the implementation block
@property (assign,nonatomic) BOOL updateListeningHistoryEnabled;                              //@synthesize updateListeningHistoryEnabled=_updateListeningHistoryEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(NSData *)configAsset;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)serviceID;
-(NSString *)bundleIdentifier;
-(void)setServiceID:(NSUUID *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)iconImageURL;
-(void)setIconImageURL:(NSURL *)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)updateListeningHistoryEnabled;
-(BOOL)isServiceRemovable;
-(BOOL)authFatalError;
-(id)_failWithError:(unsigned long long)arg1 errorString:(id)arg2 ;
-(id)initWithMediaServiceIdentifier:(id)arg1 ;
-(void)setAuthCredential:(CMSAuthenticationCredential *)arg1 ;
-(void)setAuthConfiguration:(CMSAuthenticationConfiguration *)arg1 ;
-(void)setAuthFatalError:(BOOL)arg1 ;
-(void)setUpdateListeningHistoryEnabled:(BOOL)arg1 ;
-(void)setServiceRemovable:(BOOL)arg1 ;
-(void)setRemoteIconURL:(NSURL *)arg1 ;
-(void)setConfigAsset:(NSData *)arg1 ;
-(void)setConfigPublicKey:(NSString *)arg1 ;
-(void)setConfigETag:(NSString *)arg1 ;
-(void)setConfigURL:(NSURL *)arg1 ;
-(void)setAlternateBundleIdentifiers:(NSArray *)arg1 ;
-(id)initWithServiceAccount:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(CMSAuthenticationConfiguration *)authConfiguration;
-(CMSAuthenticationCredential *)authCredential;
-(NSURL *)configURL;
-(NSString *)configPublicKey;
-(NSString *)configETag;
-(NSURL *)remoteIconURL;
-(NSArray *)alternateBundleIdentifiers;
@end

