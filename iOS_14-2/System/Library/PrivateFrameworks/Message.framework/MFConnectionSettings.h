/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MFConnectionSettings : NSObject <NSCopying> {

	NSString* _hostname;
	NSString* _serviceName;
	NSString* _certUIService;
	NSArray* _clientCertificates;
	unsigned _portNumber;
	CFStringRef _connectionServiceType;
	BOOL _usesSSL;
	BOOL _usesOpportunisticSockets;
	BOOL _tryDirectSSLConnection;
	BOOL _allowsTrustPrompt;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _accountIdentifier;
	NSString* _networkAccountIdentifier;

}

@property (nonatomic,copy) NSString * certUIService;                                  //@synthesize certUIService=_certUIService - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                       //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSArray * clientCertificates;                              //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * networkAccountIdentifier;                       //@synthesize networkAccountIdentifier=_networkAccountIdentifier - In the implementation block
@property (assign,nonatomic) unsigned portNumber;                                     //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) BOOL usesSSL;                                            //@synthesize usesSSL=_usesSSL - In the implementation block
@property (assign,nonatomic) BOOL usesOpportunisticSockets;                           //@synthesize usesOpportunisticSockets=_usesOpportunisticSockets - In the implementation block
@property (assign,nonatomic) BOOL tryDirectSSL;                                       //@synthesize tryDirectSSLConnection=_tryDirectSSLConnection - In the implementation block
@property (assign,nonatomic) BOOL allowsTrustPrompt;                                  //@synthesize allowsTrustPrompt=_allowsTrustPrompt - In the implementation block
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)accountIdentifier;
-(BOOL)usesSSL;
-(id)description;
-(void)setHostname:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)hostname;
-(unsigned)portNumber;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(NSString *)certUIService;
-(void)setCertUIService:(NSString *)arg1 ;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(void)setTryDirectSSL:(BOOL)arg1 ;
-(BOOL)tryDirectSSL;
-(CFStringRef)connectionServiceType;
-(void)setConnectionServiceType:(CFStringRef)arg1 ;
-(BOOL)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(BOOL)arg1 ;
-(NSString *)networkAccountIdentifier;
-(void)setNetworkAccountIdentifier:(NSString *)arg1 ;
-(NSString *)serviceName;
-(BOOL)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(BOOL)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

