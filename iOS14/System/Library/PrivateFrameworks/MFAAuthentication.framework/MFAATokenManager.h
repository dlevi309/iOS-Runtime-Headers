/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
*/


@class NSXPCConnection;

@interface MFAATokenManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
+(BOOL)isTokenValidForFeatures:(unsigned long long)arg1 token:(id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)requestActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)confirmActivationForToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)confirmActivationForAuthToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_init;
-(void)requestMetadataForToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestMetadataForAuthToken:(id)arg1 withUUID:(id)arg2 requestedLocale:(id)arg3 requestInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)requestActivationForAuthToken:(id)arg1 withUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

