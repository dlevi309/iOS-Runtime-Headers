/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(id)_init;
-(void)requestMetadataForCertificate:(id)arg1 requestedLocale:(id)arg2 requestInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)validateCertificate:(id)arg1 realtime:(BOOL)arg2 error:(id*)arg3 ;
-(int)_validateCertificateChain:(id)arg1 realtime:(BOOL)arg2 error:(id*)arg3 ;
-(int)_validateCertificateWithServer:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3 error:(id*)arg4 ;
-(int)_getCachedCertStatus:(id)arg1 issuerSeq:(id)arg2 ppid:(id)arg3 ;
-(void)validateCertificate:(id)arg1 realtime:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)validateCertificateChain:(id)arg1 realtime:(BOOL)arg2 error:(id*)arg3 ;
@end

