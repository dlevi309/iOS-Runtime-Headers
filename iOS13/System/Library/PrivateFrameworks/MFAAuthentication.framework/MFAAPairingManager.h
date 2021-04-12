/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
*/


@class NSXPCConnection;

@interface MFAAPairingManager : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)generatePairingTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addPairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removePairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)verifyPairingWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

