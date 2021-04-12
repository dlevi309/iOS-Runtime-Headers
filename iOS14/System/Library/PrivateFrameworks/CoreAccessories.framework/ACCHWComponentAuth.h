/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)signVeridianChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 updateRegistry:(BOOL)arg3 ;
-(void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateVeridianWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_init;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

