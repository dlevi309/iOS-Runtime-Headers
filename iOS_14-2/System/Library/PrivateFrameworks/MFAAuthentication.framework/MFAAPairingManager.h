/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
*/


@class NSXPCConnection;

@interface MFAAPairingManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(id)_init;
-(void)verifyPairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generatePairingTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addPairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

