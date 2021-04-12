/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACFCryptographProtocol, ACFKeychainManagerProtocol, ACFCertificateStoragePolicy;
@interface ACFComponents : NSObject {

	id<ACFCryptographProtocol> _cryptograph;
	id<ACFKeychainManagerProtocol> _keychainManager;
	id<ACFCertificateStoragePolicy> _certificateStoragePolicy;
	Class _transportClass;
	Class _localAuthenticationContextClass;

}

@property (nonatomic,retain) id<ACFCryptographProtocol> cryptograph;                                //@synthesize cryptograph=_cryptograph - In the implementation block
@property (nonatomic,retain) id<ACFKeychainManagerProtocol> keychainManager;                        //@synthesize keychainManager=_keychainManager - In the implementation block
@property (nonatomic,retain) id<ACFCertificateStoragePolicy> certificateStoragePolicy;              //@synthesize certificateStoragePolicy=_certificateStoragePolicy - In the implementation block
@property (nonatomic,retain) Class transportClass;                                                  //@synthesize transportClass=_transportClass - In the implementation block
@property (nonatomic,retain) Class localAuthenticationContextClass;                                 //@synthesize localAuthenticationContextClass=_localAuthenticationContextClass - In the implementation block
+(void)setComponents:(id)arg1 ;
+(id)components;
+(id)defaultComponents;
-(id<ACFKeychainManagerProtocol>)keychainManager;
-(void)setKeychainManager:(id<ACFKeychainManagerProtocol>)arg1 ;
-(void)dealloc;
-(id<ACFCryptographProtocol>)cryptograph;
-(Class)transportClass;
-(Class)localAuthenticationContextClass;
-(id)createTransport;
-(id)createLocalAuthenticationContext;
-(id<ACFCertificateStoragePolicy>)certificateStoragePolicy;
-(void)setTransportClass:(Class)arg1 ;
-(void)setCryptograph:(id<ACFCryptographProtocol>)arg1 ;
-(void)setCertificateStoragePolicy:(id<ACFCertificateStoragePolicy>)arg1 ;
-(void)setLocalAuthenticationContextClass:(Class)arg1 ;
@end

