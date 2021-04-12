/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
*/


@class NSXPCConnection, NSUserDefaults;

@interface MFAACertificateManager : NSObject {

	NSXPCConnection* _xpcConnection;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)sharedManager;
+(id)anchorCertificatesForTypes:(int)arg1 ;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)requestMetadataForCertificate:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)validateCertificate:(id)arg1 realtime:(BOOL)arg2 error:(id*)arg3 ;
-(int)_validateCertificateChain:(id)arg1 realtime:(BOOL)arg2 error:(id*)arg3 ;
-(int)_validateCertificateWithServer:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3 error:(id*)arg4 ;
-(int)_getCachedCertStatus:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3 ;
-(void)validateCertificate:(id)arg1 realtime:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)validateCertificateChain:(id)arg1 realtime:(BOOL)arg2 error:(id*)arg3 ;
@end

