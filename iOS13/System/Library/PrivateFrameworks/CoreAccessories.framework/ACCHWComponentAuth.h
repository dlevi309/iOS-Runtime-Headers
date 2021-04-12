/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 updateRegistry:(BOOL)arg3 ;
-(void)authenticateVeridianWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signVeridianChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

