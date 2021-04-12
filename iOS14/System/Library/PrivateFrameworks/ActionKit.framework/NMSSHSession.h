/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol NMSSHSessionDelegate;
#import <ActionKit/ActionKit-Structs.h>
@class NMSSHHostConfig, NSString, NSNumber, NMSSHChannel, NMSFTP, NSError;

@interface NMSSHSession : NSObject {

	BOOL _connected;
	id<NMSSHSessionDelegate> _delegate;
	NMSSHHostConfig* _hostConfig;
	NSString* _host;
	NSNumber* _port;
	NSString* _username;
	long long _fingerprintHash;
	NSString* _banner;
	LIBSSH2_SESSIONRef _session;
	CFSocketRef _socket;
	LIBSSH2_AGENTRef _agent;
	/*^block*/id _kbAuthenticationBlock;
	NMSSHChannel* _channel;
	NMSFTP* _sftp;

}

@property (assign,nonatomic) LIBSSH2_AGENTRef agent;                                    //@synthesize agent=_agent - In the implementation block
@property (assign,getter=rawSession,nonatomic) LIBSSH2_SESSIONRef session;              //@synthesize session=_session - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                         //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSString * host;                                           //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * username;                                       //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) id kbAuthenticationBlock;                                    //@synthesize kbAuthenticationBlock=_kbAuthenticationBlock - In the implementation block
@property (nonatomic,retain) NMSSHChannel * channel;                                    //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NMSFTP * sftp;                                             //@synthesize sftp=_sftp - In the implementation block
@property (nonatomic,retain) NSNumber * port;                                           //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NMSSHHostConfig * hostConfig;                              //@synthesize hostConfig=_hostConfig - In the implementation block
@property (assign,nonatomic,__weak) id<NMSSHSessionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * timeout; 
@property (nonatomic,readonly) NSError * lastError; 
@property (assign,nonatomic) long long fingerprintHash;                                 //@synthesize fingerprintHash=_fingerprintHash - In the implementation block
@property (nonatomic,retain) NSString * banner;                                         //@synthesize banner=_banner - In the implementation block
@property (nonatomic,readonly) NSString * remoteBanner; 
@property (nonatomic,readonly) CFSocketRef socket;                                      //@synthesize socket=_socket - In the implementation block
@property (getter=isAuthorized,nonatomic,readonly) BOOL authorized; 
+(id)URLForHost:(id)arg1 ;
+(id)connectToHost:(id)arg1 port:(long long)arg2 withUsername:(id)arg3 ;
+(id)connectToHost:(id)arg1 withUsername:(id)arg2 ;
-(void)setPort:(NSNumber *)arg1 ;
-(BOOL)isConnected;
-(NSError *)lastError;
-(void)disconnect;
-(void)setConnected:(BOOL)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(NSNumber *)port;
-(NSString *)host;
-(NSString *)banner;
-(void)setUsername:(NSString *)arg1 ;
-(LIBSSH2_AGENTRef)agent;
-(void)setAgent:(LIBSSH2_AGENTRef)arg1 ;
-(id)applicationSupportDirectory;
-(id<NMSSHSessionDelegate>)delegate;
-(NMSFTP *)sftp;
-(CFSocketRef)socket;
-(BOOL)connect;
-(void)setTimeout:(NSNumber *)arg1 ;
-(void)setChannel:(NMSSHChannel *)arg1 ;
-(NSNumber *)timeout;
-(NMSSHChannel *)channel;
-(NSString *)username;
-(void)setDelegate:(id<NMSSHSessionDelegate>)arg1 ;
-(void)setSession:(LIBSSH2_SESSIONRef)arg1 ;
-(BOOL)isAuthorized;
-(void)setBanner:(NSString *)arg1 ;
-(id)initWithHost:(id)arg1 port:(long long)arg2 andUsername:(id)arg3 ;
-(id)initWithHost:(id)arg1 configs:(id)arg2 withDefaultPort:(long long)arg3 defaultUsername:(id)arg4 ;
-(id)initWithHost:(id)arg1 andUsername:(id)arg2 ;
-(id)hostIPAddresses;
-(NSString *)remoteBanner;
-(BOOL)connectWithTimeout:(id)arg1 ;
-(BOOL)authenticateByPassword:(id)arg1 ;
-(BOOL)authenticateByPublicKey:(id)arg1 privateKey:(id)arg2 andPassword:(id)arg3 ;
-(BOOL)authenticateByInMemoryPublicKey:(id)arg1 privateKey:(id)arg2 andPassword:(id)arg3 ;
-(BOOL)authenticateByKeyboardInteractive;
-(BOOL)authenticateByKeyboardInteractiveUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)connectToAgent;
-(id)supportedAuthenticationMethods;
-(BOOL)supportsAuthenticationMethod:(id)arg1 ;
-(id)fingerprint:(long long)arg1 ;
-(id)userKnownHostsFileName;
-(long long)knownHostStatusInFiles:(id)arg1 ;
-(long long)knownHostStatusWithFile:(id)arg1 ;
-(BOOL)addKnownHostName:(id)arg1 port:(long long)arg2 toFile:(id)arg3 withSalt:(id)arg4 ;
-(id)keyboardInteractiveRequest:(id)arg1 ;
-(NMSSHHostConfig *)hostConfig;
-(void)setHostConfig:(NMSSHHostConfig *)arg1 ;
-(long long)fingerprintHash;
-(void)setFingerprintHash:(long long)arg1 ;
-(LIBSSH2_SESSIONRef)rawSession;
-(id)kbAuthenticationBlock;
-(void)setKbAuthenticationBlock:(id)arg1 ;
-(void)setSftp:(NMSFTP *)arg1 ;
@end

